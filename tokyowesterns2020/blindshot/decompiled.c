
void _init(void)

{
  if (PTR___gmon_start___00103fe8 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___00103fe8)();
  }
  return;
}


void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void _exit(int __status)

{
  (*(code *)PTR__exit_00103f98)();
  return;
}


void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00103fa0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void setbuf(FILE *__stream,char *__buf)

{
  (*(code *)PTR_setbuf_00103fa8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

uint alarm(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_alarm_00103fb0)();
  return uVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int dprintf(int __fd,char *__fmt,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_dprintf_00103fb8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_00103fc0)();
  return iVar1;
}


void __isoc99_scanf(void)

{
  (*(code *)PTR___isoc99_scanf_00103fc8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00103fd0)();
  return uVar1;
}


void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  (*(code *)PTR___libc_start_main_00103fe0)
            (main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3,
             auStack8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00101183) */
/* WARNING: Removing unreachable block (ram,0x0010118f) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x001011c4) */
/* WARNING: Removing unreachable block (ram,0x001011d0) */

void register_tm_clones(void)

{
  return;
}


void __do_global_dtors_aux(void)

{
  if (completed_8059 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      __cxa_finalize(__dso_handle);
    }
    deregister_tm_clones();
    completed_8059 = 1;
    return;
  }
  return;
}


void frame_dummy(void)

{
  register_tm_clones();
  return;
}


int init(EVP_PKEY_CTX *ctx)

{
  uint uVar1;
  
  setbuf(stdin,(char *)0x0);
  sleep(1);
  uVar1 = alarm(5);
  return (int)uVar1;
}


undefined8 main(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = open("/dev/null",1);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = service((ulong)(uint)(int)(char)iVar1);
  }
  return uVar2;
}


ulong service(char param_1)

{
  int iVar1;
  uint uVar2;
  long in_FS_OFFSET;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  dprintf(1,"> ");
  iVar1 = __isoc99_scanf("%200ms",&local_18);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    _exit(-1);
  }
  uVar2 = dprintf((int)param_1,local_18);
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    _exit(-1);
  }
  dprintf(1,"done.\n");
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (ulong)uVar2;
}


void __libc_csu_init(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init();
  lVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])(param_1 & 0xffffffff,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 2);
  return;
}


void __libc_csu_fini(void)

{
  return;
}


void _fini(void)

{
  return;
}


/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void _exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _exit@@GLIBC_2.2.5 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __stack_chk_fail@@GLIBC_2.4 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void setbuf(FILE *__stream,char *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* setbuf@@GLIBC_2.2.5 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

uint alarm(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* alarm@@GLIBC_2.2.5 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int dprintf(int __fd,char *__fmt,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* dprintf@@GLIBC_2.2.5 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __libc_start_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __libc_start_main@@GLIBC_2.2.5 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __gmon_start__(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* open@@GLIBC_2.2.5 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __isoc99_scanf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __isoc99_scanf@@GLIBC_2.7 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* sleep@@GLIBC_2.2.5 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_finalize@@GLIBC_2.2.5 */
  halt_baddata();
}

