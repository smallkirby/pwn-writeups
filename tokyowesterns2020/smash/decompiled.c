
void _DT_INIT(void)

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

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00103fa0)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int dprintf(int __fd,char *__fmt,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_dprintf_00103fb0)();
  return iVar1;
}


void malloc_usable_size(void)

{
  (*(code *)PTR_malloc_usable_size_00103fb8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00103fc0)();
  return sVar1;
}


void __dprintf_chk(void)

{
  (*(code *)PTR___dprintf_chk_00103fc8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_00103fd0)();
  return pcVar1;
}


void entry(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  (*(code *)PTR___libc_start_main_00103fe0)
            (&DAT_00101209,in_stack_00000000,&stack0x00000008,&LAB_00101370,&DAT_001013e0,param_3,
             auStack8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00101163) */
/* WARNING: Removing unreachable block (ram,0x0010116f) */

void FUN_00101150(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x001011a4) */
/* WARNING: Removing unreachable block (ram,0x001011b0) */

void FUN_00101180(void)

{
  return;
}


void _FINI_0(void)

{
  if (DAT_00104010 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101150();
    DAT_00104010 = 1;
    return;
  }
  return;
}


void _INIT_0(void)

{
  FUN_00101180();
  return;
}


char * FUN_001012e7(char *param_1,long param_2)

{
  ssize_t sVar1;
  size_t __n;
  char *pcVar2;
  char local_38 [44];
  int local_c;
  
  if (param_2 != 0) {
    sVar1 = read(0,local_38,param_2 - 1);
    local_c = (int)sVar1;
    if (-1 < local_c) {
      local_38[local_c] = '\0';
      if (param_1 != (char *)0x0) {
        __n = malloc_usable_size(param_1);
        pcVar2 = strncpy(param_1,local_38,__n);
        return pcVar2;
      }
      pcVar2 = strdup(local_38);
      return pcVar2;
    }
  }
  return (char *)0;
}


void _DT_FINI(void)

{
  return;
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int dprintf(int __fd,char *__fmt,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void malloc_usable_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __libc_start_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __gmon_start__(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __dprintf_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
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

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

