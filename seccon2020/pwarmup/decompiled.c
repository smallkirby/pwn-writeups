
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00600b98;
  if (PTR___gmon_start___00600b98 != (undefined *)0x0) {
    iVar1 = (*(code *)PTR___gmon_start___00600b98)();
  }
  return iVar1;
}


void FUN_00400570(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00600bb0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00600bb8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00600bc0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

uint alarm(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_alarm_00600bc8)();
  return uVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setvbuf_00600bd0)();
  return iVar1;
}


void __isoc99_scanf(void)

{
  (*(code *)PTR___isoc99_scanf_00600bd8)();
  return;
}


void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  (*(code *)PTR___libc_start_main_00600b90)
            (main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3,
             auStack8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


void _dl_relocate_static_pie(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400621) */
/* WARNING: Removing unreachable block (ram,0x0040062b) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400663) */
/* WARNING: Removing unreachable block (ram,0x0040066d) */

void register_tm_clones(void)

{
  return;
}


void __do_global_dtors_aux(void)

{
  if (completed_7698 == '\0') {
    deregister_tm_clones();
    completed_7698 = 1;
    return;
  }
  return;
}


void frame_dummy(void)

{
  register_tm_clones();
  return;
}


undefined8 main(void)

{
  undefined local_28 [32];
  
  puts("Welcome to Pwn Warmup!");
  __isoc99_scanf(&DAT_0040081b,local_28);
  fclose(stdout);
  fclose(stderr);
  return 0;
}


void setup(void)

{
  setvbuf(stdin,(char *)0x0,2,0);
  setvbuf(stdout,(char *)0x0,2,0);
  setvbuf(stderr,(char *)0x0,2,0);
  alarm(0x3c);
  return;
}


void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init(param_1);
  lVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
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
/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* puts@@GLIBC_2.2.5 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* fclose@@GLIBC_2.2.5 */
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

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* setvbuf@@GLIBC_2.2.5 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __isoc99_scanf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __isoc99_scanf@@GLIBC_2.7 */
  halt_baddata();
}

