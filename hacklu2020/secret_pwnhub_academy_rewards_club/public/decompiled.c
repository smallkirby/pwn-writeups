
/* WARNING: Removing unreachable block (ram,0x000100e0) */
/* WARNING: Removing unreachable block (ram,0x000100d4) */
/* WARNING: Removing unreachable block (ram,0x000100d8) */

int _init(EVP_PKEY_CTX *ctx)

{
  frame_dummy();
  __do_global_ctors_aux();
  return (int)ctx;
}


/* WARNING: Removing unreachable block (ram,0x0001011c) */

void _start(void)

{
  undefined4 local_res40;
  undefined auStackX68 [24];
  
  __uClibc_main(main,local_res40,auStackX68,_init,_fini);
  IllegalInstructionTrap(0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00010148) */
/* WARNING: Removing unreachable block (ram,0x00010128) */
/* WARNING: Removing unreachable block (ram,0x00010158) */
/* WARNING: Removing unreachable block (ram,0x00010160) */

undefined4 deregister_tm_clones(undefined4 param_1)

{
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x0001019c) */
/* WARNING: Removing unreachable block (ram,0x00010168) */
/* WARNING: Removing unreachable block (ram,0x000101ac) */
/* WARNING: Removing unreachable block (ram,0x000101b4) */

undefined4 register_tm_clones(undefined4 param_1)

{
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x00010224) */
/* WARNING: Removing unreachable block (ram,0x00010228) */
/* WARNING: Removing unreachable block (ram,0x00010230) */
/* WARNING: Removing unreachable block (ram,0x000101bc) */
/* WARNING: Removing unreachable block (ram,0x00010240) */
/* WARNING: Removing unreachable block (ram,0x00010208) */

undefined4 __do_global_dtors_aux(undefined4 param_1)

{
  if (completed_5174 == '\0') {
    deregister_tm_clones();
    completed_5174 = '\x01';
  }
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x0001025c) */
/* WARNING: Removing unreachable block (ram,0x00010260) */

undefined4 call___do_global_dtors_aux(undefined4 param_1)

{
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x00010280) */
/* WARNING: Removing unreachable block (ram,0x00010268) */
/* WARNING: Removing unreachable block (ram,0x00010288) */
/* WARNING: Removing unreachable block (ram,0x00010290) */

void frame_dummy(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  register_tm_clones(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00010298) */
/* WARNING: Removing unreachable block (ram,0x0001029c) */

undefined4 call_frame_dummy(undefined4 param_1)

{
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x000102f4) */
/* WARNING: Removing unreachable block (ram,0x000102d0) */

void setup(void)

{
  setvbuf((FILE *)stdin,(char *)0x0,2,0);
  setvbuf(stdout,(char *)0x0,2,0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x000103f4) */
/* WARNING: Removing unreachable block (ram,0x000103d0) */
/* WARNING: Removing unreachable block (ram,0x00010354) */
/* WARNING: Removing unreachable block (ram,0x00010384) */
/* WARNING: Removing unreachable block (ram,0x000103e0) */
/* WARNING: Removing unreachable block (ram,0x00010414) */
/* WARNING: Removing unreachable block (ram,0x0001033c) */

void fn(void)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  undefined auStackX0 [92];
  undefined auStack128 [128];
  
  lVar6 = ZEXT48(register0x00000038) << 0x20;
  printf("%p\n",auStack128);
  read(0,(void *)((int)((ulonglong)lVar6 >> 0x20) + -0x80),0x200);
  do {
    sVar2 = read(0,(void *)((int)((ulonglong)lVar6 >> 0x20) + -0x80),0x200 - already_read);
    iVar1 = sVar2 + last_read;
    last_read = iVar1;
    if (iVar1 < 0) {
      piVar3 = __errno_location();
      iVar5 = *piVar3;
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      printf("Read error: %d, errno: %d [%s]\n",iVar1,iVar5,pcVar4);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    already_read = already_read + iVar1;
  } while ((already_read != 0x200) &&
          (*(char *)((int)((ulonglong)lVar6 >> 0x20) + already_read + -0x81) != '\n'));
  return;
}


/* WARNING: Removing unreachable block (ram,0x000104cc) */
/* WARNING: Removing unreachable block (ram,0x000104c4) */

undefined4 main(void)

{
  setup();
  fn();
  return 0;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x000104f4) */
/* WARNING: Removing unreachable block (ram,0x000104fc) */
/* WARNING: Removing unreachable block (ram,0x00010544) */

uint __read_nocancel(uint param_1)

{
  int unaff_g7;
  bool in_i_cf;
  
  sw_trap(0x10);
  if (in_i_cf) {
    param_1 = -param_1;
  }
  if (0xfffff000 < param_1) {
    *(int *)(unaff_g7 + -8) = -param_1;
    param_1 = 0xffffffff;
  }
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x00010588) */
/* WARNING: Removing unreachable block (ram,0x0001054c) */
/* WARNING: Removing unreachable block (ram,0x0001057c) */
/* WARNING: Removing unreachable block (ram,0x00010568) */
/* WARNING: Removing unreachable block (ram,0x00010560) */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  int unaff_g7;
  ssize_t sVar1;
  undefined4 uVar2;
  undefined4 in_o3;
  undefined4 in_o4;
  undefined4 in_o5;
  
  if (*(int *)(unaff_g7 + 0xc) == 0) {
    sVar1 = __read_nocancel(__fd,__buf,__nbytes,in_o3,in_o4,in_o5);
    return sVar1;
  }
  uVar2 = __libc_enable_asynccancel(__fd,__buf,__nbytes);
  sVar1 = __read_nocancel(__fd,__buf,__nbytes);
  __libc_disable_asynccancel(uVar2);
  return sVar1;
}


/* WARNING: This is an inlined function */

void __sparc_get_pc_thunk_l7(void)

{
  return;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x000105a0) */
/* WARNING: Removing unreachable block (ram,0x000105a8) */
/* WARNING: Removing unreachable block (ram,0x000105bc) */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int * __errno_location(void)

{
  int unaff_g7;
  
  return (int *)(unaff_g7 + -8);
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00010648) */
/* WARNING: Removing unreachable block (ram,0x000107a4) */
/* WARNING: Removing unreachable block (ram,0x000105c4) */
/* WARNING: Removing unreachable block (ram,0x00010774) */
/* WARNING: Removing unreachable block (ram,0x000105cc) */

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  _IO_marker *unaff_g7;
  int iVar5;
  ushort uVar6;
  char *pcVar7;
  
  pcVar7 = __stream->_IO_save_base;
  if (pcVar7 == (char *)0x0) {
    if (__stream->_markers != unaff_g7) {
      uVar3 = ((int)&__stream->_IO_backup_base >> 2 ^ (int)&__stream->_IO_backup_base >> 0xc) & 0x3f
      ;
      do {
        cVar2 = __sparc32_atomic_locks[uVar3];
        __sparc32_atomic_locks[uVar3] = -1;
      } while (cVar2 != '\0');
      pcVar4 = __stream->_IO_backup_base;
      if (pcVar4 == (char *)0x0) {
        __stream->_IO_backup_base = (char *)0x1;
      }
      __sparc32_atomic_locks[uVar3] = 0;
      if (pcVar4 == (char *)0x0) {
        __stream->_markers = unaff_g7;
      }
      else {
        __lll_lock_wait_private();
        __stream->_markers = unaff_g7;
      }
    }
    __stream->_IO_save_end = __stream->_IO_save_end + 1;
  }
  if (2 < (uint)__modes) {
    iVar5 = -1;
    unaff_g7[-1]._sbuf = (_IO_FILE *)0x16;
    goto LAB_00010684;
  }
  iVar5 = -1;
  if ((*(ushort *)&__stream->_flags & 0x8cf) != 0) goto LAB_00010684;
  *(ushort *)&__stream->_flags = *(ushort *)&__stream->_flags & 0xfcff | (ushort)(__modes << 8);
  uVar6 = 0;
  if ((__modes == 2) || (__n == 0)) {
    __n = 0;
    __buf = (char *)0x0;
LAB_00010788:
    uVar1 = *(ushort *)&__stream->_flags;
LAB_0001078c:
    if ((uVar1 & 0x4000) == 0) {
      uVar1 = *(ushort *)&__stream->_flags;
    }
    else {
      *(ushort *)&__stream->_flags = uVar1 & 0xbfff;
      free(__stream->_IO_read_end);
      uVar1 = *(ushort *)&__stream->_flags;
    }
    __stream->_IO_read_end = __buf;
    *(ushort *)&__stream->_flags = uVar6 | uVar1;
    __stream->_IO_read_base = __buf + __n;
    __stream->_IO_write_base = __buf;
    __stream->_IO_write_ptr = __buf;
    __stream->_IO_write_end = __buf;
    __stream->_IO_buf_base = __buf;
  }
  else {
    if (__buf != (char *)0x0) {
      uVar1 = *(ushort *)&__stream->_flags;
      goto LAB_0001078c;
    }
    if (__stream->_IO_read_base + -(int)__stream->_IO_read_end != (char *)__n) {
      uVar6 = 0x4000;
      __buf = (char *)malloc(__n);
      iVar5 = 0;
      if (__buf == (char *)0x0) goto LAB_00010684;
      goto LAB_00010788;
    }
  }
  iVar5 = 0;
LAB_00010684:
  if ((pcVar7 == (char *)0x0) &&
     (pcVar7 = __stream->_IO_save_end, __stream->_IO_save_end = pcVar7 + -1,
     pcVar7 + -1 == (char *)0x0)) {
    __stream->_markers = (_IO_marker *)0x0;
    uVar3 = ((int)&__stream->_IO_backup_base >> 2 ^ (int)&__stream->_IO_backup_base >> 0xc) & 0x3f;
    do {
      cVar2 = __sparc32_atomic_locks[uVar3];
      __sparc32_atomic_locks[uVar3] = -1;
    } while (cVar2 != '\0');
    pcVar7 = __stream->_IO_backup_base;
    __sparc32_atomic_locks[uVar3] = 0;
    __stream->_IO_backup_base = (char *)0x0;
    if (1 < (int)pcVar7) {
      sw_trap(0x10);
    }
  }
  return iVar5;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00010820) */
/* WARNING: Removing unreachable block (ram,0x000107e4) */
/* WARNING: Removing unreachable block (ram,0x00010810) */

int printf(char *__format,...)

{
  int iVar1;
  undefined4 in_o1;
  undefined4 in_o2;
  undefined4 in_o3;
  undefined4 in_o4;
  undefined4 in_o5;
  undefined4 local_res48;
  undefined4 local_res4c;
  undefined4 local_res50;
  undefined4 local_res54;
  undefined4 local_res58;
  
  local_res48 = in_o1;
  local_res4c = in_o2;
  local_res50 = in_o3;
  local_res54 = in_o4;
  local_res58 = in_o5;
  iVar1 = vfprintf(stdout,__format,&local_res48);
  return iVar1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00010944) */
/* WARNING: Removing unreachable block (ram,0x00010830) */
/* WARNING: Removing unreachable block (ram,0x00010838) */

undefined4 _stdio_term(undefined4 param_1)

{
  char cVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_g7;
  int iVar5;
  ushort *puVar6;
  
  _stdio_openlist_add_lock._0_4_ = 0;
  _stdio_openlist_add_lock._4_4_ = 0;
  _stdio_openlist_add_lock._8_4_ = 0;
  _stdio_openlist_del_lock._0_4_ = 0;
  _stdio_openlist_del_lock._4_4_ = 0;
  _stdio_openlist_del_lock._8_4_ = 0;
  puVar2 = _stdio_openlist;
  while (puVar6 = _stdio_openlist, puVar2 != (ushort *)0x0) {
    if (*(int *)(puVar2 + 0x18) == unaff_g7) {
      *(undefined4 *)(puVar2 + 0x12) = 1;
    }
    else {
      uVar3 = ((int)(puVar2 + 0x14) >> 2 ^ (int)(puVar2 + 0x14) >> 0xc) & 0x3f;
      do {
        cVar1 = __sparc32_atomic_locks[uVar3];
        __sparc32_atomic_locks[uVar3] = -1;
      } while (cVar1 != '\0');
      iVar5 = *(int *)(puVar2 + 0x14);
      if (iVar5 == 0) {
        *(undefined4 *)(puVar2 + 0x14) = 1;
      }
      __sparc32_atomic_locks[uVar3] = 0;
      if (iVar5 == 0) {
        *(undefined4 *)(puVar2 + 0x12) = 1;
      }
      else {
        uVar4 = *(undefined4 *)(puVar2 + 4);
        *puVar2 = 0x30;
        *(undefined4 *)(puVar2 + 0xc) = uVar4;
        *(undefined4 *)(puVar2 + 0xe) = uVar4;
        *(undefined4 *)(puVar2 + 8) = uVar4;
        *(undefined4 *)(puVar2 + 10) = uVar4;
        *(undefined4 *)(puVar2 + 0x12) = 1;
      }
    }
    *(undefined4 *)(puVar2 + 0x14) = 0;
    *(undefined4 *)(puVar2 + 0x16) = 0;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    puVar2 = *(ushort **)(puVar2 + 0x10);
  }
  while (puVar6 != (ushort *)0x0) {
    if ((*puVar6 & 0x40) == 0) {
      iVar5 = *(int *)(puVar6 + 2);
    }
    else {
      __stdio_wcommit(puVar6);
      iVar5 = *(int *)(puVar6 + 2);
    }
    if (iVar5 == -2) {
      if (*(code **)(puVar6 + 0x22) == (code *)0x0) {
        puVar6 = *(ushort **)(puVar6 + 0x10);
      }
      else {
        (**(code **)(puVar6 + 0x22))(*(undefined4 *)(puVar6 + 0x1a));
        puVar6 = *(ushort **)(puVar6 + 0x10);
      }
    }
    else {
      puVar6 = *(ushort **)(puVar6 + 0x10);
    }
  }
  return param_1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x000109c4) */
/* WARNING: Removing unreachable block (ram,0x0001097c) */
/* WARNING: Removing unreachable block (ram,0x0001099c) */
/* WARNING: Removing unreachable block (ram,0x00010984) */

undefined4 _stdio_init(undefined4 param_1)

{
  int unaff_g7;
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(unaff_g7 + -8);
  iVar1 = isatty(0);
  if (iVar1 == 0) {
    _stdio_streams._0_2_ = _stdio_streams._0_2_ ^ 0x100;
  }
  iVar1 = isatty(1);
  if (iVar1 == 0) {
    _stdio_streams._52_2_ = _stdio_streams._52_2_ ^ 0x100;
  }
  *(undefined4 *)(unaff_g7 + -8) = uVar2;
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x00010a00) */
/* WARNING: Removing unreachable block (ram,0x00010a1c) */

int __stdio_wcommit(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 8);
    __stdio_WRITE(param_1);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  return iVar1 - *(int *)(param_1 + 8);
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00010abc) */
/* WARNING: Removing unreachable block (ram,0x00010ae8) */
/* WARNING: Removing unreachable block (ram,0x00010a38) */
/* WARNING: Removing unreachable block (ram,0x00010b84) */
/* WARNING: Removing unreachable block (ram,0x00010a40) */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  _IO_marker *unaff_g7;
  char **ppcVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar6 = __s->_IO_save_base;
  if (pcVar6 == (char *)0x0) {
    if (__s->_markers != unaff_g7) {
      ppcVar4 = &__s->_IO_backup_base;
      uVar2 = ((int)ppcVar4 >> 2 ^ (int)ppcVar4 >> 0xc) & 0x3f;
      do {
        cVar1 = __sparc32_atomic_locks[uVar2];
        __sparc32_atomic_locks[uVar2] = -1;
      } while (cVar1 != '\0');
      pcVar3 = __s->_IO_backup_base;
      if (pcVar3 == (char *)0x0) {
        __s->_IO_backup_base = (char *)0x1;
      }
      __sparc32_atomic_locks[uVar2] = 0;
      if (pcVar3 == (char *)0x0) {
        __s->_markers = unaff_g7;
      }
      else {
        __lll_lock_wait_private(ppcVar4,__format,__arg);
        __s->_markers = unaff_g7;
      }
    }
    __s->_IO_save_end = __s->_IO_save_end + 1;
  }
  if (((*(ushort *)&__s->_flags & 0x40) == 0) && (iVar5 = __stdio_trans2w(__s), iVar5 != 0)) {
    iVar5 = -1;
  }
  else {
    iVar5 = _vfprintf_internal(__s,__format,__arg);
  }
  if ((pcVar6 == (char *)0x0) &&
     (pcVar6 = __s->_IO_save_end, __s->_IO_save_end = pcVar6 + -1, pcVar6 + -1 == (char *)0x0)) {
    __s->_markers = (_IO_marker *)0x0;
    uVar2 = ((int)&__s->_IO_backup_base >> 2 ^ (int)&__s->_IO_backup_base >> 0xc) & 0x3f;
    do {
      cVar1 = __sparc32_atomic_locks[uVar2];
      __sparc32_atomic_locks[uVar2] = -1;
    } while (cVar1 != '\0');
    pcVar6 = __s->_IO_backup_base;
    __sparc32_atomic_locks[uVar2] = 0;
    __s->_IO_backup_base = (char *)0x0;
    if (1 < (int)pcVar6) {
      sw_trap(0x10);
    }
  }
  return iVar5;
}


/* WARNING: Removing unreachable block (ram,0x00010ba0) */
/* WARNING: Removing unreachable block (ram,0x00010bc0) */

int _charpad(undefined4 param_1,undefined param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined local_8 [8];
  
  iVar2 = param_3;
  local_8[0] = param_2;
  while ((iVar2 != 0 && (iVar1 = __stdio_fwrite(local_8,1,param_1), iVar1 == 1))) {
    iVar2 = iVar2 + -1;
  }
  return param_3 - iVar2;
}


/* WARNING: Removing unreachable block (ram,0x00010c3c) */
/* WARNING: Removing unreachable block (ram,0x00010be0) */
/* WARNING: Removing unreachable block (ram,0x00010c14) */
/* WARNING: Removing unreachable block (ram,0x00010bf0) */

int _fp_out_narrow(undefined4 param_1,uint param_2,size_t param_3,char *param_4)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 & 0x80) == 0) {
    iVar3 = 0;
    sVar1 = param_3;
  }
  else {
    sVar1 = strlen(param_4);
    iVar3 = 0;
    iVar2 = param_3 - sVar1;
    if ((0 < iVar2) && (iVar3 = _charpad(param_1,param_2 & 0x7f,iVar2), iVar2 != iVar3)) {
      return iVar3;
    }
  }
  iVar2 = 0;
  if (0 < (int)sVar1) {
    iVar2 = __stdio_fwrite(param_4,sVar1,param_1);
  }
  return iVar3 + iVar2;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00010cb4) */
/* WARNING: Removing unreachable block (ram,0x00010d58) */
/* WARNING: Removing unreachable block (ram,0x000110d4) */
/* WARNING: Removing unreachable block (ram,0x0001112c) */
/* WARNING: Removing unreachable block (ram,0x00010ea8) */
/* WARNING: Removing unreachable block (ram,0x00011060) */
/* WARNING: Removing unreachable block (ram,0x00011224) */
/* WARNING: Removing unreachable block (ram,0x00010dc4) */
/* WARNING: Removing unreachable block (ram,0x00010ca0) */
/* WARNING: Removing unreachable block (ram,0x00010c58) */
/* WARNING: Removing unreachable block (ram,0x00010c88) */
/* WARNING: Removing unreachable block (ram,0x00011094) */
/* WARNING: Removing unreachable block (ram,0x00011070) */
/* WARNING: Removing unreachable block (ram,0x0001103c) */
/* WARNING: Removing unreachable block (ram,0x00010e8c) */
/* WARNING: Removing unreachable block (ram,0x000111a4) */
/* WARNING: Removing unreachable block (ram,0x00010d60) */
/* WARNING: Removing unreachable block (ram,0x00010d1c) */
/* WARNING: Removing unreachable block (ram,0x00010c70) */
/* WARNING: Removing unreachable block (ram,0x00010c60) */
/* WARNING: Type propagation algorithm not settling */

char * _vfprintf_internal(FILE *param_1,char *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined *puVar2;
  byte *pbVar3;
  char cVar4;
  uint uVar5;
  int unaff_g7;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  char **ppcVar12;
  uint uVar13;
  char *__string;
  char **ppcVar14;
  char *pcVar15;
  uint uVar16;
  char **__maxlen;
  char *pcVar17;
  uint uVar18;
  bool bVar19;
  char **local_12c [5];
  char local_118;
  undefined local_117;
  undefined uStack153;
  char *local_98;
  char **local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  char local_81;
  int local_80;
  int local_7c;
  uint local_78;
  byte local_72;
  uint auStack112 [10];
  undefined auStack72 [72];
  
  iVar6 = _ppfs_init(&local_98,param_2);
  if (iVar6 < 0) {
    sVar7 = strlen(local_98);
    if (sVar7 != 0) {
      __stdio_fwrite(local_98,sVar7,param_1);
    }
  }
  else {
    _ppfs_prepargs(&local_98,param_3);
    pcVar15 = (char *)0x0;
    __string = param_2;
    do {
      while( true ) {
        while( true ) {
          do {
            while ((*__string != '\0' && (*__string != '%'))) {
              __string = __string + 1;
            }
            pcVar17 = __string + -(int)param_2;
            if (__string != param_2) {
              if ((int)pcVar17 < 1) {
                return (char *)0xffffffff;
              }
              pcVar8 = (char *)__stdio_fwrite(param_2,pcVar17,param_1);
              if (pcVar17 != pcVar8) {
                return (char *)0xffffffff;
              }
              pcVar15 = pcVar17 + (int)pcVar15;
            }
            param_2 = __string + 1;
            if (*__string == '\0') {
              return pcVar15;
            }
            pcVar17 = __string + 1;
            __string = __string + 2;
          } while (*pcVar17 == '%');
          local_98 = param_2;
          _ppfs_parsespec(&local_98);
          _ppfs_setargs(&local_98);
          iVar6 = local_7c;
          uVar5 = (uint)local_72;
          puVar2 = auStack72;
          if (0 < local_80) {
            puVar2 = auStack72 + (uVar5 + 0x1fffffff) * 8;
          }
          iVar11 = 0;
          while (iVar11 < iVar6) {
            *(undefined **)(local_12c + iVar11) = puVar2 + iVar11 * 8;
            iVar11 = iVar11 + 1;
          }
          if (local_78 != 0) break;
          _store_inttype(*local_12c[0],local_88 & 0xf00,(int)pcVar15 >> 0x1f,pcVar15);
          param_2 = local_98;
          __string = local_98;
        }
        if (local_78 < 8) break;
        if (local_78 < 0x10) {
          iVar6 = _fpmaxtostr(param_1,*local_12c[0],local_12c[0][1],&local_98 + 1,_fp_out_narrow);
        }
        else {
          if (local_78 < 0x12) {
            return (char *)0xffffffff;
          }
          if (local_78 < 0x14) {
            if (local_78 == 0x13) {
              __string = *local_12c[0];
              if (__string != (char *)0x0) goto LAB_00011118;
              cVar4 = ' ';
              uVar13 = 0xb;
              __maxlen = (char **)0x0;
              ppcVar14 = (char **)0x0;
              __string = "(null)";
              if ((char **)0x5 < local_94) {
                ppcVar14 = (char **)0x6;
              }
            }
            else {
              __string = &local_118;
              local_118 = (char)*local_12c[0];
              local_117 = 0;
              cVar4 = ' ';
              uVar13 = 0xb;
              __maxlen = (char **)0x0;
              ppcVar14 = (char **)0x1;
            }
            goto LAB_00010fd4;
          }
          if (local_78 == 0x14) {
            __string = strerror_r(*(int *)(unaff_g7 + -8),&local_118,0x80);
LAB_00011118:
            __maxlen = (char **)0xffffffff;
            if (-1 < (int)local_94) {
              __maxlen = local_94;
            }
            ppcVar14 = (char **)strnlen(__string,(size_t)__maxlen);
            cVar4 = ' ';
            uVar13 = 0xb;
            goto LAB_00010f7c;
          }
          bVar1 = *_custom_printf_spec;
          pbVar3 = _custom_printf_spec;
          while ((uint)bVar1 != local_8c) {
            pbVar3 = pbVar3 + 1;
            if (pbVar3 == _custom_printf_spec + 10) {
              return (char *)0xffffffff;
            }
            bVar1 = *pbVar3;
          }
          iVar6 = (**(code **)(_custom_printf_handler +
                              (int)(pbVar3 + -(int)_custom_printf_spec) * 4))
                            (param_1,&local_98 + 1,local_12c);
        }
        if (iVar6 < 0) {
          return (char *)0xffffffff;
        }
        pcVar15 = pcVar15 + iVar6;
        param_2 = local_98;
        __string = local_98;
      }
      uVar18 = (uint)(byte)(&UNK_0001c6c7)[local_78];
      uVar16 = 0x57;
      if ((&UNK_0001c6c7)[local_78] == 10) {
        if ((local_88 & 0x20) != 0) {
          uVar16 = 0x2c;
        }
        if ((local_88 & 0x40) != 0) {
          uVar16 = uVar16 | 0x80;
        }
      }
      if (local_78 < 6) {
        uVar13 = 0xb;
        if (local_78 == 3) {
          uVar16 = 0x37;
        }
        else {
          if (local_78 == 1) {
            uVar13 = 6;
          }
        }
      }
      else {
        uVar18 = -uVar18;
        uVar13 = 0xb;
      }
      cVar4 = ' ';
      if ((int)local_94 < 0) {
        cVar4 = local_81;
      }
      uVar9 = 0x400;
      if (local_78 != 1) {
        uVar9 = auStack112[uVar5 + 0x3fffffff] & 0xf00;
      }
      __maxlen = local_12c[0];
      uVar10 = _load_inttype(uVar9,local_12c[0],uVar18);
      __string = (char *)_uintmaxtostr(&uStack153,uVar10,__maxlen,uVar18,uVar16);
      if (5 < local_78) {
        if (*__string == '-') {
          local_88 = local_88 | 2;
          __string = __string + 1;
          uVar13 = 2;
        }
        else {
          if ((local_88 & 2) == 0) {
            if ((local_88 & 1) != 0) {
              uVar13 = 4;
            }
          }
          else {
            uVar13 = 0;
          }
        }
      }
      ppcVar14 = (char **)(&uStack153 + -(int)__string);
      __maxlen = local_94;
      if ((int)local_94 < 0) {
        __maxlen = (char **)0x1;
      }
      if ((local_88 & 0x10) != 0) {
        if (local_78 < 3) {
          uVar13 = 6;
        }
        else {
          if (local_78 == 3) {
            uVar13 = 9;
            goto LAB_00010f4c;
          }
        }
        if (((local_78 == 4) && (__maxlen <= ppcVar14)) &&
           (__maxlen = (char **)0x1, *__string != '0')) {
          __maxlen = (char **)((int)&local_98 + -(int)__string);
        }
      }
LAB_00010f4c:
      if (*__string == '0') {
        if (5 < uVar13) {
          uVar13 = 0xb;
        }
        if (local_78 == 1) {
          ppcVar14 = (char **)0x5;
          __string = "(nil)";
        }
        else {
          if (__maxlen != (char **)0x0) goto LAB_00010fc8;
          ppcVar14 = (char **)0x0;
        }
LAB_00010f7c:
        __maxlen = (char **)0x0;
      }
      else {
LAB_00010fc8:
        if (ppcVar14 < __maxlen) {
          __maxlen = (char **)((int)__maxlen - (int)ppcVar14);
        }
        else {
          __maxlen = (char **)0x0;
        }
      }
LAB_00010fd4:
      uVar5 = (int)__maxlen + (int)ppcVar14;
      if (uVar13 != 0xb) {
        iVar6 = 1;
        if (5 < uVar13) {
          iVar6 = 2;
        }
        uVar5 = uVar5 + iVar6;
      }
      iVar6 = 0;
      if (uVar5 < local_90) {
        iVar6 = local_90 - uVar5;
      }
      pcVar15 = pcVar15 + iVar6 + uVar5;
      if (cVar4 == '0') {
        __maxlen = (char **)((int)__maxlen + iVar6);
        iVar6 = 0;
      }
      if ((local_88 & 8) == 0) {
        iVar11 = _charpad(param_1,0x20,iVar6);
        bVar19 = iVar6 != iVar11;
        iVar6 = 0;
        if (bVar19) {
          return (char *)0xffffffff;
        }
      }
      fputs_unlocked(prefix_6263 + uVar13,param_1);
      ppcVar12 = (char **)_charpad(param_1,0x30,__maxlen);
      if (__maxlen != ppcVar12) {
        return (char *)0xffffffff;
      }
      if ((ppcVar14 != (char **)0x0) &&
         (__maxlen = (char **)__stdio_fwrite(__string,ppcVar14,param_1), ppcVar14 != __maxlen)) {
        return (char *)0xffffffff;
      }
      iVar11 = _charpad(param_1,0x20,iVar6);
      param_2 = local_98;
      __string = local_98;
    } while (iVar6 == iVar11);
  }
  return (char *)0xffffffff;
}


/* WARNING: Removing unreachable block (ram,0x000112d4) */
/* WARNING: Removing unreachable block (ram,0x00011240) */
/* WARNING: Removing unreachable block (ram,0x0001124c) */

undefined4 _ppfs_init(char **param_1,char *param_2)

{
  char **ppcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char **ppcVar5;
  
  memset(param_1,0,0x98);
  ppcVar5 = param_1 + 10;
  param_1[6] = param_1[6] + -1;
  *param_1 = param_2;
  ppcVar1 = ppcVar5;
  do {
    ppcVar1 = ppcVar1 + 1;
    *ppcVar1 = &DAT_00000008;
    pcVar2 = param_2;
    ppcVar1 = ppcVar1;
  } while (ppcVar1 != param_1 + 0x13);
  while (*pcVar2 != '\0') {
    if (*pcVar2 == '%') {
      if (pcVar2[1] == '%') {
        pcVar2 = pcVar2 + 2;
      }
      else {
        *param_1 = pcVar2 + 1;
        iVar4 = _ppfs_parsespec(param_1);
        if (iVar4 < 0) {
          return 0xffffffff;
        }
        pcVar2 = *param_1;
      }
    }
    else {
      pcVar2 = pcVar2 + 1;
    }
  }
  *param_1 = param_2;
  pcVar2 = param_1[6];
  do {
    pcVar2 = pcVar2 + -1;
    if ((int)pcVar2 < 0) {
      return 0;
    }
    pcVar3 = *ppcVar5;
    ppcVar5 = ppcVar5 + 1;
  } while (pcVar3 != &DAT_00000008);
  return 0xffffffff;
}


/* WARNING: Removing unreachable block (ram,0x0001130c) */
/* WARNING: Removing unreachable block (ram,0x00011334) */

int _ppfs_prepargs(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    *(int *)(param_1 + 0x1c) = iVar1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    _ppfs_setargs(param_1);
    *(int *)(param_1 + 0x18) = iVar1;
  }
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x00011454) */
/* WARNING: Removing unreachable block (ram,0x00011348) */
/* WARNING: Removing unreachable block (ram,0x00011498) */
/* WARNING: Removing unreachable block (ram,0x000114bc) */

int _ppfs_setargs(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *__src;
  undefined8 uVar6;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  iVar4 = *(int *)(param_1 + 0x18);
  puVar5 = (undefined8 *)(param_1 + 0x50);
  iVar2 = (int)*(undefined8 *)(param_1 + 4);
  iVar1 = (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
  if (iVar4 != 0) {
    if (iVar2 == -0x80000000) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(puVar5 + ((uint)*(byte *)(param_1 + 0x24) - 1))
      ;
    }
    if (iVar1 == -0x80000000) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar5 + ((uint)*(byte *)(param_1 + 0x25) - 1))
      ;
LAB_000113d0:
      iVar1 = *(int *)(param_1 + 8);
    }
    else {
      iVar1 = *(int *)(param_1 + 8);
    }
    if (iVar1 < 0) {
      *(int *)(param_1 + 8) = -iVar1;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe | 8;
      *(undefined4 *)(param_1 + 0x14) = 0x20;
    }
    return param_1;
  }
  if (iVar2 == -0x80000000) {
    uVar3 = **(undefined4 **)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    *(undefined4 **)(param_1 + 0x4c) = *(undefined4 **)(param_1 + 0x4c) + 1;
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  if (iVar1 == -0x80000000) {
    uVar3 = **(undefined4 **)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    *(undefined4 **)(param_1 + 0x4c) = *(undefined4 **)(param_1 + 0x4c) + 1;
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
  do {
    iVar1 = *(int *)(param_1 + 0x1c);
    while( true ) {
      if (iVar1 <= iVar4) goto LAB_000113d0;
      iVar4 = iVar4 + 1;
      iVar1 = *(int *)(param_1 + 0x24 + iVar4 * 4);
      if (iVar1 != 8) break;
      iVar1 = *(int *)(param_1 + 0x1c);
    }
    __src = *(undefined4 **)(param_1 + 0x4c);
    if (iVar1 < 9) {
      if (iVar1 == 2) {
        uVar3 = *__src;
        goto LAB_00011438;
      }
      if ((iVar1 < 3) || (iVar1 != 7)) goto LAB_00011434;
      memcpy(&local_10,__src,8);
      *(undefined4 **)(param_1 + 0x4c) = __src + 2;
      uVar6 = local_10;
LAB_00011468:
      *puVar5 = uVar6;
    }
    else {
      if (iVar1 == 0x400) {
        uVar3 = *__src;
      }
      else {
        if (0x400 < iVar1) {
          if (iVar1 == 0x800) {
            memcpy(&local_18,__src,8);
            *(undefined4 **)(param_1 + 0x4c) = __src + 2;
            *puVar5 = local_18;
            goto LAB_000114d0;
          }
          if (iVar1 == 0x807) {
            memcpy(&local_8,__src,8);
            *(undefined4 **)(param_1 + 0x4c) = __src + 2;
            uVar6 = local_8;
            goto LAB_00011468;
          }
        }
LAB_00011434:
        uVar3 = *__src;
      }
LAB_00011438:
      *(undefined4 **)(param_1 + 0x4c) = __src + 1;
      *(undefined4 *)puVar5 = uVar3;
    }
LAB_000114d0:
    puVar5 = puVar5 + 1;
  } while( true );
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00011abc) */
/* WARNING: Removing unreachable block (ram,0x00011520) */
/* WARNING: Removing unreachable block (ram,0x0001152c) */

int _ppfs_parsespec(int *param_1)

{
  byte bVar1;
  bool bVar2;
  short *psVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  short *psVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined *puVar16;
  short *psVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  char cVar23;
  byte *pbVar21;
  int iVar22;
  uint uVar24;
  byte *local_28 [2];
  uint local_20;
  byte *local_1c [2];
  uint local_14;
  
  local_1c[0] = (byte *)0x8;
  local_1c[1] = 8;
  local_28[0] = (byte *)0x0;
  local_28[1] = 0;
  uVar24 = param_1[6];
  puVar4 = (undefined8 *)*param_1;
  uVar20 = 0;
  uVar19 = 0;
  uVar11 = 0;
LAB_00011580:
  puVar5 = puVar4;
  if (*(char *)puVar4 == '*') {
    puVar5 = (undefined8 *)((int)puVar4 + 1);
    *(undefined4 *)((int)local_28 + (uVar20 & 4) + 0xc) = 0;
  }
  uVar15 = 0;
  while( true ) {
    bVar18 = *(byte *)puVar5;
    if ((*(ushort *)(__ctype_b + (uint)bVar18 * 2) & 8) == 0) break;
    if (((int)uVar15 < 0xccccccc) || ((uVar14 = 0x7fffffff, uVar15 == 0xccccccc && (bVar18 < 0x38)))
       ) {
      uVar14 = ((uint)bVar18 - 0x30) + uVar15 * 10;
    }
    puVar5 = (undefined8 *)((int)puVar5 + 1);
    uVar15 = uVar14;
  }
  if (*(char *)((int)puVar4 + -1) == '%') {
    if ((bVar18 == 0x24) && (0 < (int)uVar15)) {
      puVar4 = (undefined8 *)((int)puVar5 + 1);
      if (uVar24 == 0) {
        return 0xffffffff;
      }
      local_20 = uVar15;
      if ((int)uVar24 < (int)uVar15) {
        uVar24 = uVar15;
      }
LAB_00011644:
      do {
        uVar15 = 1;
        puVar5 = &spec_flags_6267;
        while (puVar6 = (undefined8 *)((int)puVar5 + 1), *(char *)puVar4 != *(char *)puVar5) {
          uVar15 = uVar15 * 2;
          puVar5 = puVar6;
          if (*(char *)puVar6 == '\0') {
            uVar19 = uVar19 & ~((int)uVar19 >> 1 & 5U);
            if (*(char *)((int)puVar4 + -1) != '%') goto LAB_00011580;
            uVar15 = 0;
            puVar5 = puVar4;
            goto LAB_0001168c;
          }
        }
        puVar4 = (undefined8 *)((int)puVar4 + 1);
        uVar19 = uVar19 | uVar15;
      } while( true );
    }
    if ((int)uVar24 < 1) {
      uVar24 = 0;
      if ((puVar5 <= puVar4) || (*(char *)puVar4 == '0')) goto LAB_00011644;
      cVar23 = *(char *)puVar4;
    }
    else {
      puVar6 = puVar4;
      if (bVar18 != 0x6d) {
        return 0xffffffff;
      }
LAB_0001168c:
      cVar23 = *(char *)puVar6;
      puVar4 = puVar6;
    }
  }
  else {
    cVar23 = *(char *)puVar4;
  }
  puVar6 = puVar5;
  if (cVar23 == '*') {
    if (uVar24 == 0) {
      puVar6 = (undefined8 *)((int)puVar4 + 1);
      uVar15 = 0x80000000;
      if (puVar5 != puVar6) {
        return 0xffffffff;
      }
    }
    else {
      puVar6 = (undefined8 *)((int)puVar5 + 1);
      if (*(char *)puVar5 != '$') {
        return 0xffffffff;
      }
      if ((int)uVar15 < 1) {
        return 0xffffffff;
      }
      *(uint *)((int)local_28 + (uVar20 & 4)) = uVar15;
      uVar15 = 0x80000000;
    }
  }
  bVar18 = *(byte *)puVar6;
  if (uVar20 != 0) goto LAB_00011764;
  puVar4 = (undefined8 *)((int)puVar6 + 1);
  uVar11 = uVar15;
  if (bVar18 == 0x2e) {
    uVar20 = 0xffffffff;
    goto LAB_00011580;
  }
  uVar15 = 0xffffffff;
LAB_00011764:
  puVar7 = qual_chars_6272;
  iVar22 = (uint)qual_chars_6272[0] - (uint)bVar18;
  do {
    if (iVar22 == 0) {
      puVar6 = (undefined8 *)((int)puVar6 + 1);
      break;
    }
    puVar7 = puVar7 + 1;
    iVar22 = (uint)(byte)*puVar7 - (uint)bVar18;
  } while (*puVar7 != 0);
  if ((int)(puVar7 + -0x1c700) < 2) {
    bVar18 = *(byte *)puVar6;
    if (*puVar7 != bVar18) {
      bVar1 = puVar7[9];
      goto LAB_000117bc;
    }
    puVar6 = (undefined8 *)((int)puVar6 + 1);
    bVar1 = puVar7[0x12];
  }
  else {
    bVar1 = puVar7[9];
  }
  bVar18 = *(byte *)puVar6;
LAB_000117bc:
  uVar20 = (uint)bVar1 << 8;
  if (bVar18 == 0) {
    return 0xffffffff;
  }
  pcVar8 = "npxXoudifFeEgGaACScs";
  pbVar9 = (byte *)pcVar8;
  bVar1 = "npxXoudifFeEgGaACScs"[0];
LAB_000117e0:
  if (bVar18 != bVar1) goto LAB_000117e0;
  pbVar10 = pbVar9 + -0x1c740;
  if ((0x11 < (int)pbVar10) && ((uVar20 & 0x400) != 0)) {
    pbVar10 = pbVar9 + -0x1c742;
  }
  *(byte **)(param_1 + 8) = pbVar10;
  pbVar9 = spec_ranges_6269;
  do {
    pbVar21 = pbVar9;
    pbVar9 = pbVar21 + 1;
  } while ((int)(uint)*pbVar21 < (int)pbVar10);
  local_14 = ((int)*(short *)(spec_or_mask_6270 + (int)(pbVar21 + -0x1c6f0) * 2) | uVar20) &
             (int)*(short *)(spec_and_mask_6271 + (int)(pbVar21 + -0x1c6f0) * 2);
  bVar18 = *(byte *)puVar6;
  goto LAB_00011868;
LAB_000117e0:
  pbVar9 = pbVar9 + 1;
  bVar1 = *pbVar9;
  if (bVar1 == 0) goto code_r0x00011a24;
  goto LAB_000117e0;
code_r0x00011a24:
  bVar18 = *(byte *)puVar6;
  pcVar8 = (char *)pbVar9;
LAB_00011868:
  param_1[1] = uVar15;
  param_1[3] = (uint)bVar18;
  param_1[2] = uVar11;
  puVar16 = (undefined *)0x30;
  if ((uVar19 & 4) == 0) {
    puVar16 = &DAT_00000020;
  }
  *(undefined **)(param_1 + 5) = puVar16;
  param_1[4] = uVar19 & 0xfffffffb | uVar20 & 0xf00;
  param_1[7] = 1;
  if (*pcVar8 == 0) {
    if (*(char *)puVar6 == 'm') {
      param_1[7] = 0;
      *(undefined **)(param_1 + 8) = &DAT_00000014;
    }
    else {
      param_1[8] = 0x15;
      cVar23 = *_custom_printf_spec;
      pcVar8 = _custom_printf_spec;
      while (cVar23 != *(char *)puVar6) {
        pcVar8 = pcVar8 + 1;
        if (pcVar8 == _custom_printf_spec + 10) {
          return 0xffffffff;
        }
        cVar23 = *pcVar8;
      }
      iVar22 = (**(code **)(_custom_printf_arginfo + (int)(pcVar8 + -(int)_custom_printf_spec) * 4))
                         (param_1 + 1,5,local_1c + 2);
      param_1[7] = iVar22;
      if (5 < iVar22) {
        return 0xffffffff;
      }
    }
  }
  if ((int)uVar24 < 1) {
    *(undefined *)((int)param_1 + 0x26) = 1;
    memcpy(param_1 + 10,local_1c + 2,param_1[7] << 2);
    param_1[6] = uVar24;
  }
  else {
    iVar22 = 0;
    do {
      uVar11 = local_20 + iVar22 + -2;
      if (iVar22 < 3) {
        pbVar9 = local_28[iVar22];
        *(undefined *)((int)param_1 + iVar22 + 0x24) = (char)pbVar9;
        uVar11 = (uint)pbVar9 & 0xff;
      }
      if (((int)uVar24 < (int)uVar11) && (uVar24 = uVar11, 9 < (int)uVar11)) {
        return 0xffffffff;
      }
      pbVar9 = local_28[iVar22 + 3];
      if (pbVar9 == &DAT_00000008) {
LAB_000119d4:
        iVar13 = param_1[7];
      }
      else {
        pbVar10 = (byte *)(param_1 + uVar11)[9];
        if ((pbVar10 == &DAT_00000008) || (pbVar10 == pbVar9)) {
LAB_000119d0:
          *(byte **)(param_1 + uVar11 + 9) = pbVar9;
          goto LAB_000119d4;
        }
        psVar17 = (short *)(type_codes + 0x16);
        while (((byte *)(int)*psVar17 != pbVar10 && (type_codes < psVar17))) {
          psVar17 = psVar17 + -1;
        }
        psVar12 = (short *)&UNK_0001c73c;
        do {
          psVar3 = psVar12;
          psVar12 = psVar3 + -1;
          if ((byte *)(int)*psVar12 == pbVar9) break;
        } while (type_codes + 1 <= psVar12);
        if ((byte)type_sizes[(int)(psVar17 + -0xe392) >> 1] <=
            (byte)type_sizes[(int)(psVar3 + -0xe393) >> 1]) goto LAB_000119d0;
        iVar13 = param_1[7];
      }
      bVar2 = iVar22 <= iVar13;
      iVar22 = iVar22 + 1;
    } while (bVar2);
    param_1[6] = uVar24;
  }
  *param_1 = (int)puVar6 + 1;
  return param_1[7] + 2;
}


/* WARNING: Removing unreachable block (ram,0x00011aec) */
/* WARNING: Removing unreachable block (ram,0x00011acc) */
/* WARNING: Removing unreachable block (ram,0x00011ad0) */

int fputs_unlocked(char *__s,FILE *__stream)

{
  size_t __n;
  size_t sVar1;
  size_t sVar2;
  
  __n = strlen(__s);
  sVar1 = fwrite_unlocked(__s,1,__n,__stream);
  sVar2 = 0xffffffff;
  if (sVar1 == __n) {
    sVar2 = sVar1;
  }
  return sVar2;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00011b70) */
/* WARNING: Removing unreachable block (ram,0x00011b08) */
/* WARNING: Removing unreachable block (ram,0x00011b40) */
/* WARNING: Removing unreachable block (ram,0x00011b10) */

size_t fwrite_unlocked(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  int unaff_g7;
  int iVar1;
  uint uVar2;
  
  if (((((*(ushort *)&__stream->_flags & 0x40) != 0) ||
       (iVar1 = __stdio_trans2w(__stream), iVar1 == 0)) && (__size != 0)) && (__n != 0)) {
    if ((int)((ulonglong)__n * (ulonglong)__size >> 0x20) == 0) {
      uVar2 = __stdio_fwrite(__ptr,__size * __n,__stream);
      return uVar2 / __size;
    }
    *(ushort *)&__stream->_flags = *(ushort *)&__stream->_flags | 8;
    *(undefined4 *)(unaff_g7 + -8) = 0x16;
  }
  return 0;
}


/* WARNING: Instruction at (ram,0x00011c6c) overlaps instruction at (ram,0x00011c68)
    */
/* WARNING: Removing unreachable block (ram,0x000124dc) */
/* WARNING: Removing unreachable block (ram,0x00012320) */
/* WARNING: Removing unreachable block (ram,0x0001317c) */
/* WARNING: Removing unreachable block (ram,0x00011d54) */
/* WARNING: Removing unreachable block (ram,0x00011f1c) */
/* WARNING: Removing unreachable block (ram,0x00011f40) */
/* WARNING: Heritage AFTER dead removal. Example location: o3 : 0x0001317c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void bcopy(void *__src,void *__dest,size_t __n)

{
  ushort uVar1;
  char cVar2;
  undefined uVar3;
  undefined2 uVar6;
  undefined8 uVar4;
  undefined4 uVar7;
  ulonglong uVar5;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  sbyte sVar15;
  longlong lVar12;
  uint uVar16;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar17;
  byte bVar19;
  uint uVar18;
  int iVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  int iVar23;
  uint *puVar24;
  uint *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined2 *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  uint *puVar31;
  undefined8 *puVar32;
  size_t sVar33;
  undefined8 uVar34;
  void *pvVar36;
  ulonglong uVar35;
  void *pvVar37;
  uint uVar38;
  undefined8 uVar39;
  uint uVar40;
  uint uVar41;
  bool bVar42;
  
  uVar13 = CONCAT44(__n,__src);
  pvVar37 = (void *)((int)__dest - (int)__src);
  if (__src < __dest) {
    pvVar36 = (void *)((int)__src + __n);
    uVar13 = CONCAT44(__n,pvVar36);
    bVar42 = ((uint)pvVar37 & 3) == 0;
    if (__dest < pvVar36) {
      puVar29 = (undefined *)((int)__src + __n);
      puVar22 = (undefined4 *)((int)__dest + __n);
      if (!bVar42) {
        if (__n < 0x10) {
LAB_00011f30:
          uVar13 = CONCAT44(__n,__n) & 0xffffffff0000000e;
          iVar20 = (int)uVar13;
          uVar5 = CONCAT44(iVar20 << 3,pvVar37) & 0xffffffff00000003;
          iVar23 = (int)uVar5;
          FUN_00013248((undefined4 *)((int)puVar22 - iVar20),puVar29 + -iVar20,(int)(uVar13 >> 0x20)
                       ,iVar20,(int)(uVar5 >> 0x20));
                    /* WARNING: Could not recover jumptable at 0x00011f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(iVar23 + 0x84))();
          return;
        }
        if (((uint)puVar22 & 3) != 0) {
          uVar17 = (uint)puVar22 & 2;
          if (((uint)puVar22 & 1) != 0) {
            puVar30 = puVar29 + -1;
            puVar29 = puVar29 + -1;
            *(undefined *)((int)puVar22 + -1) = *puVar30;
            puVar22 = (undefined4 *)((int)puVar22 + -1);
            __n = __n - 1;
            uVar13 = CONCAT44(__n,pvVar36);
            if (uVar17 == 0) goto LAB_0001205c;
          }
          puVar30 = puVar29 + -1;
          puVar29 = puVar29 + -2;
          *(undefined *)((int)puVar22 + -1) = *puVar30;
          puVar22 = (undefined4 *)((int)puVar22 + -2);
          uVar13 = (ulonglong)(__n - 2) << 0x20;
          *(undefined *)puVar22 = *puVar29;
        }
LAB_0001205c:
        puVar25 = (uint *)((uint)puVar29 & 0xfffffffc);
        uVar18 = (uint)(uVar13 >> 0x20);
        uVar5 = CONCAT44(puVar29,uVar18) & 0x30000000c;
        uVar17 = (uint)uVar5;
        cVar2 = (char)(uVar5 >> 0x20);
        sVar15 = cVar2 * '\b';
        bVar19 = cVar2 * -8 + 0x20;
        if (uVar17 == 4) {
          uVar17 = *puVar25;
          uVar40 = puVar25[-1];
          puVar31 = puVar25 + -5;
          puVar24 = puVar22 + -4;
          uVar8 = (uVar18 >> 2) - 1;
          uVar14 = uVar13 & 0xffffffff00000000 | (ulonglong)puVar25[-2];
          goto LAB_000120f4;
        }
        if (uVar17 < 8) {
          uVar40 = *puVar25;
          puVar24 = puVar22 + -3;
          uVar14 = uVar13 & 0xffffffff00000000 | (ulonglong)puVar25[-1];
          puVar31 = puVar25 + -4;
          uVar8 = (uint)((uVar13 & 0xffffffff00000000) >> 0x22);
          while( true ) {
            uVar38 = puVar31[2];
            puVar24[2] = (int)uVar14 << sVar15 | uVar40 >> (bVar19 & 0x1f);
LAB_00012118:
            uVar18 = (uint)(uVar14 >> 0x20);
            uVar17 = puVar31[1];
            puVar24[1] = uVar38 << sVar15 | (uint)uVar14 >> (bVar19 & 0x1f);
LAB_0001212c:
            uVar40 = *puVar31;
            uVar8 = uVar8 - 4;
            *puVar24 = uVar17 << sVar15 | uVar38 >> (bVar19 & 0x1f);
            puVar25 = puVar24 + -4;
            if (uVar8 == 0) break;
            uVar14 = CONCAT44(uVar18,puVar31[-1]);
            puVar24 = puVar25;
            puVar31 = puVar31 + -4;
LAB_000120f4:
            puVar24[3] = uVar40 << sVar15 | uVar17 >> (bVar19 & 0x1f);
          }
          iVar23 = (int)(puVar31 + -4) + (int)(uVar5 >> 0x20);
          puVar24[-1] = uVar40 << sVar15 | uVar17 >> (bVar19 & 0x1f);
          iVar20 = iVar23;
          if ((uVar18 & 2) != 0) {
            iVar20 = iVar23 + -2;
            *(undefined *)((int)puVar24 + -5) = *(undefined *)(iVar23 + 0xf);
            puVar25 = (uint *)((int)puVar24 + -0x12);
            *(undefined *)((int)puVar24 + -6) = *(undefined *)(iVar23 + 0xe);
          }
          if ((uVar18 & 1) != 0) {
            *(undefined *)((int)puVar25 + 0xb) = *(undefined *)(iVar20 + 0xf);
          }
          return;
        }
        if (uVar17 == 8) {
          uVar38 = *puVar25;
          puVar24 = puVar22 + -1;
          uVar17 = puVar25[-1];
          puVar31 = puVar25 + -2;
          uVar8 = (uVar18 >> 2) + 2;
          goto LAB_0001212c;
        }
        uVar14 = uVar13 & 0xffffffff00000000 | (ulonglong)*puVar25;
        puVar24 = puVar22 + -2;
        uVar38 = puVar25[-1];
        puVar31 = puVar25 + -3;
        uVar8 = (uVar18 >> 2) + 1;
        goto LAB_00012118;
      }
      bVar42 = ((uint)puVar29 & 3) != 0;
      if (__n < 0x10) {
        if (bVar42) goto LAB_00011f30;
        bVar42 = (__n & 4) == 0;
        if ((__n & 8) != 0) {
          puVar21 = (undefined4 *)(puVar29 + -8);
          uVar7 = *(undefined4 *)(puVar29 + -4);
          puVar29 = puVar29 + -8;
          puVar22[-2] = *puVar21;
          puVar22[-1] = uVar7;
          puVar22 = puVar22 + -2;
        }
        goto LAB_00011e2c;
      }
      puVar21 = puVar22;
      sVar33 = __n;
      if (bVar42) {
        uVar17 = (uint)puVar29 & 2;
        if (((uint)puVar29 & 1) != 0) {
          puVar30 = puVar29 + -1;
          puVar29 = puVar29 + -1;
          *(undefined *)((int)puVar22 + -1) = *puVar30;
          __n = __n - 1;
          puVar21 = (undefined4 *)((int)puVar22 + -1);
          sVar33 = __n;
          if (uVar17 == 0) goto code_r0x00011c40;
        }
        puVar28 = (undefined2 *)(puVar29 + -2);
        puVar29 = puVar29 + -2;
        *(undefined2 *)((int)puVar21 + -2) = *puVar28;
        sVar33 = __n - 2;
        puVar21 = (undefined4 *)((int)puVar21 + -2);
      }
code_r0x00011c40:
      __n = sVar33;
      if (((uint)puVar29 & 4) != 0) {
        __n = sVar33 - 4;
        puVar21[-1] = *(undefined4 *)(puVar29 + -4);
        puVar29 = puVar29 + -4;
        puVar21 = puVar21 + -1;
      }
      uVar18 = (uint)pvVar37 & 3;
      uVar17 = __n & 0xffffff80;
      if (uVar17 == 0) {
LAB_00011d3c:
        uVar17 = __n & 0x70;
        if (uVar17 != 0) {
          iVar20 = FUN_00013248(puVar21,puVar29 + -uVar17,sVar33,pvVar36,uVar17 + (uVar17 >> 1));
                    /* WARNING: Could not recover jumptable at 0x00011d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(uVar18 + 0xbc))(iVar20 - uVar17);
          return;
        }
      }
      else {
        uVar34 = *(undefined8 *)(puVar29 + -0x20);
        puVar30 = puVar29;
        if (((uint)puVar21 & 4) != 0) {
          while( true ) {
            uVar39 = *(undefined8 *)(puVar30 + -0x18);
            uVar4 = *(undefined8 *)(puVar30 + -0x10);
            uVar11 = *(undefined8 *)(puVar30 + -8);
            puVar21[-8] = (int)((ulonglong)uVar34 >> 0x20);
            puVar21[-7] = (int)uVar34;
            puVar21[-6] = (int)((ulonglong)uVar39 >> 0x20);
            puVar21[-5] = (int)uVar39;
            puVar21[-4] = (int)((ulonglong)uVar4 >> 0x20);
            puVar21[-3] = (int)uVar4;
            puVar21[-2] = (int)((ulonglong)uVar11 >> 0x20);
            puVar21[-1] = (int)uVar11;
            uVar11 = *(undefined8 *)(puVar30 + -0x40);
            uVar39 = *(undefined8 *)(puVar30 + -0x38);
            uVar34 = *(undefined8 *)(puVar30 + -0x30);
            uVar4 = *(undefined8 *)(puVar30 + -0x28);
            puVar21[-0x10] = (int)((ulonglong)uVar11 >> 0x20);
            puVar21[-0xf] = (int)uVar11;
            puVar21[-0xe] = (int)((ulonglong)uVar39 >> 0x20);
            puVar21[-0xd] = (int)uVar39;
            puVar21[-0xc] = (int)((ulonglong)uVar34 >> 0x20);
            puVar21[-0xb] = (int)uVar34;
            puVar21[-10] = (int)((ulonglong)uVar4 >> 0x20);
            puVar21[-9] = (int)uVar4;
            uVar11 = *(undefined8 *)(puVar30 + -0x60);
            uVar39 = *(undefined8 *)(puVar30 + -0x58);
            uVar34 = *(undefined8 *)(puVar30 + -0x50);
            uVar4 = *(undefined8 *)(puVar30 + -0x48);
            puVar21[-0x18] = (int)((ulonglong)uVar11 >> 0x20);
            puVar21[-0x17] = (int)uVar11;
            puVar21[-0x16] = (int)((ulonglong)uVar39 >> 0x20);
            puVar21[-0x15] = (int)uVar39;
            puVar21[-0x14] = (int)((ulonglong)uVar34 >> 0x20);
            puVar21[-0x13] = (int)uVar34;
            puVar21[-0x12] = (int)((ulonglong)uVar4 >> 0x20);
            puVar21[-0x11] = (int)uVar4;
            uVar11 = *(undefined8 *)(puVar30 + -0x80);
            uVar39 = *(undefined8 *)(puVar30 + -0x78);
            uVar34 = *(undefined8 *)(puVar30 + -0x70);
            uVar4 = *(undefined8 *)(puVar30 + -0x68);
            sVar33 = (size_t)((ulonglong)uVar11 >> 0x20);
            puVar21[-0x20] = sVar33;
            pvVar36 = (void *)uVar11;
            *(void **)(puVar21 + -0x1f) = pvVar36;
            puVar21[-0x1e] = (int)((ulonglong)uVar39 >> 0x20);
            uVar18 = (uint)uVar39;
            puVar21[-0x1d] = uVar18;
            puVar21[-0x1c] = (int)((ulonglong)uVar34 >> 0x20);
            puVar21[-0x1b] = (int)uVar34;
            puVar21[-0x1a] = (int)((ulonglong)uVar4 >> 0x20);
            puVar21[-0x19] = (int)uVar4;
            uVar17 = uVar17 - 0x80;
            puVar29 = puVar30 + -0x80;
            puVar21 = puVar21 + -0x20;
            if (uVar17 == 0) break;
            uVar34 = *(undefined8 *)(puVar30 + -0xa0);
            puVar30 = puVar29;
          }
          goto LAB_00011d3c;
        }
        while( true ) {
          uVar39 = *(undefined8 *)(puVar30 + -0x18);
          uVar4 = *(undefined8 *)(puVar30 + -0x10);
          uVar11 = *(undefined8 *)(puVar30 + -8);
          *(undefined8 *)(puVar21 + -8) = uVar34;
          *(undefined8 *)(puVar21 + -6) = uVar39;
          *(undefined8 *)(puVar21 + -4) = uVar4;
          *(undefined8 *)(puVar21 + -2) = uVar11;
          uVar11 = *(undefined8 *)(puVar30 + -0x38);
          uVar34 = *(undefined8 *)(puVar30 + -0x30);
          uVar4 = *(undefined8 *)(puVar30 + -0x28);
          *(undefined8 *)(puVar21 + -0x10) = *(undefined8 *)(puVar30 + -0x40);
          *(undefined8 *)(puVar21 + -0xe) = uVar11;
          *(undefined8 *)(puVar21 + -0xc) = uVar34;
          *(undefined8 *)(puVar21 + -10) = uVar4;
          uVar11 = *(undefined8 *)(puVar30 + -0x58);
          uVar34 = *(undefined8 *)(puVar30 + -0x50);
          uVar4 = *(undefined8 *)(puVar30 + -0x48);
          *(undefined8 *)(puVar21 + -0x18) = *(undefined8 *)(puVar30 + -0x60);
          *(undefined8 *)(puVar21 + -0x16) = uVar11;
          *(undefined8 *)(puVar21 + -0x14) = uVar34;
          *(undefined8 *)(puVar21 + -0x12) = uVar4;
          uVar11 = *(undefined8 *)(puVar30 + -0x80);
          uVar39 = *(undefined8 *)(puVar30 + -0x78);
          uVar34 = *(undefined8 *)(puVar30 + -0x70);
          uVar4 = *(undefined8 *)(puVar30 + -0x68);
          *(undefined8 *)(puVar21 + -0x20) = uVar11;
          *(undefined8 *)(puVar21 + -0x1e) = uVar39;
          *(undefined8 *)(puVar21 + -0x1c) = uVar34;
          *(undefined8 *)(puVar21 + -0x1a) = uVar4;
          uVar17 = uVar17 - 0x80;
          puVar29 = puVar30 + -0x80;
          puVar21 = puVar21 + -0x20;
          if (uVar17 == 0) break;
          uVar34 = *(undefined8 *)(puVar30 + -0xa0);
          puVar30 = puVar29;
        }
        uVar17 = __n & 0x70;
        if (uVar17 != 0) {
          iVar20 = (int)uVar39;
          iVar23 = FUN_00013248(puVar21,puVar29 + -uVar17,(int)((ulonglong)uVar11 >> 0x20),
                                (int)uVar11,uVar17 + (uVar17 >> 1));
                    /* WARNING: Could not recover jumptable at 0x00011f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(iVar20 + -0x10c))(iVar23 - uVar17);
          return;
        }
      }
      bVar42 = (__n & 4) == 0;
      puVar22 = puVar21;
      if ((__n & 8) != 0) {
        uVar34 = *(undefined8 *)(puVar29 + -8);
        puVar22 = puVar21 + -2;
        puVar29 = puVar29 + -8;
        *puVar22 = (int)((ulonglong)uVar34 >> 0x20);
        puVar21[-1] = (int)uVar34;
      }
LAB_00011e2c:
      if (!bVar42) {
        puVar21 = (undefined4 *)(puVar29 + -4);
        puVar29 = puVar29 + -4;
        puVar22[-1] = *puVar21;
        puVar22 = puVar22 + -1;
      }
      if ((__n & 2) != 0) {
        puVar28 = (undefined2 *)(puVar29 + -2);
        puVar29 = puVar29 + -2;
        *(undefined2 *)((int)puVar22 + -2) = *puVar28;
        puVar22 = (undefined4 *)((int)puVar22 + -2);
      }
      if ((__n & 1) != 0) {
        *(undefined *)((int)puVar22 + -1) = puVar29[-1];
      }
      return;
    }
  }
  else {
    bVar42 = ((uint)pvVar37 & 3) == 0;
  }
  uVar7 = (undefined4)uVar13;
  uVar18 = (uint)pvVar37 & 3;
  uVar17 = (uint)(uVar13 >> 0x20);
  if (!bVar42) {
    if (uVar17 < 7) goto LAB_0001316c;
    if (uVar17 < 0x100) {
      if (((uint)__dest & 3) != 0) {
        uVar18 = (uint)__dest & 2;
        puVar25 = (uint *)__dest;
        puVar29 = (undefined *)__src;
        if (((uint)__dest & 1) != 0) {
          uVar3 = *(undefined *)__src;
          __src = (void *)((int)__src + 1);
          *(undefined *)__dest = uVar3;
          uVar17 = uVar17 - 1;
          uVar13 = (ulonglong)uVar17 << 0x20;
          __dest = (void *)((int)__dest + 1);
          puVar25 = (uint *)__dest;
          puVar29 = (undefined *)__src;
          if (uVar18 != 0) goto LAB_00012618;
        }
        __src = puVar29 + 2;
        *(undefined *)puVar25 = *puVar29;
        uVar13 = (ulonglong)(uVar17 - 2) << 0x20;
        __dest = (void *)((int)puVar25 + 2);
        *(undefined *)((int)puVar25 + 1) = puVar29[1];
      }
LAB_00012618:
      uVar40 = (uint)(uVar13 >> 0x20);
      uVar5 = CONCAT44(__src,uVar40) & 0x30000000c;
      puVar26 = (undefined8 *)((uint)__src & 0xfffffffc);
      uVar18 = (uint)uVar5;
      iVar20 = (int)(uVar5 >> 0x20);
      uVar17 = iVar20 * 8;
      sVar15 = (sbyte)uVar17;
      lVar12 = (ulonglong)uVar17 << 0x20;
      uVar8 = iVar20 * -8 + 0x20;
      bVar19 = (byte)uVar8;
      if (uVar18 == 4) {
        uVar38 = *(uint *)puVar26;
        uVar18 = *(uint *)((int)puVar26 + 4);
        puVar26 = puVar26 + 1;
        if (7 < uVar40) {
          uVar13 = uVar13 & 0xffffffff00000000 | (ulonglong)*(uint *)puVar26;
          uVar40 = (uVar40 >> 2) - 1;
          goto LAB_000126ac;
        }
      }
      else {
        if (uVar18 < 8) {
          uVar18 = *(uint *)puVar26;
          __dest = (uint *)__dest + -1;
          uVar5 = uVar13 & 0xffffffff00000000;
          uVar13 = uVar5 | *(uint *)((int)puVar26 + 4);
          uVar40 = (uint)(uVar5 >> 0x22);
          puVar26 = (undefined8 *)((int)puVar26 + 4);
          goto LAB_000126bc;
        }
        if (uVar18 == 8) {
          __dest = (uint *)__dest + -3;
          uVar34 = *puVar26;
          uVar40 = (uVar40 >> 2) + 2;
          puVar26 = (undefined8 *)((int)puVar26 + -4);
          goto LAB_000126e4;
        }
        uVar13 = uVar13 & 0xffffffff00000000 | (ulonglong)*(uint *)puVar26;
        __dest = (uint *)__dest + -2;
        uVar38 = *(uint *)((int)puVar26 + 4);
        uVar40 = (uVar40 >> 2) + 1;
        while( true ) {
          uVar34 = CONCAT44(uVar38,*(undefined4 *)(puVar26 + 1));
          uVar17 = (uint)((ulonglong)lVar12 >> 0x20);
          ((uint *)__dest)[2] =
               (int)uVar13 << (sbyte)((ulonglong)lVar12 >> 0x20) | uVar38 >> (bVar19 & 0x1f);
LAB_000126e4:
          uVar18 = *(uint *)((int)puVar26 + 0xc);
          sVar15 = (sbyte)uVar17;
          uVar38 = (uint)uVar34;
          uVar40 = uVar40 - 4;
          puVar26 = puVar26 + 2;
          ((uint *)__dest)[3] =
               (int)((ulonglong)uVar34 >> 0x20) << sVar15 | uVar38 >> (bVar19 & 0x1f);
          __dest = (uint *)__dest + 4;
          if (uVar40 == 0) break;
          uVar13 = uVar13 & 0xffffffff00000000 | (ulonglong)*(uint *)puVar26;
LAB_000126ac:
          *(uint *)__dest = uVar38 << (sbyte)uVar17 | uVar18 >> (bVar19 & 0x1f);
LAB_000126bc:
          uVar38 = *(uint *)((int)puVar26 + 4);
          uVar16 = (uint)uVar13 >> (bVar19 & 0x1f);
          lVar12 = CONCAT44(uVar17,uVar16);
          ((uint *)__dest)[1] = uVar18 << (sbyte)uVar17 | uVar16;
        }
      }
      puVar26 = (undefined8 *)((int)puVar26 - (uVar8 >> 3));
      *(uint *)__dest = uVar38 << sVar15 | uVar18 >> (bVar19 & 0x1f);
      puVar25 = (uint *)__dest;
      puVar27 = puVar26;
      if ((uVar13 & 0x200000000) != 0) {
        puVar27 = (undefined8 *)((int)puVar26 + 2);
        *(undefined *)((uint *)__dest + 1) = *(undefined *)puVar26;
        puVar25 = (uint *)((int)__dest + 2);
        *(undefined *)((int)__dest + 5) = *(undefined *)((int)puVar26 + 1);
      }
      if ((uVar13 & 0x100000000) != 0) {
        *(undefined *)(puVar25 + 1) = *(undefined *)puVar27;
      }
      return;
    }
    puVar28 = (undefined2 *)__dest;
    if (((uint)__src & 3) != 0) {
      uVar8 = (uint)__src & 2;
      if (((uint)__src & 1) != 0) {
        uVar3 = *(undefined *)__src;
        __src = (void *)((int)__src + 1);
        *(undefined *)__dest = uVar3;
        uVar17 = uVar17 - 1;
        puVar28 = (undefined2 *)((int)__dest + 1);
        __dest = puVar28;
        if (uVar8 != 0) goto LAB_000127a8;
      }
      uVar1 = *(ushort *)__src;
      __src = (void *)((int)__src + 2);
      uVar17 = uVar17 - 2;
      *(char *)__dest = (char)((uint)uVar1 >> 8);
      puVar28 = (undefined2 *)__dest + 1;
      *(undefined *)((int)__dest + 1) = (char)uVar1;
    }
LAB_000127a8:
    if (((uint)__src & 4) == 0) {
      iVar20 = *(int *)__src;
      *(char *)puVar28 = (char)((uint)iVar20 >> 0x18);
      *(undefined *)((int)puVar28 + 1) = (char)((uint)iVar20 >> 0x10);
      *(char *)(puVar28 + 1) = (char)((uint)iVar20 >> 8);
      uVar17 = uVar17 - 4;
      *(undefined *)((int)puVar28 + 3) = (char)iVar20;
      __src = (int *)__src + 1;
      puVar28 = puVar28 + 2;
    }
    if (uVar18 == 1) {
      iVar20 = *(int *)__src;
      uVar40 = uVar17 - 4;
      *(char *)puVar28 = (char)((uint)iVar20 >> 0x18);
      uVar8 = iVar20 << 0x18;
      *(undefined2 *)((int)puVar28 + 1) = (short)((uint)iVar20 >> 8);
      __src = (int *)__src + 1;
      uVar17 = uVar40 & 0xffffffc0;
      if (((uint)puVar28 & 7) == 5) {
        do {
          uVar18 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
          uVar38 = (uint)*(undefined8 *)__src;
          uVar16 = (uint)((ulonglong)((undefined8 *)__src)[1] >> 0x20);
          uVar10 = (uint)((undefined8 *)__src)[1];
          *(undefined8 *)((int)puVar28 + 3) =
               CONCAT44(uVar18 >> 8 | uVar8,uVar38 >> 8 | uVar18 << 0x18);
          *(undefined8 *)((int)puVar28 + 0xb) =
               CONCAT44(uVar16 >> 8 | uVar38 << 0x18,uVar10 >> 8 | uVar16 << 0x18);
          uVar18 = (uint)((ulonglong)((undefined8 *)__src)[2] >> 0x20);
          uVar8 = (uint)((undefined8 *)__src)[2];
          uVar38 = (uint)((ulonglong)((undefined8 *)__src)[3] >> 0x20);
          uVar16 = (uint)((undefined8 *)__src)[3];
          *(undefined8 *)((int)puVar28 + 0x13) =
               CONCAT44(uVar18 >> 8 | uVar10 << 0x18,uVar8 >> 8 | uVar18 << 0x18);
          *(undefined8 *)((int)puVar28 + 0x1b) =
               CONCAT44(uVar38 >> 8 | uVar8 << 0x18,uVar16 >> 8 | uVar38 << 0x18);
          uVar18 = (uint)((ulonglong)((undefined8 *)__src)[4] >> 0x20);
          uVar8 = (uint)((undefined8 *)__src)[4];
          uVar38 = (uint)((ulonglong)((undefined8 *)__src)[5] >> 0x20);
          uVar41 = (uint)((undefined8 *)__src)[5];
          *(undefined8 *)((int)puVar28 + 0x23) =
               CONCAT44(uVar18 >> 8 | uVar16 << 0x18,uVar8 >> 8 | uVar18 << 0x18);
          *(undefined8 *)((int)puVar28 + 0x2b) =
               CONCAT44(uVar38 >> 8 | uVar8 << 0x18,uVar41 >> 8 | uVar38 << 0x18);
          uVar13 = ((undefined8 *)__src)[7];
          uVar38 = (uint)((ulonglong)((undefined8 *)__src)[6] >> 0x20);
          uVar16 = (uint)((undefined8 *)__src)[6];
          uVar10 = (uint)(uVar13 >> 0x20);
          uVar18 = (uint)uVar13 >> 8;
          uVar8 = (int)(uVar13 & 0xffffffff) << 0x18;
          *(undefined8 *)((int)puVar28 + 0x33) =
               CONCAT44(uVar38 >> 8 | uVar41 << 0x18,uVar16 >> 8 | uVar38 << 0x18);
          *(undefined8 *)((int)puVar28 + 0x3b) =
               CONCAT44(uVar10 >> 8 | uVar16 << 0x18,uVar18 | uVar10 << 0x18);
          uVar17 = uVar17 - 0x40;
          __src = (undefined8 *)__src + 8;
          puVar28 = puVar28 + 0x20;
        } while (uVar17 != 0);
        uVar5 = CONCAT44(uVar40,uVar40) & 0xffffffff00000030;
        uVar17 = (uint)(uVar5 >> 0x20);
        if ((uVar40 & 0x30) == 0) {
          uVar3 = (undefined)(uVar13 & 0xffffffff);
        }
        else {
          do {
            uVar14 = ((undefined8 *)__src)[1];
            uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
            uVar38 = (uint)*(undefined8 *)__src;
            uVar40 = uVar17 >> 8 | uVar8;
            uVar16 = (uint)(uVar14 >> 0x20);
            uVar18 = (uint)uVar14 >> 8;
            uVar8 = (int)(uVar14 & 0xffffffff) << 0x18;
            *(undefined8 *)((int)puVar28 + 3) = CONCAT44(uVar40,uVar38 >> 8 | uVar17 << 0x18);
            *(undefined8 *)((int)puVar28 + 0xb) =
                 CONCAT44(uVar16 >> 8 | uVar38 << 0x18,uVar18 | uVar16 << 0x18);
            uVar40 = (int)uVar5 - 0x10;
            uVar13 = uVar5 & 0xffffffff00000000;
            uVar5 = uVar13 | uVar40;
            uVar17 = (uint)(uVar13 >> 0x20);
            __src = (undefined8 *)__src + 2;
            puVar28 = puVar28 + 8;
          } while (uVar40 != 0);
          uVar3 = (undefined)(uVar14 & 0xffffffff);
        }
        *(undefined *)((int)puVar28 + 3) = uVar3;
        __dest = puVar28 + 2;
      }
      else {
        uVar13 = (ulonglong)*(uint *)((int)puVar28 + -1) << 0x20;
        __dest = puVar28 + 2;
        do {
          uVar18 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
          uVar38 = (uint)*(undefined8 *)__src;
          uVar16 = (uint)((ulonglong)((undefined8 *)__src)[1] >> 0x20);
          uVar10 = (uint)((undefined8 *)__src)[1];
          *(ulonglong *)((int)__dest + -5) =
               uVar13 & 0xffffffff00000000 | (ulonglong)(uVar18 >> 8 | uVar8);
          *(undefined8 *)((int)__dest + 3) =
               CONCAT44(uVar38 >> 8 | uVar18 << 0x18,uVar16 >> 8 | uVar38 << 0x18);
          uVar18 = (uint)((ulonglong)((undefined8 *)__src)[2] >> 0x20);
          uVar8 = (uint)((undefined8 *)__src)[2];
          uVar38 = (uint)((ulonglong)((undefined8 *)__src)[3] >> 0x20);
          uVar41 = (uint)((undefined8 *)__src)[3];
          *(undefined8 *)((int)__dest + 0xb) =
               CONCAT44(uVar10 >> 8 | uVar16 << 0x18,uVar18 >> 8 | uVar10 << 0x18);
          *(undefined8 *)((int)__dest + 0x13) =
               CONCAT44(uVar8 >> 8 | uVar18 << 0x18,uVar38 >> 8 | uVar8 << 0x18);
          uVar18 = (uint)((ulonglong)((undefined8 *)__src)[4] >> 0x20);
          uVar8 = (uint)((undefined8 *)__src)[4];
          uVar16 = (uint)((ulonglong)((undefined8 *)__src)[5] >> 0x20);
          uVar10 = (uint)((undefined8 *)__src)[5];
          *(undefined8 *)((int)__dest + 0x1b) =
               CONCAT44(uVar41 >> 8 | uVar38 << 0x18,uVar18 >> 8 | uVar41 << 0x18);
          *(undefined8 *)((int)__dest + 0x23) =
               CONCAT44(uVar8 >> 8 | uVar18 << 0x18,uVar16 >> 8 | uVar8 << 0x18);
          uVar34 = ((undefined8 *)__src)[7];
          uVar18 = (uint)((ulonglong)((undefined8 *)__src)[6] >> 0x20);
          uVar8 = (uint)((undefined8 *)__src)[6];
          uVar41 = uVar18 >> 8 | uVar10 << 0x18;
          uVar38 = (uint)((ulonglong)uVar34 >> 0x20);
          *(undefined8 *)((int)__dest + 0x2b) = CONCAT44(uVar10 >> 8 | uVar16 << 0x18,uVar41);
          *(undefined8 *)((int)__dest + 0x33) =
               CONCAT44(uVar8 >> 8 | uVar18 << 0x18,uVar38 >> 8 | uVar8 << 0x18);
          uVar8 = (uint)uVar34 << 0x18;
          uVar13 = CONCAT44((uint)uVar34 >> 8 | uVar38 << 0x18,uVar41);
          uVar17 = uVar17 - 0x40;
          __src = (undefined8 *)__src + 8;
          __dest = (undefined2 *)__dest + 0x20;
        } while (uVar17 != 0);
        uVar5 = CONCAT44(uVar40,uVar40) & 0xffffffff00000030;
        uVar17 = (uint)(uVar5 >> 0x20);
        if ((uVar40 & 0x30) == 0) {
          uVar3 = (undefined)uVar34;
        }
        else {
          do {
            uVar34 = ((undefined8 *)__src)[1];
            uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
            uVar18 = (uint)*(undefined8 *)__src;
            uVar38 = uVar17 >> 8 | uVar8;
            uVar40 = (uint)((ulonglong)uVar34 >> 0x20);
            *(ulonglong *)((int)__dest + -5) = uVar13 & 0xffffffff00000000 | (ulonglong)uVar38;
            *(undefined8 *)((int)__dest + 3) =
                 CONCAT44(uVar18 >> 8 | uVar17 << 0x18,uVar40 >> 8 | uVar18 << 0x18);
            uVar8 = (uint)uVar34 << 0x18;
            uVar13 = CONCAT44((uint)uVar34 >> 8 | uVar40 << 0x18,uVar38);
            uVar18 = (int)uVar5 - 0x10;
            uVar14 = uVar5 & 0xffffffff00000000;
            uVar5 = uVar14 | uVar18;
            uVar17 = (uint)(uVar14 >> 0x20);
            __src = (undefined8 *)__src + 2;
            __dest = (undefined2 *)__dest + 8;
          } while (uVar18 != 0);
          uVar3 = (undefined)uVar34;
        }
        uVar18 = (uint)uVar13;
        *(undefined4 *)((int)__dest + -5) = (int)(uVar13 >> 0x20);
        *(undefined *)((int)__dest + -1) = uVar3;
      }
    }
    else {
      uVar13 = (ulonglong)(uVar17 - 4);
      if (uVar18 == 2) {
        iVar20 = *(int *)__src;
        __src = (int *)__src + 1;
        *puVar28 = (short)((uint)iVar20 >> 0x10);
        uVar8 = iVar20 << 0x10;
        __dest = puVar28 + 2;
        uVar13 = uVar13 << 0x20 | uVar13 & 0xffffffffffffffc0;
        if (((uint)puVar28 & 7) == 6) {
          do {
            uVar35 = uVar13;
            uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
            uVar18 = (uint)*(undefined8 *)__src;
            uVar40 = (uint)((ulonglong)((undefined8 *)__src)[1] >> 0x20);
            uVar38 = (uint)((undefined8 *)__src)[1];
            *(ulonglong *)((undefined2 *)__dest + -1) =
                 CONCAT44(uVar17 >> 0x10 | uVar8,uVar18 >> 0x10 | uVar17 << 0x10);
            *(ulonglong *)((undefined2 *)__dest + 3) =
                 CONCAT44(uVar40 >> 0x10 | uVar18 << 0x10,uVar38 >> 0x10 | uVar40 << 0x10);
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[2] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[2];
            uVar8 = (uint)((ulonglong)((undefined8 *)__src)[3] >> 0x20);
            uVar40 = (uint)((undefined8 *)__src)[3];
            *(ulonglong *)((undefined2 *)__dest + 7) =
                 CONCAT44(uVar17 >> 0x10 | uVar38 << 0x10,uVar18 >> 0x10 | uVar17 << 0x10);
            *(ulonglong *)((undefined2 *)__dest + 0xb) =
                 CONCAT44(uVar8 >> 0x10 | uVar18 << 0x10,uVar40 >> 0x10 | uVar8 << 0x10);
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[4] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[4];
            uVar8 = (uint)((ulonglong)((undefined8 *)__src)[5] >> 0x20);
            uVar16 = (uint)((undefined8 *)__src)[5];
            *(ulonglong *)((undefined2 *)__dest + 0xf) =
                 CONCAT44(uVar17 >> 0x10 | uVar40 << 0x10,uVar18 >> 0x10 | uVar17 << 0x10);
            *(ulonglong *)((undefined2 *)__dest + 0x13) =
                 CONCAT44(uVar8 >> 0x10 | uVar18 << 0x10,uVar16 >> 0x10 | uVar8 << 0x10);
            uVar14 = ((undefined8 *)__src)[7];
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[6] >> 0x20);
            uVar40 = (uint)((undefined8 *)__src)[6];
            uVar38 = (uint)(uVar14 >> 0x20);
            uVar18 = (uint)uVar14 >> 0x10;
            uVar8 = (int)(uVar14 & 0xffffffff) << 0x10;
            *(ulonglong *)((undefined2 *)__dest + 0x17) =
                 CONCAT44(uVar17 >> 0x10 | uVar16 << 0x10,uVar40 >> 0x10 | uVar17 << 0x10);
            *(ulonglong *)((undefined2 *)__dest + 0x1b) =
                 CONCAT44(uVar38 >> 0x10 | uVar40 << 0x10,uVar18 | uVar38 << 0x10);
            uVar17 = (int)uVar35 - 0x40;
            uVar5 = uVar35 & 0xffffffff00000000;
            __src = (undefined8 *)__src + 8;
            __dest = (undefined2 *)__dest + 0x20;
            uVar13 = uVar5 | uVar17;
          } while (uVar17 != 0);
          uVar13 = uVar5 | uVar35 >> 0x20 & 0x30;
          uVar17 = (uint)(uVar5 >> 0x20);
          if ((uVar35 & 0x3000000000) == 0) {
            uVar6 = (undefined2)(uVar14 & 0xffffffff);
          }
          else {
            do {
              uVar14 = ((undefined8 *)__src)[1];
              uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
              uVar38 = (uint)*(undefined8 *)__src;
              uVar40 = uVar17 >> 0x10 | uVar8;
              uVar16 = (uint)(uVar14 >> 0x20);
              uVar18 = (uint)uVar14 >> 0x10;
              uVar8 = (int)(uVar14 & 0xffffffff) << 0x10;
              *(ulonglong *)((undefined2 *)__dest + -1) =
                   CONCAT44(uVar40,uVar38 >> 0x10 | uVar17 << 0x10);
              *(ulonglong *)((undefined2 *)__dest + 3) =
                   CONCAT44(uVar16 >> 0x10 | uVar38 << 0x10,uVar18 | uVar16 << 0x10);
              uVar40 = (int)uVar13 - 0x10;
              uVar5 = uVar13 & 0xffffffff00000000;
              uVar13 = uVar5 | uVar40;
              uVar17 = (uint)(uVar5 >> 0x20);
              __src = (undefined8 *)__src + 2;
              __dest = (undefined2 *)__dest + 8;
            } while (uVar40 != 0);
            uVar6 = (undefined2)(uVar14 & 0xffffffff);
          }
          ((undefined2 *)__dest)[-1] = uVar6;
        }
        else {
          uVar5 = (ulonglong)*(uint *)(puVar28 + -1) << 0x20;
          do {
            uVar35 = uVar13;
            uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
            uVar18 = (uint)*(undefined8 *)__src;
            uVar40 = (uint)((ulonglong)((undefined8 *)__src)[1] >> 0x20);
            uVar38 = (uint)((undefined8 *)__src)[1];
            *(ulonglong *)((undefined2 *)__dest + -3) =
                 uVar5 & 0xffffffff00000000 | (ulonglong)(uVar17 >> 0x10 | uVar8);
            *(ulonglong *)((undefined2 *)__dest + 1) =
                 CONCAT44(uVar18 >> 0x10 | uVar17 << 0x10,uVar40 >> 0x10 | uVar18 << 0x10);
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[2] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[2];
            uVar8 = (uint)((ulonglong)((undefined8 *)__src)[3] >> 0x20);
            uVar16 = (uint)((undefined8 *)__src)[3];
            *(ulonglong *)((undefined2 *)__dest + 5) =
                 CONCAT44(uVar38 >> 0x10 | uVar40 << 0x10,uVar17 >> 0x10 | uVar38 << 0x10);
            *(ulonglong *)((undefined2 *)__dest + 9) =
                 CONCAT44(uVar18 >> 0x10 | uVar17 << 0x10,uVar8 >> 0x10 | uVar18 << 0x10);
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[4] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[4];
            uVar40 = (uint)((ulonglong)((undefined8 *)__src)[5] >> 0x20);
            uVar10 = (uint)((undefined8 *)__src)[5];
            *(ulonglong *)((undefined2 *)__dest + 0xd) =
                 CONCAT44(uVar16 >> 0x10 | uVar8 << 0x10,uVar17 >> 0x10 | uVar16 << 0x10);
            *(ulonglong *)((undefined2 *)__dest + 0x11) =
                 CONCAT44(uVar18 >> 0x10 | uVar17 << 0x10,uVar40 >> 0x10 | uVar18 << 0x10);
            uVar34 = ((undefined8 *)__src)[7];
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[6] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[6];
            uVar16 = uVar17 >> 0x10 | uVar10 << 0x10;
            uVar38 = (uint)((ulonglong)uVar34 >> 0x20);
            *(ulonglong *)((undefined2 *)__dest + 0x15) =
                 CONCAT44(uVar10 >> 0x10 | uVar40 << 0x10,uVar16);
            *(ulonglong *)((undefined2 *)__dest + 0x19) =
                 CONCAT44(uVar18 >> 0x10 | uVar17 << 0x10,uVar38 >> 0x10 | uVar18 << 0x10);
            uVar8 = (uint)uVar34 << 0x10;
            uVar5 = CONCAT44((uint)uVar34 >> 0x10 | uVar38 << 0x10,uVar16);
            uVar17 = (int)uVar35 - 0x40;
            uVar14 = uVar35 & 0xffffffff00000000;
            __src = (undefined8 *)__src + 8;
            __dest = (undefined2 *)__dest + 0x20;
            uVar13 = uVar14 | uVar17;
          } while (uVar17 != 0);
          uVar13 = uVar14 | uVar35 >> 0x20 & 0x30;
          uVar17 = (uint)(uVar14 >> 0x20);
          if ((uVar35 & 0x3000000000) == 0) {
            uVar6 = (undefined2)uVar34;
          }
          else {
            do {
              uVar34 = ((undefined8 *)__src)[1];
              uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
              uVar18 = (uint)*(undefined8 *)__src;
              uVar38 = uVar17 >> 0x10 | uVar8;
              uVar40 = (uint)((ulonglong)uVar34 >> 0x20);
              *(ulonglong *)((undefined2 *)__dest + -3) =
                   uVar5 & 0xffffffff00000000 | (ulonglong)uVar38;
              *(ulonglong *)((undefined2 *)__dest + 1) =
                   CONCAT44(uVar18 >> 0x10 | uVar17 << 0x10,uVar40 >> 0x10 | uVar18 << 0x10);
              uVar8 = (uint)uVar34 << 0x10;
              uVar5 = CONCAT44((uint)uVar34 >> 0x10 | uVar40 << 0x10,uVar38);
              uVar18 = (int)uVar13 - 0x10;
              uVar14 = uVar13 & 0xffffffff00000000;
              uVar13 = uVar14 | uVar18;
              uVar17 = (uint)(uVar14 >> 0x20);
              __src = (undefined8 *)__src + 2;
              __dest = (undefined2 *)__dest + 8;
            } while (uVar18 != 0);
            uVar6 = (undefined2)uVar34;
          }
          uVar18 = (uint)uVar5;
          *(int *)((undefined2 *)__dest + -3) = (int)(uVar5 >> 0x20);
          ((undefined2 *)__dest)[-1] = uVar6;
        }
      }
      else {
        iVar20 = *(int *)__src;
        __src = (int *)__src + 1;
        *(char *)puVar28 = (char)((uint)iVar20 >> 0x18);
        uVar8 = iVar20 << 8;
        __dest = puVar28 + 2;
        uVar13 = uVar13 << 0x20 | uVar13 & 0xffffffffffffffc0;
        if (((uint)puVar28 & 7) == 7) {
          do {
            uVar14 = uVar13;
            uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
            uVar18 = (uint)*(undefined8 *)__src;
            uVar40 = (uint)((ulonglong)((undefined8 *)__src)[1] >> 0x20);
            uVar38 = (uint)((undefined8 *)__src)[1];
            *(undefined8 *)((int)__dest + -3) =
                 CONCAT44(uVar17 >> 0x18 | uVar8,uVar18 >> 0x18 | uVar17 << 8);
            *(undefined8 *)((int)__dest + 5) =
                 CONCAT44(uVar40 >> 0x18 | uVar18 << 8,uVar38 >> 0x18 | uVar40 << 8);
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[2] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[2];
            uVar8 = (uint)((ulonglong)((undefined8 *)__src)[3] >> 0x20);
            uVar40 = (uint)((undefined8 *)__src)[3];
            *(undefined8 *)((int)__dest + 0xd) =
                 CONCAT44(uVar17 >> 0x18 | uVar38 << 8,uVar18 >> 0x18 | uVar17 << 8);
            *(undefined8 *)((int)__dest + 0x15) =
                 CONCAT44(uVar8 >> 0x18 | uVar18 << 8,uVar40 >> 0x18 | uVar8 << 8);
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[4] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[4];
            uVar8 = (uint)((ulonglong)((undefined8 *)__src)[5] >> 0x20);
            uVar16 = (uint)((undefined8 *)__src)[5];
            *(undefined8 *)((int)__dest + 0x1d) =
                 CONCAT44(uVar17 >> 0x18 | uVar40 << 8,uVar18 >> 0x18 | uVar17 << 8);
            *(undefined8 *)((int)__dest + 0x25) =
                 CONCAT44(uVar8 >> 0x18 | uVar18 << 8,uVar16 >> 0x18 | uVar8 << 8);
            uVar34 = ((undefined8 *)__src)[7];
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[6] >> 0x20);
            uVar40 = (uint)((undefined8 *)__src)[6];
            uVar38 = (uint)((ulonglong)uVar34 >> 0x20);
            uVar18 = (uint)uVar34 >> 0x18;
            uVar8 = (uint)uVar34 << 8;
            uVar3 = (undefined)uVar34;
            *(undefined8 *)((int)__dest + 0x2d) =
                 CONCAT44(uVar17 >> 0x18 | uVar16 << 8,uVar40 >> 0x18 | uVar17 << 8);
            *(undefined8 *)((int)__dest + 0x35) =
                 CONCAT44(uVar38 >> 0x18 | uVar40 << 8,uVar18 | uVar38 << 8);
            uVar17 = (int)uVar14 - 0x40;
            uVar5 = uVar14 & 0xffffffff00000000;
            __src = (undefined8 *)__src + 8;
            __dest = (undefined2 *)__dest + 0x20;
            uVar13 = uVar5 | uVar17;
          } while (uVar17 != 0);
          uVar13 = uVar5 | uVar14 >> 0x20 & 0x30;
          uVar17 = (uint)(uVar5 >> 0x20);
          if ((uVar14 & 0x3000000000) == 0) {
            uVar6 = (undefined2)(uVar8 >> 0x10);
          }
          else {
            do {
              uVar34 = ((undefined8 *)__src)[1];
              uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
              uVar38 = (uint)*(undefined8 *)__src;
              uVar40 = uVar17 >> 0x18 | uVar8;
              uVar16 = (uint)((ulonglong)uVar34 >> 0x20);
              uVar18 = (uint)uVar34 >> 0x18;
              uVar8 = (uint)uVar34 << 8;
              uVar3 = (undefined)uVar34;
              *(undefined8 *)((int)__dest + -3) = CONCAT44(uVar40,uVar38 >> 0x18 | uVar17 << 8);
              *(undefined8 *)((int)__dest + 5) =
                   CONCAT44(uVar16 >> 0x18 | uVar38 << 8,uVar18 | uVar16 << 8);
              uVar40 = (int)uVar13 - 0x10;
              uVar5 = uVar13 & 0xffffffff00000000;
              uVar13 = uVar5 | uVar40;
              uVar17 = (uint)(uVar5 >> 0x20);
              __src = (undefined8 *)__src + 2;
              __dest = (undefined2 *)__dest + 8;
            } while (uVar40 != 0);
            uVar6 = (undefined2)(uVar8 >> 0x10);
          }
          *(undefined2 *)((int)__dest + -3) = uVar6;
          *(undefined *)((int)__dest + -1) = uVar3;
        }
        else {
          uVar5 = (ulonglong)*(uint *)((int)puVar28 + -3) << 0x20;
          do {
            uVar35 = uVar13;
            uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
            uVar18 = (uint)*(undefined8 *)__src;
            uVar40 = (uint)((ulonglong)((undefined8 *)__src)[1] >> 0x20);
            uVar38 = (uint)((undefined8 *)__src)[1];
            *(ulonglong *)((int)__dest + -7) =
                 uVar5 & 0xffffffff00000000 | (ulonglong)(uVar17 >> 0x18 | uVar8);
            *(undefined8 *)((int)__dest + 1) =
                 CONCAT44(uVar18 >> 0x18 | uVar17 << 8,uVar40 >> 0x18 | uVar18 << 8);
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[2] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[2];
            uVar8 = (uint)((ulonglong)((undefined8 *)__src)[3] >> 0x20);
            uVar16 = (uint)((undefined8 *)__src)[3];
            *(undefined8 *)((int)__dest + 9) =
                 CONCAT44(uVar38 >> 0x18 | uVar40 << 8,uVar17 >> 0x18 | uVar38 << 8);
            *(undefined8 *)((int)__dest + 0x11) =
                 CONCAT44(uVar18 >> 0x18 | uVar17 << 8,uVar8 >> 0x18 | uVar18 << 8);
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[4] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[4];
            uVar40 = (uint)((ulonglong)((undefined8 *)__src)[5] >> 0x20);
            uVar10 = (uint)((undefined8 *)__src)[5];
            *(undefined8 *)((int)__dest + 0x19) =
                 CONCAT44(uVar16 >> 0x18 | uVar8 << 8,uVar17 >> 0x18 | uVar16 << 8);
            *(undefined8 *)((int)__dest + 0x21) =
                 CONCAT44(uVar18 >> 0x18 | uVar17 << 8,uVar40 >> 0x18 | uVar18 << 8);
            uVar34 = ((undefined8 *)__src)[7];
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[6] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[6];
            uVar16 = uVar17 >> 0x18 | uVar10 << 8;
            uVar38 = (uint)((ulonglong)uVar34 >> 0x20);
            *(undefined8 *)((int)__dest + 0x29) = CONCAT44(uVar10 >> 0x18 | uVar40 << 8,uVar16);
            *(undefined8 *)((int)__dest + 0x31) =
                 CONCAT44(uVar18 >> 0x18 | uVar17 << 8,uVar38 >> 0x18 | uVar18 << 8);
            uVar8 = (uint)uVar34 << 8;
            uVar3 = (undefined)uVar34;
            uVar5 = CONCAT44((uint)uVar34 >> 0x18 | uVar38 << 8,uVar16);
            uVar17 = (int)uVar35 - 0x40;
            uVar14 = uVar35 & 0xffffffff00000000;
            __src = (undefined8 *)__src + 8;
            __dest = (undefined2 *)__dest + 0x20;
            uVar13 = uVar14 | uVar17;
          } while (uVar17 != 0);
          uVar13 = uVar14 | uVar35 >> 0x20 & 0x30;
          uVar17 = (uint)(uVar14 >> 0x20);
          if ((uVar35 & 0x3000000000) == 0) {
            uVar6 = (undefined2)(uVar8 >> 0x10);
          }
          else {
            do {
              uVar34 = ((undefined8 *)__src)[1];
              uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
              uVar18 = (uint)*(undefined8 *)__src;
              uVar38 = uVar17 >> 0x18 | uVar8;
              uVar40 = (uint)((ulonglong)uVar34 >> 0x20);
              *(ulonglong *)((int)__dest + -7) = uVar5 & 0xffffffff00000000 | (ulonglong)uVar38;
              *(undefined8 *)((int)__dest + 1) =
                   CONCAT44(uVar18 >> 0x18 | uVar17 << 8,uVar40 >> 0x18 | uVar18 << 8);
              uVar8 = (uint)uVar34 << 8;
              uVar3 = (undefined)uVar34;
              uVar5 = CONCAT44((uint)uVar34 >> 0x18 | uVar40 << 8,uVar38);
              uVar18 = (int)uVar13 - 0x10;
              uVar14 = uVar13 & 0xffffffff00000000;
              uVar13 = uVar14 | uVar18;
              uVar17 = (uint)(uVar14 >> 0x20);
              __src = (undefined8 *)__src + 2;
              __dest = (undefined2 *)__dest + 8;
            } while (uVar18 != 0);
            uVar6 = (undefined2)(uVar8 >> 0x10);
          }
          uVar18 = (uint)uVar5;
          *(undefined4 *)((int)__dest + -7) = (int)(uVar5 >> 0x20);
          *(undefined2 *)((int)__dest + -3) = uVar6;
          *(undefined *)((int)__dest + -1) = uVar3;
        }
      }
    }
LAB_0001316c:
    uVar13 = CONCAT44(uVar17,uVar17) & 0xffffffff0000000e;
    iVar20 = (int)uVar13;
    FUN_00013248((int)__dest + iVar20,(int)__src + iVar20,(int)(uVar13 >> 0x20),iVar20,iVar20 << 3);
                    /* WARNING: Could not recover jumptable at 0x00013188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(uVar18 + 0x84))();
    return;
  }
  bVar42 = ((uint)__src & 3) != 0;
  if (uVar17 < 0x10) {
    if (bVar42) goto LAB_0001316c;
    bVar42 = (uVar13 & 0x400000000) == 0;
    if ((uVar13 & 0x800000000) != 0) {
      uVar7 = *(undefined4 *)__src;
      uVar9 = *(undefined4 *)((int)__src + 4);
      __src = (void *)((int)__src + 8);
      *(undefined4 *)__dest = uVar7;
      *(undefined4 *)((int)__dest + 4) = uVar9;
      __dest = (void *)((int)__dest + 8);
    }
    goto LAB_000123f4;
  }
  uVar8 = (uint)__src & 4;
  puVar26 = (undefined8 *)__dest;
  uVar18 = uVar17;
  if (bVar42) {
    uVar8 = (uint)__src & 2;
    if (((uint)__src & 1) == 0) {
LAB_000121cc:
      uVar6 = *(undefined2 *)__src;
      __src = (void *)((int)__src + 2);
      *(undefined2 *)puVar26 = uVar6;
      uVar18 = uVar17 - 2;
      puVar26 = (undefined8 *)((int)puVar26 + 2);
    }
    else {
      uVar3 = *(undefined *)__src;
      __src = (void *)((int)__src + 1);
      *(undefined *)__dest = uVar3;
      uVar17 = uVar17 - 1;
      puVar26 = (undefined8 *)((int)__dest + 1);
      uVar18 = uVar17;
      if (uVar8 == 0) goto LAB_000121cc;
    }
    uVar8 = (uint)__src & 4;
  }
  uVar17 = uVar18;
  if (uVar8 != 0) {
    uVar17 = uVar18 - 4;
    *(undefined4 *)puVar26 = *(undefined4 *)__src;
    __src = (void *)((int)__src + 4);
    puVar26 = (undefined8 *)((int)puVar26 + 4);
  }
  uVar40 = (uint)pvVar37 & 3;
  uVar8 = uVar17 & 0xffffff80;
  if (uVar8 != 0) {
    uVar34 = *(undefined8 *)__src;
    if (((uint)puVar26 & 4) == 0) {
      while( true ) {
        uVar39 = ((undefined8 *)__src)[1];
        uVar4 = ((undefined8 *)__src)[2];
        uVar11 = ((undefined8 *)__src)[3];
        *puVar26 = uVar34;
        puVar26[1] = uVar39;
        puVar26[2] = uVar4;
        puVar26[3] = uVar11;
        uVar11 = ((undefined8 *)__src)[5];
        uVar34 = ((undefined8 *)__src)[6];
        uVar4 = ((undefined8 *)__src)[7];
        puVar26[4] = ((undefined8 *)__src)[4];
        puVar26[5] = uVar11;
        puVar26[6] = uVar34;
        puVar26[7] = uVar4;
        uVar11 = ((undefined8 *)__src)[9];
        uVar34 = ((undefined8 *)__src)[10];
        uVar4 = ((undefined8 *)__src)[0xb];
        puVar26[8] = ((undefined8 *)__src)[8];
        puVar26[9] = uVar11;
        puVar26[10] = uVar34;
        puVar26[0xb] = uVar4;
        uVar11 = ((undefined8 *)__src)[0xc];
        uVar39 = ((undefined8 *)__src)[0xd];
        iVar20 = (int)uVar39;
        uVar34 = ((undefined8 *)__src)[0xe];
        uVar4 = ((undefined8 *)__src)[0xf];
        puVar26[0xc] = uVar11;
        puVar26[0xd] = uVar39;
        puVar26[0xe] = uVar34;
        puVar26[0xf] = uVar4;
        uVar8 = uVar8 - 0x80;
        puVar32 = (undefined8 *)__src + 0x10;
        puVar27 = puVar26 + 0x10;
        if (uVar8 == 0) break;
        uVar34 = *puVar32;
        puVar26 = puVar27;
        __src = puVar32;
      }
      uVar18 = uVar17 & 0x70;
      if (uVar18 == 0) {
        if ((uVar17 & 8) != 0) {
          puVar27 = puVar26 + 0x11;
          puVar26[0x10] = *puVar32;
          puVar32 = (undefined8 *)__src + 0x11;
        }
        if ((uVar17 & 4) != 0) {
          uVar7 = *(undefined4 *)puVar32;
          puVar32 = (undefined8 *)((int)puVar32 + 4);
          *(undefined4 *)puVar27 = uVar7;
          puVar27 = (undefined8 *)((int)puVar27 + 4);
        }
        if ((uVar17 & 2) != 0) {
          uVar6 = *(undefined2 *)puVar32;
          puVar32 = (undefined8 *)((int)puVar32 + 2);
          *(undefined2 *)puVar27 = uVar6;
          puVar27 = (undefined8 *)((int)puVar27 + 2);
        }
        if ((uVar17 & 1) != 0) {
          *(undefined *)puVar27 = *(undefined *)puVar32;
        }
        return;
      }
      iVar23 = FUN_00013250(puVar27,(int)puVar32 + uVar18,(int)((ulonglong)uVar11 >> 0x20),
                            (int)uVar11,(int)((ulonglong)uVar39 >> 0x20));
                    /* WARNING: Could not recover jumptable at 0x000124e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(iVar20 + 0x84))(iVar23 + uVar18);
      return;
    }
    while( true ) {
      uVar39 = ((undefined8 *)__src)[1];
      uVar4 = ((undefined8 *)__src)[2];
      uVar11 = ((undefined8 *)__src)[3];
      *(int *)puVar26 = (int)((ulonglong)uVar34 >> 0x20);
      *(undefined4 *)((int)puVar26 + 4) = (int)uVar34;
      *(int *)(puVar26 + 1) = (int)((ulonglong)uVar39 >> 0x20);
      *(undefined4 *)((int)puVar26 + 0xc) = (int)uVar39;
      *(int *)(puVar26 + 2) = (int)((ulonglong)uVar4 >> 0x20);
      *(undefined4 *)((int)puVar26 + 0x14) = (int)uVar4;
      *(int *)(puVar26 + 3) = (int)((ulonglong)uVar11 >> 0x20);
      *(undefined4 *)((int)puVar26 + 0x1c) = (int)uVar11;
      uVar11 = ((undefined8 *)__src)[4];
      uVar39 = ((undefined8 *)__src)[5];
      uVar34 = ((undefined8 *)__src)[6];
      uVar4 = ((undefined8 *)__src)[7];
      *(int *)(puVar26 + 4) = (int)((ulonglong)uVar11 >> 0x20);
      *(undefined4 *)((int)puVar26 + 0x24) = (int)uVar11;
      *(int *)(puVar26 + 5) = (int)((ulonglong)uVar39 >> 0x20);
      *(undefined4 *)((int)puVar26 + 0x2c) = (int)uVar39;
      *(int *)(puVar26 + 6) = (int)((ulonglong)uVar34 >> 0x20);
      *(undefined4 *)((int)puVar26 + 0x34) = (int)uVar34;
      *(int *)(puVar26 + 7) = (int)((ulonglong)uVar4 >> 0x20);
      *(undefined4 *)((int)puVar26 + 0x3c) = (int)uVar4;
      uVar11 = ((undefined8 *)__src)[8];
      uVar39 = ((undefined8 *)__src)[9];
      uVar34 = ((undefined8 *)__src)[10];
      uVar4 = ((undefined8 *)__src)[0xb];
      *(int *)(puVar26 + 8) = (int)((ulonglong)uVar11 >> 0x20);
      *(undefined4 *)((int)puVar26 + 0x44) = (int)uVar11;
      *(int *)(puVar26 + 9) = (int)((ulonglong)uVar39 >> 0x20);
      *(undefined4 *)((int)puVar26 + 0x4c) = (int)uVar39;
      *(int *)(puVar26 + 10) = (int)((ulonglong)uVar34 >> 0x20);
      *(undefined4 *)((int)puVar26 + 0x54) = (int)uVar34;
      *(int *)(puVar26 + 0xb) = (int)((ulonglong)uVar4 >> 0x20);
      *(undefined4 *)((int)puVar26 + 0x5c) = (int)uVar4;
      uVar11 = ((undefined8 *)__src)[0xc];
      uVar39 = ((undefined8 *)__src)[0xd];
      uVar34 = ((undefined8 *)__src)[0xe];
      uVar4 = ((undefined8 *)__src)[0xf];
      uVar18 = (uint)((ulonglong)uVar11 >> 0x20);
      *(uint *)(puVar26 + 0xc) = uVar18;
      uVar7 = (undefined4)uVar11;
      *(undefined4 *)((int)puVar26 + 100) = uVar7;
      *(int *)(puVar26 + 0xd) = (int)((ulonglong)uVar39 >> 0x20);
      uVar40 = (uint)uVar39;
      *(uint *)((int)puVar26 + 0x6c) = uVar40;
      *(int *)(puVar26 + 0xe) = (int)((ulonglong)uVar34 >> 0x20);
      *(undefined4 *)((int)puVar26 + 0x74) = (int)uVar34;
      *(int *)(puVar26 + 0xf) = (int)((ulonglong)uVar4 >> 0x20);
      *(undefined4 *)((int)puVar26 + 0x7c) = (int)uVar4;
      uVar8 = uVar8 - 0x80;
      __src = (undefined8 *)__src + 0x10;
      puVar26 = puVar26 + 0x10;
      if (uVar8 == 0) break;
      uVar34 = *(undefined8 *)__src;
    }
  }
  uVar8 = uVar17 & 0x70;
  if (uVar8 != 0) {
    FUN_00013248((int)puVar26 + uVar8,(int)__src + uVar8,uVar18,uVar7,uVar8 + (uVar8 >> 1));
                    /* WARNING: Could not recover jumptable at 0x00012328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(uVar40 + 0xb8))();
    return;
  }
  bVar42 = (uVar17 & 4) == 0;
  __dest = puVar26;
  if ((uVar17 & 8) != 0) {
    uVar34 = *(undefined8 *)__src;
    __dest = puVar26 + 1;
    *(int *)puVar26 = (int)((ulonglong)uVar34 >> 0x20);
    __src = (undefined8 *)__src + 1;
    *(undefined4 *)((int)puVar26 + 4) = (int)uVar34;
  }
LAB_000123f4:
  if (!bVar42) {
    uVar7 = *(undefined4 *)__src;
    __src = (void *)((int)__src + 4);
    *(undefined4 *)__dest = uVar7;
    __dest = (void *)((int)__dest + 4);
  }
  if ((uVar17 & 2) != 0) {
    uVar6 = *(undefined2 *)__src;
    __src = (void *)((int)__src + 2);
    *(undefined2 *)__dest = uVar6;
    __dest = (void *)((int)__dest + 2);
  }
  if ((uVar17 & 1) != 0) {
    *(undefined *)__dest = *(undefined *)__src;
  }
  return;
}


/* WARNING: Instruction at (ram,0x00011c6c) overlaps instruction at (ram,0x00011c68)
    */
/* WARNING: Removing unreachable block (ram,0x000124dc) */
/* WARNING: Removing unreachable block (ram,0x00012320) */
/* WARNING: Removing unreachable block (ram,0x0001317c) */
/* WARNING: Removing unreachable block (ram,0x00011d54) */
/* WARNING: Removing unreachable block (ram,0x00011f1c) */
/* WARNING: Removing unreachable block (ram,0x00011f40) */
/* WARNING: Heritage AFTER dead removal. Example location: o3 : 0x0001317c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void * memmove(void *__dest,void *__src,size_t __n)

{
  ushort uVar1;
  char cVar2;
  undefined uVar3;
  undefined2 uVar6;
  undefined8 uVar4;
  undefined4 uVar7;
  ulonglong uVar5;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  sbyte sVar15;
  longlong lVar12;
  uint uVar16;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar17;
  byte bVar19;
  uint uVar18;
  int iVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  int iVar23;
  uint *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  uint *puVar27;
  undefined2 *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  uint *puVar31;
  undefined8 *puVar32;
  size_t sVar33;
  undefined8 uVar34;
  void *pvVar36;
  ulonglong uVar35;
  void *pvVar37;
  uint uVar38;
  undefined8 uVar39;
  uint uVar40;
  uint uVar41;
  bool bVar42;
  
  uVar13 = (ulonglong)__n << 0x20;
  pvVar37 = (void *)((int)__dest - (int)__src);
  if (__src < __dest) {
    pvVar36 = (void *)((int)__src + __n);
    uVar13 = CONCAT44(__n,pvVar36);
    bVar42 = ((uint)pvVar37 & 3) == 0;
    if (__dest < pvVar36) {
      puVar29 = (undefined *)((int)__src + __n);
      puVar22 = (undefined4 *)((int)__dest + __n);
      if (!bVar42) {
        if (__n < 0x10) {
LAB_00011f30:
          uVar13 = CONCAT44(__n,__n) & 0xffffffff0000000e;
          iVar20 = (int)uVar13;
          uVar5 = CONCAT44(iVar20 << 3,pvVar37) & 0xffffffff00000003;
          iVar23 = (int)uVar5;
          FUN_00013248((undefined4 *)((int)puVar22 - iVar20),puVar29 + -iVar20,(int)(uVar13 >> 0x20)
                       ,iVar20,(int)(uVar5 >> 0x20));
                    /* WARNING: Could not recover jumptable at 0x00011f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pvVar37 = (void *)(*(code *)(iVar23 + 0x84))();
          return pvVar37;
        }
        if (((uint)puVar22 & 3) != 0) {
          uVar17 = (uint)puVar22 & 2;
          if (((uint)puVar22 & 1) != 0) {
            puVar30 = puVar29 + -1;
            puVar29 = puVar29 + -1;
            *(undefined *)((int)puVar22 + -1) = *puVar30;
            puVar22 = (undefined4 *)((int)puVar22 + -1);
            __n = __n - 1;
            uVar13 = CONCAT44(__n,pvVar36);
            if (uVar17 == 0) goto LAB_0001205c;
          }
          puVar30 = puVar29 + -1;
          puVar29 = puVar29 + -2;
          *(undefined *)((int)puVar22 + -1) = *puVar30;
          puVar22 = (undefined4 *)((int)puVar22 + -2);
          uVar13 = (ulonglong)(__n - 2) << 0x20;
          *(undefined *)puVar22 = *puVar29;
        }
LAB_0001205c:
        puVar27 = (uint *)((uint)puVar29 & 0xfffffffc);
        uVar18 = (uint)(uVar13 >> 0x20);
        uVar5 = CONCAT44(puVar29,uVar18) & 0x30000000c;
        uVar17 = (uint)uVar5;
        cVar2 = (char)(uVar5 >> 0x20);
        sVar15 = cVar2 * '\b';
        bVar19 = cVar2 * -8 + 0x20;
        if (uVar17 == 4) {
          uVar17 = *puVar27;
          uVar40 = puVar27[-1];
          puVar31 = puVar27 + -5;
          puVar24 = puVar22 + -4;
          uVar8 = (uVar18 >> 2) - 1;
          uVar14 = uVar13 & 0xffffffff00000000 | (ulonglong)puVar27[-2];
          goto LAB_000120f4;
        }
        if (uVar17 < 8) {
          uVar40 = *puVar27;
          puVar24 = puVar22 + -3;
          uVar14 = uVar13 & 0xffffffff00000000 | (ulonglong)puVar27[-1];
          puVar31 = puVar27 + -4;
          uVar8 = (uint)((uVar13 & 0xffffffff00000000) >> 0x22);
          while( true ) {
            uVar38 = puVar31[2];
            puVar24[2] = (int)uVar14 << sVar15 | uVar40 >> (bVar19 & 0x1f);
LAB_00012118:
            uVar18 = (uint)(uVar14 >> 0x20);
            uVar17 = puVar31[1];
            puVar24[1] = uVar38 << sVar15 | (uint)uVar14 >> (bVar19 & 0x1f);
LAB_0001212c:
            uVar40 = *puVar31;
            uVar8 = uVar8 - 4;
            *puVar24 = uVar17 << sVar15 | uVar38 >> (bVar19 & 0x1f);
            puVar27 = puVar24 + -4;
            if (uVar8 == 0) break;
            uVar14 = CONCAT44(uVar18,puVar31[-1]);
            puVar24 = puVar27;
            puVar31 = puVar31 + -4;
LAB_000120f4:
            puVar24[3] = uVar40 << sVar15 | uVar17 >> (bVar19 & 0x1f);
          }
          iVar23 = (int)(puVar31 + -4) + (int)(uVar5 >> 0x20);
          puVar24[-1] = uVar40 << sVar15 | uVar17 >> (bVar19 & 0x1f);
          iVar20 = iVar23;
          if ((uVar18 & 2) != 0) {
            iVar20 = iVar23 + -2;
            *(undefined *)((int)puVar24 + -5) = *(undefined *)(iVar23 + 0xf);
            puVar27 = (uint *)((int)puVar24 + -0x12);
            *(undefined *)((int)puVar24 + -6) = *(undefined *)(iVar23 + 0xe);
          }
          if ((uVar18 & 1) != 0) {
            *(undefined *)((int)puVar27 + 0xb) = *(undefined *)(iVar20 + 0xf);
          }
          return __dest;
        }
        if (uVar17 == 8) {
          uVar38 = *puVar27;
          puVar24 = puVar22 + -1;
          uVar17 = puVar27[-1];
          puVar31 = puVar27 + -2;
          uVar8 = (uVar18 >> 2) + 2;
          goto LAB_0001212c;
        }
        uVar14 = uVar13 & 0xffffffff00000000 | (ulonglong)*puVar27;
        puVar24 = puVar22 + -2;
        uVar38 = puVar27[-1];
        puVar31 = puVar27 + -3;
        uVar8 = (uVar18 >> 2) + 1;
        goto LAB_00012118;
      }
      bVar42 = ((uint)puVar29 & 3) != 0;
      if (__n < 0x10) {
        if (bVar42) goto LAB_00011f30;
        bVar42 = (__n & 4) == 0;
        if ((__n & 8) != 0) {
          puVar21 = (undefined4 *)(puVar29 + -8);
          uVar7 = *(undefined4 *)(puVar29 + -4);
          puVar29 = puVar29 + -8;
          puVar22[-2] = *puVar21;
          puVar22[-1] = uVar7;
          puVar22 = puVar22 + -2;
        }
        goto LAB_00011e2c;
      }
      puVar21 = puVar22;
      sVar33 = __n;
      if (bVar42) {
        uVar17 = (uint)puVar29 & 2;
        if (((uint)puVar29 & 1) != 0) {
          puVar30 = puVar29 + -1;
          puVar29 = puVar29 + -1;
          *(undefined *)((int)puVar22 + -1) = *puVar30;
          __n = __n - 1;
          puVar21 = (undefined4 *)((int)puVar22 + -1);
          sVar33 = __n;
          if (uVar17 == 0) goto code_r0x00011c40;
        }
        puVar28 = (undefined2 *)(puVar29 + -2);
        puVar29 = puVar29 + -2;
        *(undefined2 *)((int)puVar21 + -2) = *puVar28;
        sVar33 = __n - 2;
        puVar21 = (undefined4 *)((int)puVar21 + -2);
      }
code_r0x00011c40:
      __n = sVar33;
      if (((uint)puVar29 & 4) != 0) {
        __n = sVar33 - 4;
        puVar21[-1] = *(undefined4 *)(puVar29 + -4);
        puVar29 = puVar29 + -4;
        puVar21 = puVar21 + -1;
      }
      uVar18 = (uint)pvVar37 & 3;
      uVar17 = __n & 0xffffff80;
      if (uVar17 == 0) {
LAB_00011d3c:
        uVar17 = __n & 0x70;
        if (uVar17 != 0) {
          iVar20 = FUN_00013248(puVar21,puVar29 + -uVar17,sVar33,pvVar36,uVar17 + (uVar17 >> 1));
                    /* WARNING: Could not recover jumptable at 0x00011d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pvVar37 = (void *)(*(code *)(uVar18 + 0xbc))(iVar20 - uVar17);
          return pvVar37;
        }
      }
      else {
        uVar34 = *(undefined8 *)(puVar29 + -0x20);
        puVar30 = puVar29;
        if (((uint)puVar21 & 4) != 0) {
          while( true ) {
            uVar39 = *(undefined8 *)(puVar30 + -0x18);
            uVar4 = *(undefined8 *)(puVar30 + -0x10);
            uVar11 = *(undefined8 *)(puVar30 + -8);
            puVar21[-8] = (int)((ulonglong)uVar34 >> 0x20);
            puVar21[-7] = (int)uVar34;
            puVar21[-6] = (int)((ulonglong)uVar39 >> 0x20);
            puVar21[-5] = (int)uVar39;
            puVar21[-4] = (int)((ulonglong)uVar4 >> 0x20);
            puVar21[-3] = (int)uVar4;
            puVar21[-2] = (int)((ulonglong)uVar11 >> 0x20);
            puVar21[-1] = (int)uVar11;
            uVar11 = *(undefined8 *)(puVar30 + -0x40);
            uVar39 = *(undefined8 *)(puVar30 + -0x38);
            uVar34 = *(undefined8 *)(puVar30 + -0x30);
            uVar4 = *(undefined8 *)(puVar30 + -0x28);
            puVar21[-0x10] = (int)((ulonglong)uVar11 >> 0x20);
            puVar21[-0xf] = (int)uVar11;
            puVar21[-0xe] = (int)((ulonglong)uVar39 >> 0x20);
            puVar21[-0xd] = (int)uVar39;
            puVar21[-0xc] = (int)((ulonglong)uVar34 >> 0x20);
            puVar21[-0xb] = (int)uVar34;
            puVar21[-10] = (int)((ulonglong)uVar4 >> 0x20);
            puVar21[-9] = (int)uVar4;
            uVar11 = *(undefined8 *)(puVar30 + -0x60);
            uVar39 = *(undefined8 *)(puVar30 + -0x58);
            uVar34 = *(undefined8 *)(puVar30 + -0x50);
            uVar4 = *(undefined8 *)(puVar30 + -0x48);
            puVar21[-0x18] = (int)((ulonglong)uVar11 >> 0x20);
            puVar21[-0x17] = (int)uVar11;
            puVar21[-0x16] = (int)((ulonglong)uVar39 >> 0x20);
            puVar21[-0x15] = (int)uVar39;
            puVar21[-0x14] = (int)((ulonglong)uVar34 >> 0x20);
            puVar21[-0x13] = (int)uVar34;
            puVar21[-0x12] = (int)((ulonglong)uVar4 >> 0x20);
            puVar21[-0x11] = (int)uVar4;
            uVar11 = *(undefined8 *)(puVar30 + -0x80);
            uVar39 = *(undefined8 *)(puVar30 + -0x78);
            uVar34 = *(undefined8 *)(puVar30 + -0x70);
            uVar4 = *(undefined8 *)(puVar30 + -0x68);
            sVar33 = (size_t)((ulonglong)uVar11 >> 0x20);
            puVar21[-0x20] = sVar33;
            pvVar36 = (void *)uVar11;
            *(void **)(puVar21 + -0x1f) = pvVar36;
            puVar21[-0x1e] = (int)((ulonglong)uVar39 >> 0x20);
            uVar18 = (uint)uVar39;
            puVar21[-0x1d] = uVar18;
            puVar21[-0x1c] = (int)((ulonglong)uVar34 >> 0x20);
            puVar21[-0x1b] = (int)uVar34;
            puVar21[-0x1a] = (int)((ulonglong)uVar4 >> 0x20);
            puVar21[-0x19] = (int)uVar4;
            uVar17 = uVar17 - 0x80;
            puVar29 = puVar30 + -0x80;
            puVar21 = puVar21 + -0x20;
            if (uVar17 == 0) break;
            uVar34 = *(undefined8 *)(puVar30 + -0xa0);
            puVar30 = puVar29;
          }
          goto LAB_00011d3c;
        }
        while( true ) {
          uVar39 = *(undefined8 *)(puVar30 + -0x18);
          uVar4 = *(undefined8 *)(puVar30 + -0x10);
          uVar11 = *(undefined8 *)(puVar30 + -8);
          *(undefined8 *)(puVar21 + -8) = uVar34;
          *(undefined8 *)(puVar21 + -6) = uVar39;
          *(undefined8 *)(puVar21 + -4) = uVar4;
          *(undefined8 *)(puVar21 + -2) = uVar11;
          uVar11 = *(undefined8 *)(puVar30 + -0x38);
          uVar34 = *(undefined8 *)(puVar30 + -0x30);
          uVar4 = *(undefined8 *)(puVar30 + -0x28);
          *(undefined8 *)(puVar21 + -0x10) = *(undefined8 *)(puVar30 + -0x40);
          *(undefined8 *)(puVar21 + -0xe) = uVar11;
          *(undefined8 *)(puVar21 + -0xc) = uVar34;
          *(undefined8 *)(puVar21 + -10) = uVar4;
          uVar11 = *(undefined8 *)(puVar30 + -0x58);
          uVar34 = *(undefined8 *)(puVar30 + -0x50);
          uVar4 = *(undefined8 *)(puVar30 + -0x48);
          *(undefined8 *)(puVar21 + -0x18) = *(undefined8 *)(puVar30 + -0x60);
          *(undefined8 *)(puVar21 + -0x16) = uVar11;
          *(undefined8 *)(puVar21 + -0x14) = uVar34;
          *(undefined8 *)(puVar21 + -0x12) = uVar4;
          uVar11 = *(undefined8 *)(puVar30 + -0x80);
          uVar39 = *(undefined8 *)(puVar30 + -0x78);
          uVar34 = *(undefined8 *)(puVar30 + -0x70);
          uVar4 = *(undefined8 *)(puVar30 + -0x68);
          *(undefined8 *)(puVar21 + -0x20) = uVar11;
          *(undefined8 *)(puVar21 + -0x1e) = uVar39;
          *(undefined8 *)(puVar21 + -0x1c) = uVar34;
          *(undefined8 *)(puVar21 + -0x1a) = uVar4;
          uVar17 = uVar17 - 0x80;
          puVar29 = puVar30 + -0x80;
          puVar21 = puVar21 + -0x20;
          if (uVar17 == 0) break;
          uVar34 = *(undefined8 *)(puVar30 + -0xa0);
          puVar30 = puVar29;
        }
        uVar17 = __n & 0x70;
        if (uVar17 != 0) {
          iVar20 = (int)uVar39;
          iVar23 = FUN_00013248(puVar21,puVar29 + -uVar17,(int)((ulonglong)uVar11 >> 0x20),
                                (int)uVar11,uVar17 + (uVar17 >> 1));
                    /* WARNING: Could not recover jumptable at 0x00011f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pvVar37 = (void *)(*(code *)(iVar20 + -0x10c))(iVar23 - uVar17);
          return pvVar37;
        }
      }
      bVar42 = (__n & 4) == 0;
      puVar22 = puVar21;
      if ((__n & 8) != 0) {
        uVar34 = *(undefined8 *)(puVar29 + -8);
        puVar22 = puVar21 + -2;
        puVar29 = puVar29 + -8;
        *puVar22 = (int)((ulonglong)uVar34 >> 0x20);
        puVar21[-1] = (int)uVar34;
      }
LAB_00011e2c:
      if (!bVar42) {
        puVar21 = (undefined4 *)(puVar29 + -4);
        puVar29 = puVar29 + -4;
        puVar22[-1] = *puVar21;
        puVar22 = puVar22 + -1;
      }
      if ((__n & 2) != 0) {
        puVar28 = (undefined2 *)(puVar29 + -2);
        puVar29 = puVar29 + -2;
        *(undefined2 *)((int)puVar22 + -2) = *puVar28;
        puVar22 = (undefined4 *)((int)puVar22 + -2);
      }
      if ((__n & 1) != 0) {
        *(undefined *)((int)puVar22 + -1) = puVar29[-1];
      }
      return __dest;
    }
  }
  else {
    bVar42 = ((uint)pvVar37 & 3) == 0;
  }
  uVar7 = (undefined4)uVar13;
  uVar18 = (uint)pvVar37 & 3;
  uVar17 = (uint)(uVar13 >> 0x20);
  if (!bVar42) {
    if (uVar17 < 7) goto LAB_0001316c;
    if (uVar17 < 0x100) {
      puVar27 = (uint *)__dest;
      if (((uint)__dest & 3) != 0) {
        puVar24 = (uint *)__dest;
        puVar29 = (undefined *)__src;
        if (((uint)__dest & 1) != 0) {
          uVar3 = *(undefined *)__src;
          __src = (void *)((int)__src + 1);
          *(undefined *)__dest = uVar3;
          uVar17 = uVar17 - 1;
          uVar13 = (ulonglong)uVar17 << 0x20;
          puVar27 = (uint *)((int)__dest + 1);
          puVar24 = puVar27;
          puVar29 = (undefined *)__src;
          if (((uint)__dest & 2) != 0) goto LAB_00012618;
        }
        __src = puVar29 + 2;
        *(undefined *)puVar24 = *puVar29;
        uVar13 = (ulonglong)(uVar17 - 2) << 0x20;
        puVar27 = (uint *)((int)puVar24 + 2);
        *(undefined *)((int)puVar24 + 1) = puVar29[1];
      }
LAB_00012618:
      uVar40 = (uint)(uVar13 >> 0x20);
      uVar5 = CONCAT44(__src,uVar40) & 0x30000000c;
      puVar25 = (undefined8 *)((uint)__src & 0xfffffffc);
      uVar18 = (uint)uVar5;
      iVar20 = (int)(uVar5 >> 0x20);
      uVar17 = iVar20 * 8;
      sVar15 = (sbyte)uVar17;
      lVar12 = (ulonglong)uVar17 << 0x20;
      uVar8 = iVar20 * -8 + 0x20;
      bVar19 = (byte)uVar8;
      if (uVar18 == 4) {
        uVar38 = *(uint *)puVar25;
        uVar18 = *(uint *)((int)puVar25 + 4);
        puVar25 = puVar25 + 1;
        if (7 < uVar40) {
          uVar13 = uVar13 & 0xffffffff00000000 | (ulonglong)*(uint *)puVar25;
          uVar40 = (uVar40 >> 2) - 1;
          goto LAB_000126ac;
        }
      }
      else {
        if (uVar18 < 8) {
          uVar18 = *(uint *)puVar25;
          puVar27 = puVar27 + -1;
          uVar5 = uVar13 & 0xffffffff00000000;
          uVar13 = uVar5 | *(uint *)((int)puVar25 + 4);
          uVar40 = (uint)(uVar5 >> 0x22);
          puVar25 = (undefined8 *)((int)puVar25 + 4);
          goto LAB_000126bc;
        }
        if (uVar18 == 8) {
          puVar27 = puVar27 + -3;
          uVar34 = *puVar25;
          uVar40 = (uVar40 >> 2) + 2;
          puVar25 = (undefined8 *)((int)puVar25 + -4);
          goto LAB_000126e4;
        }
        uVar13 = uVar13 & 0xffffffff00000000 | (ulonglong)*(uint *)puVar25;
        puVar27 = puVar27 + -2;
        uVar38 = *(uint *)((int)puVar25 + 4);
        uVar40 = (uVar40 >> 2) + 1;
        while( true ) {
          uVar34 = CONCAT44(uVar38,*(undefined4 *)(puVar25 + 1));
          uVar17 = (uint)((ulonglong)lVar12 >> 0x20);
          puVar27[2] = (int)uVar13 << (sbyte)((ulonglong)lVar12 >> 0x20) | uVar38 >> (bVar19 & 0x1f)
          ;
LAB_000126e4:
          uVar18 = *(uint *)((int)puVar25 + 0xc);
          sVar15 = (sbyte)uVar17;
          uVar38 = (uint)uVar34;
          uVar40 = uVar40 - 4;
          puVar25 = puVar25 + 2;
          puVar27[3] = (int)((ulonglong)uVar34 >> 0x20) << sVar15 | uVar38 >> (bVar19 & 0x1f);
          puVar27 = puVar27 + 4;
          if (uVar40 == 0) break;
          uVar13 = uVar13 & 0xffffffff00000000 | (ulonglong)*(uint *)puVar25;
LAB_000126ac:
          *puVar27 = uVar38 << (sbyte)uVar17 | uVar18 >> (bVar19 & 0x1f);
LAB_000126bc:
          uVar38 = *(uint *)((int)puVar25 + 4);
          uVar16 = (uint)uVar13 >> (bVar19 & 0x1f);
          lVar12 = CONCAT44(uVar17,uVar16);
          puVar27[1] = uVar18 << (sbyte)uVar17 | uVar16;
        }
      }
      puVar25 = (undefined8 *)((int)puVar25 - (uVar8 >> 3));
      *puVar27 = uVar38 << sVar15 | uVar18 >> (bVar19 & 0x1f);
      puVar24 = puVar27;
      puVar26 = puVar25;
      if ((uVar13 & 0x200000000) != 0) {
        puVar26 = (undefined8 *)((int)puVar25 + 2);
        *(undefined *)(puVar27 + 1) = *(undefined *)puVar25;
        puVar24 = (uint *)((int)puVar27 + 2);
        *(undefined *)((int)puVar27 + 5) = *(undefined *)((int)puVar25 + 1);
      }
      if ((uVar13 & 0x100000000) != 0) {
        *(undefined *)(puVar24 + 1) = *(undefined *)puVar26;
      }
      return __dest;
    }
    puVar28 = (undefined2 *)__dest;
    if (((uint)__src & 3) != 0) {
      uVar8 = (uint)__src & 2;
      if (((uint)__src & 1) != 0) {
        uVar3 = *(undefined *)__src;
        __src = (void *)((int)__src + 1);
        *(undefined *)__dest = uVar3;
        uVar17 = uVar17 - 1;
        puVar28 = (undefined2 *)((int)__dest + 1);
        __dest = puVar28;
        if (uVar8 != 0) goto LAB_000127a8;
      }
      uVar1 = *(ushort *)__src;
      __src = (void *)((int)__src + 2);
      uVar17 = uVar17 - 2;
      *(char *)__dest = (char)((uint)uVar1 >> 8);
      puVar28 = (undefined2 *)__dest + 1;
      *(undefined *)((int)__dest + 1) = (char)uVar1;
    }
LAB_000127a8:
    if (((uint)__src & 4) == 0) {
      iVar20 = *(int *)__src;
      *(char *)puVar28 = (char)((uint)iVar20 >> 0x18);
      *(undefined *)((int)puVar28 + 1) = (char)((uint)iVar20 >> 0x10);
      *(char *)(puVar28 + 1) = (char)((uint)iVar20 >> 8);
      uVar17 = uVar17 - 4;
      *(undefined *)((int)puVar28 + 3) = (char)iVar20;
      __src = (int *)__src + 1;
      puVar28 = puVar28 + 2;
    }
    if (uVar18 == 1) {
      iVar20 = *(int *)__src;
      uVar40 = uVar17 - 4;
      *(char *)puVar28 = (char)((uint)iVar20 >> 0x18);
      uVar8 = iVar20 << 0x18;
      *(undefined2 *)((int)puVar28 + 1) = (short)((uint)iVar20 >> 8);
      __src = (int *)__src + 1;
      uVar17 = uVar40 & 0xffffffc0;
      if (((uint)puVar28 & 7) == 5) {
        do {
          uVar18 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
          uVar38 = (uint)*(undefined8 *)__src;
          uVar16 = (uint)((ulonglong)((undefined8 *)__src)[1] >> 0x20);
          uVar10 = (uint)((undefined8 *)__src)[1];
          *(undefined8 *)((int)puVar28 + 3) =
               CONCAT44(uVar18 >> 8 | uVar8,uVar38 >> 8 | uVar18 << 0x18);
          *(undefined8 *)((int)puVar28 + 0xb) =
               CONCAT44(uVar16 >> 8 | uVar38 << 0x18,uVar10 >> 8 | uVar16 << 0x18);
          uVar18 = (uint)((ulonglong)((undefined8 *)__src)[2] >> 0x20);
          uVar8 = (uint)((undefined8 *)__src)[2];
          uVar38 = (uint)((ulonglong)((undefined8 *)__src)[3] >> 0x20);
          uVar16 = (uint)((undefined8 *)__src)[3];
          *(undefined8 *)((int)puVar28 + 0x13) =
               CONCAT44(uVar18 >> 8 | uVar10 << 0x18,uVar8 >> 8 | uVar18 << 0x18);
          *(undefined8 *)((int)puVar28 + 0x1b) =
               CONCAT44(uVar38 >> 8 | uVar8 << 0x18,uVar16 >> 8 | uVar38 << 0x18);
          uVar18 = (uint)((ulonglong)((undefined8 *)__src)[4] >> 0x20);
          uVar8 = (uint)((undefined8 *)__src)[4];
          uVar38 = (uint)((ulonglong)((undefined8 *)__src)[5] >> 0x20);
          uVar41 = (uint)((undefined8 *)__src)[5];
          *(undefined8 *)((int)puVar28 + 0x23) =
               CONCAT44(uVar18 >> 8 | uVar16 << 0x18,uVar8 >> 8 | uVar18 << 0x18);
          *(undefined8 *)((int)puVar28 + 0x2b) =
               CONCAT44(uVar38 >> 8 | uVar8 << 0x18,uVar41 >> 8 | uVar38 << 0x18);
          uVar13 = ((undefined8 *)__src)[7];
          uVar38 = (uint)((ulonglong)((undefined8 *)__src)[6] >> 0x20);
          uVar16 = (uint)((undefined8 *)__src)[6];
          uVar10 = (uint)(uVar13 >> 0x20);
          uVar18 = (uint)uVar13 >> 8;
          uVar8 = (int)(uVar13 & 0xffffffff) << 0x18;
          *(undefined8 *)((int)puVar28 + 0x33) =
               CONCAT44(uVar38 >> 8 | uVar41 << 0x18,uVar16 >> 8 | uVar38 << 0x18);
          *(undefined8 *)((int)puVar28 + 0x3b) =
               CONCAT44(uVar10 >> 8 | uVar16 << 0x18,uVar18 | uVar10 << 0x18);
          uVar17 = uVar17 - 0x40;
          __src = (undefined8 *)__src + 8;
          puVar28 = puVar28 + 0x20;
        } while (uVar17 != 0);
        uVar5 = CONCAT44(uVar40,uVar40) & 0xffffffff00000030;
        uVar17 = (uint)(uVar5 >> 0x20);
        if ((uVar40 & 0x30) == 0) {
          uVar3 = (undefined)(uVar13 & 0xffffffff);
        }
        else {
          do {
            uVar14 = ((undefined8 *)__src)[1];
            uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
            uVar38 = (uint)*(undefined8 *)__src;
            uVar40 = uVar17 >> 8 | uVar8;
            uVar16 = (uint)(uVar14 >> 0x20);
            uVar18 = (uint)uVar14 >> 8;
            uVar8 = (int)(uVar14 & 0xffffffff) << 0x18;
            *(undefined8 *)((int)puVar28 + 3) = CONCAT44(uVar40,uVar38 >> 8 | uVar17 << 0x18);
            *(undefined8 *)((int)puVar28 + 0xb) =
                 CONCAT44(uVar16 >> 8 | uVar38 << 0x18,uVar18 | uVar16 << 0x18);
            uVar40 = (int)uVar5 - 0x10;
            uVar13 = uVar5 & 0xffffffff00000000;
            uVar5 = uVar13 | uVar40;
            uVar17 = (uint)(uVar13 >> 0x20);
            __src = (undefined8 *)__src + 2;
            puVar28 = puVar28 + 8;
          } while (uVar40 != 0);
          uVar3 = (undefined)(uVar14 & 0xffffffff);
        }
        *(undefined *)((int)puVar28 + 3) = uVar3;
        __dest = puVar28 + 2;
      }
      else {
        uVar13 = (ulonglong)*(uint *)((int)puVar28 + -1) << 0x20;
        __dest = puVar28 + 2;
        do {
          uVar18 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
          uVar38 = (uint)*(undefined8 *)__src;
          uVar16 = (uint)((ulonglong)((undefined8 *)__src)[1] >> 0x20);
          uVar10 = (uint)((undefined8 *)__src)[1];
          *(ulonglong *)((int)__dest + -5) =
               uVar13 & 0xffffffff00000000 | (ulonglong)(uVar18 >> 8 | uVar8);
          *(undefined8 *)((int)__dest + 3) =
               CONCAT44(uVar38 >> 8 | uVar18 << 0x18,uVar16 >> 8 | uVar38 << 0x18);
          uVar18 = (uint)((ulonglong)((undefined8 *)__src)[2] >> 0x20);
          uVar8 = (uint)((undefined8 *)__src)[2];
          uVar38 = (uint)((ulonglong)((undefined8 *)__src)[3] >> 0x20);
          uVar41 = (uint)((undefined8 *)__src)[3];
          *(undefined8 *)((int)__dest + 0xb) =
               CONCAT44(uVar10 >> 8 | uVar16 << 0x18,uVar18 >> 8 | uVar10 << 0x18);
          *(undefined8 *)((int)__dest + 0x13) =
               CONCAT44(uVar8 >> 8 | uVar18 << 0x18,uVar38 >> 8 | uVar8 << 0x18);
          uVar18 = (uint)((ulonglong)((undefined8 *)__src)[4] >> 0x20);
          uVar8 = (uint)((undefined8 *)__src)[4];
          uVar16 = (uint)((ulonglong)((undefined8 *)__src)[5] >> 0x20);
          uVar10 = (uint)((undefined8 *)__src)[5];
          *(undefined8 *)((int)__dest + 0x1b) =
               CONCAT44(uVar41 >> 8 | uVar38 << 0x18,uVar18 >> 8 | uVar41 << 0x18);
          *(undefined8 *)((int)__dest + 0x23) =
               CONCAT44(uVar8 >> 8 | uVar18 << 0x18,uVar16 >> 8 | uVar8 << 0x18);
          uVar34 = ((undefined8 *)__src)[7];
          uVar18 = (uint)((ulonglong)((undefined8 *)__src)[6] >> 0x20);
          uVar8 = (uint)((undefined8 *)__src)[6];
          uVar41 = uVar18 >> 8 | uVar10 << 0x18;
          uVar38 = (uint)((ulonglong)uVar34 >> 0x20);
          *(undefined8 *)((int)__dest + 0x2b) = CONCAT44(uVar10 >> 8 | uVar16 << 0x18,uVar41);
          *(undefined8 *)((int)__dest + 0x33) =
               CONCAT44(uVar8 >> 8 | uVar18 << 0x18,uVar38 >> 8 | uVar8 << 0x18);
          uVar8 = (uint)uVar34 << 0x18;
          uVar13 = CONCAT44((uint)uVar34 >> 8 | uVar38 << 0x18,uVar41);
          uVar17 = uVar17 - 0x40;
          __src = (undefined8 *)__src + 8;
          __dest = (undefined2 *)__dest + 0x20;
        } while (uVar17 != 0);
        uVar5 = CONCAT44(uVar40,uVar40) & 0xffffffff00000030;
        uVar17 = (uint)(uVar5 >> 0x20);
        if ((uVar40 & 0x30) == 0) {
          uVar3 = (undefined)uVar34;
        }
        else {
          do {
            uVar34 = ((undefined8 *)__src)[1];
            uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
            uVar18 = (uint)*(undefined8 *)__src;
            uVar38 = uVar17 >> 8 | uVar8;
            uVar40 = (uint)((ulonglong)uVar34 >> 0x20);
            *(ulonglong *)((int)__dest + -5) = uVar13 & 0xffffffff00000000 | (ulonglong)uVar38;
            *(undefined8 *)((int)__dest + 3) =
                 CONCAT44(uVar18 >> 8 | uVar17 << 0x18,uVar40 >> 8 | uVar18 << 0x18);
            uVar8 = (uint)uVar34 << 0x18;
            uVar13 = CONCAT44((uint)uVar34 >> 8 | uVar40 << 0x18,uVar38);
            uVar18 = (int)uVar5 - 0x10;
            uVar14 = uVar5 & 0xffffffff00000000;
            uVar5 = uVar14 | uVar18;
            uVar17 = (uint)(uVar14 >> 0x20);
            __src = (undefined8 *)__src + 2;
            __dest = (undefined2 *)__dest + 8;
          } while (uVar18 != 0);
          uVar3 = (undefined)uVar34;
        }
        uVar18 = (uint)uVar13;
        *(undefined4 *)((int)__dest + -5) = (int)(uVar13 >> 0x20);
        *(undefined *)((int)__dest + -1) = uVar3;
      }
    }
    else {
      uVar13 = (ulonglong)(uVar17 - 4);
      if (uVar18 == 2) {
        iVar20 = *(int *)__src;
        __src = (int *)__src + 1;
        *puVar28 = (short)((uint)iVar20 >> 0x10);
        uVar8 = iVar20 << 0x10;
        __dest = puVar28 + 2;
        uVar13 = uVar13 << 0x20 | uVar13 & 0xffffffffffffffc0;
        if (((uint)puVar28 & 7) == 6) {
          do {
            uVar35 = uVar13;
            uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
            uVar18 = (uint)*(undefined8 *)__src;
            uVar40 = (uint)((ulonglong)((undefined8 *)__src)[1] >> 0x20);
            uVar38 = (uint)((undefined8 *)__src)[1];
            *(ulonglong *)((undefined2 *)__dest + -1) =
                 CONCAT44(uVar17 >> 0x10 | uVar8,uVar18 >> 0x10 | uVar17 << 0x10);
            *(ulonglong *)((undefined2 *)__dest + 3) =
                 CONCAT44(uVar40 >> 0x10 | uVar18 << 0x10,uVar38 >> 0x10 | uVar40 << 0x10);
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[2] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[2];
            uVar8 = (uint)((ulonglong)((undefined8 *)__src)[3] >> 0x20);
            uVar40 = (uint)((undefined8 *)__src)[3];
            *(ulonglong *)((undefined2 *)__dest + 7) =
                 CONCAT44(uVar17 >> 0x10 | uVar38 << 0x10,uVar18 >> 0x10 | uVar17 << 0x10);
            *(ulonglong *)((undefined2 *)__dest + 0xb) =
                 CONCAT44(uVar8 >> 0x10 | uVar18 << 0x10,uVar40 >> 0x10 | uVar8 << 0x10);
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[4] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[4];
            uVar8 = (uint)((ulonglong)((undefined8 *)__src)[5] >> 0x20);
            uVar16 = (uint)((undefined8 *)__src)[5];
            *(ulonglong *)((undefined2 *)__dest + 0xf) =
                 CONCAT44(uVar17 >> 0x10 | uVar40 << 0x10,uVar18 >> 0x10 | uVar17 << 0x10);
            *(ulonglong *)((undefined2 *)__dest + 0x13) =
                 CONCAT44(uVar8 >> 0x10 | uVar18 << 0x10,uVar16 >> 0x10 | uVar8 << 0x10);
            uVar14 = ((undefined8 *)__src)[7];
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[6] >> 0x20);
            uVar40 = (uint)((undefined8 *)__src)[6];
            uVar38 = (uint)(uVar14 >> 0x20);
            uVar18 = (uint)uVar14 >> 0x10;
            uVar8 = (int)(uVar14 & 0xffffffff) << 0x10;
            *(ulonglong *)((undefined2 *)__dest + 0x17) =
                 CONCAT44(uVar17 >> 0x10 | uVar16 << 0x10,uVar40 >> 0x10 | uVar17 << 0x10);
            *(ulonglong *)((undefined2 *)__dest + 0x1b) =
                 CONCAT44(uVar38 >> 0x10 | uVar40 << 0x10,uVar18 | uVar38 << 0x10);
            uVar17 = (int)uVar35 - 0x40;
            uVar5 = uVar35 & 0xffffffff00000000;
            __src = (undefined8 *)__src + 8;
            __dest = (undefined2 *)__dest + 0x20;
            uVar13 = uVar5 | uVar17;
          } while (uVar17 != 0);
          uVar13 = uVar5 | uVar35 >> 0x20 & 0x30;
          uVar17 = (uint)(uVar5 >> 0x20);
          if ((uVar35 & 0x3000000000) == 0) {
            uVar6 = (undefined2)(uVar14 & 0xffffffff);
          }
          else {
            do {
              uVar14 = ((undefined8 *)__src)[1];
              uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
              uVar38 = (uint)*(undefined8 *)__src;
              uVar40 = uVar17 >> 0x10 | uVar8;
              uVar16 = (uint)(uVar14 >> 0x20);
              uVar18 = (uint)uVar14 >> 0x10;
              uVar8 = (int)(uVar14 & 0xffffffff) << 0x10;
              *(ulonglong *)((undefined2 *)__dest + -1) =
                   CONCAT44(uVar40,uVar38 >> 0x10 | uVar17 << 0x10);
              *(ulonglong *)((undefined2 *)__dest + 3) =
                   CONCAT44(uVar16 >> 0x10 | uVar38 << 0x10,uVar18 | uVar16 << 0x10);
              uVar40 = (int)uVar13 - 0x10;
              uVar5 = uVar13 & 0xffffffff00000000;
              uVar13 = uVar5 | uVar40;
              uVar17 = (uint)(uVar5 >> 0x20);
              __src = (undefined8 *)__src + 2;
              __dest = (undefined2 *)__dest + 8;
            } while (uVar40 != 0);
            uVar6 = (undefined2)(uVar14 & 0xffffffff);
          }
          ((undefined2 *)__dest)[-1] = uVar6;
        }
        else {
          uVar5 = (ulonglong)*(uint *)(puVar28 + -1) << 0x20;
          do {
            uVar35 = uVar13;
            uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
            uVar18 = (uint)*(undefined8 *)__src;
            uVar40 = (uint)((ulonglong)((undefined8 *)__src)[1] >> 0x20);
            uVar38 = (uint)((undefined8 *)__src)[1];
            *(ulonglong *)((undefined2 *)__dest + -3) =
                 uVar5 & 0xffffffff00000000 | (ulonglong)(uVar17 >> 0x10 | uVar8);
            *(ulonglong *)((undefined2 *)__dest + 1) =
                 CONCAT44(uVar18 >> 0x10 | uVar17 << 0x10,uVar40 >> 0x10 | uVar18 << 0x10);
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[2] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[2];
            uVar8 = (uint)((ulonglong)((undefined8 *)__src)[3] >> 0x20);
            uVar16 = (uint)((undefined8 *)__src)[3];
            *(ulonglong *)((undefined2 *)__dest + 5) =
                 CONCAT44(uVar38 >> 0x10 | uVar40 << 0x10,uVar17 >> 0x10 | uVar38 << 0x10);
            *(ulonglong *)((undefined2 *)__dest + 9) =
                 CONCAT44(uVar18 >> 0x10 | uVar17 << 0x10,uVar8 >> 0x10 | uVar18 << 0x10);
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[4] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[4];
            uVar40 = (uint)((ulonglong)((undefined8 *)__src)[5] >> 0x20);
            uVar10 = (uint)((undefined8 *)__src)[5];
            *(ulonglong *)((undefined2 *)__dest + 0xd) =
                 CONCAT44(uVar16 >> 0x10 | uVar8 << 0x10,uVar17 >> 0x10 | uVar16 << 0x10);
            *(ulonglong *)((undefined2 *)__dest + 0x11) =
                 CONCAT44(uVar18 >> 0x10 | uVar17 << 0x10,uVar40 >> 0x10 | uVar18 << 0x10);
            uVar34 = ((undefined8 *)__src)[7];
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[6] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[6];
            uVar16 = uVar17 >> 0x10 | uVar10 << 0x10;
            uVar38 = (uint)((ulonglong)uVar34 >> 0x20);
            *(ulonglong *)((undefined2 *)__dest + 0x15) =
                 CONCAT44(uVar10 >> 0x10 | uVar40 << 0x10,uVar16);
            *(ulonglong *)((undefined2 *)__dest + 0x19) =
                 CONCAT44(uVar18 >> 0x10 | uVar17 << 0x10,uVar38 >> 0x10 | uVar18 << 0x10);
            uVar8 = (uint)uVar34 << 0x10;
            uVar5 = CONCAT44((uint)uVar34 >> 0x10 | uVar38 << 0x10,uVar16);
            uVar17 = (int)uVar35 - 0x40;
            uVar14 = uVar35 & 0xffffffff00000000;
            __src = (undefined8 *)__src + 8;
            __dest = (undefined2 *)__dest + 0x20;
            uVar13 = uVar14 | uVar17;
          } while (uVar17 != 0);
          uVar13 = uVar14 | uVar35 >> 0x20 & 0x30;
          uVar17 = (uint)(uVar14 >> 0x20);
          if ((uVar35 & 0x3000000000) == 0) {
            uVar6 = (undefined2)uVar34;
          }
          else {
            do {
              uVar34 = ((undefined8 *)__src)[1];
              uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
              uVar18 = (uint)*(undefined8 *)__src;
              uVar38 = uVar17 >> 0x10 | uVar8;
              uVar40 = (uint)((ulonglong)uVar34 >> 0x20);
              *(ulonglong *)((undefined2 *)__dest + -3) =
                   uVar5 & 0xffffffff00000000 | (ulonglong)uVar38;
              *(ulonglong *)((undefined2 *)__dest + 1) =
                   CONCAT44(uVar18 >> 0x10 | uVar17 << 0x10,uVar40 >> 0x10 | uVar18 << 0x10);
              uVar8 = (uint)uVar34 << 0x10;
              uVar5 = CONCAT44((uint)uVar34 >> 0x10 | uVar40 << 0x10,uVar38);
              uVar18 = (int)uVar13 - 0x10;
              uVar14 = uVar13 & 0xffffffff00000000;
              uVar13 = uVar14 | uVar18;
              uVar17 = (uint)(uVar14 >> 0x20);
              __src = (undefined8 *)__src + 2;
              __dest = (undefined2 *)__dest + 8;
            } while (uVar18 != 0);
            uVar6 = (undefined2)uVar34;
          }
          uVar18 = (uint)uVar5;
          *(int *)((undefined2 *)__dest + -3) = (int)(uVar5 >> 0x20);
          ((undefined2 *)__dest)[-1] = uVar6;
        }
      }
      else {
        iVar20 = *(int *)__src;
        __src = (int *)__src + 1;
        *(char *)puVar28 = (char)((uint)iVar20 >> 0x18);
        uVar8 = iVar20 << 8;
        __dest = puVar28 + 2;
        uVar13 = uVar13 << 0x20 | uVar13 & 0xffffffffffffffc0;
        if (((uint)puVar28 & 7) == 7) {
          do {
            uVar14 = uVar13;
            uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
            uVar18 = (uint)*(undefined8 *)__src;
            uVar40 = (uint)((ulonglong)((undefined8 *)__src)[1] >> 0x20);
            uVar38 = (uint)((undefined8 *)__src)[1];
            *(undefined8 *)((int)__dest + -3) =
                 CONCAT44(uVar17 >> 0x18 | uVar8,uVar18 >> 0x18 | uVar17 << 8);
            *(undefined8 *)((int)__dest + 5) =
                 CONCAT44(uVar40 >> 0x18 | uVar18 << 8,uVar38 >> 0x18 | uVar40 << 8);
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[2] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[2];
            uVar8 = (uint)((ulonglong)((undefined8 *)__src)[3] >> 0x20);
            uVar40 = (uint)((undefined8 *)__src)[3];
            *(undefined8 *)((int)__dest + 0xd) =
                 CONCAT44(uVar17 >> 0x18 | uVar38 << 8,uVar18 >> 0x18 | uVar17 << 8);
            *(undefined8 *)((int)__dest + 0x15) =
                 CONCAT44(uVar8 >> 0x18 | uVar18 << 8,uVar40 >> 0x18 | uVar8 << 8);
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[4] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[4];
            uVar8 = (uint)((ulonglong)((undefined8 *)__src)[5] >> 0x20);
            uVar16 = (uint)((undefined8 *)__src)[5];
            *(undefined8 *)((int)__dest + 0x1d) =
                 CONCAT44(uVar17 >> 0x18 | uVar40 << 8,uVar18 >> 0x18 | uVar17 << 8);
            *(undefined8 *)((int)__dest + 0x25) =
                 CONCAT44(uVar8 >> 0x18 | uVar18 << 8,uVar16 >> 0x18 | uVar8 << 8);
            uVar34 = ((undefined8 *)__src)[7];
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[6] >> 0x20);
            uVar40 = (uint)((undefined8 *)__src)[6];
            uVar38 = (uint)((ulonglong)uVar34 >> 0x20);
            uVar18 = (uint)uVar34 >> 0x18;
            uVar8 = (uint)uVar34 << 8;
            uVar3 = (undefined)uVar34;
            *(undefined8 *)((int)__dest + 0x2d) =
                 CONCAT44(uVar17 >> 0x18 | uVar16 << 8,uVar40 >> 0x18 | uVar17 << 8);
            *(undefined8 *)((int)__dest + 0x35) =
                 CONCAT44(uVar38 >> 0x18 | uVar40 << 8,uVar18 | uVar38 << 8);
            uVar17 = (int)uVar14 - 0x40;
            uVar5 = uVar14 & 0xffffffff00000000;
            __src = (undefined8 *)__src + 8;
            __dest = (undefined2 *)__dest + 0x20;
            uVar13 = uVar5 | uVar17;
          } while (uVar17 != 0);
          uVar13 = uVar5 | uVar14 >> 0x20 & 0x30;
          uVar17 = (uint)(uVar5 >> 0x20);
          if ((uVar14 & 0x3000000000) == 0) {
            uVar6 = (undefined2)(uVar8 >> 0x10);
          }
          else {
            do {
              uVar34 = ((undefined8 *)__src)[1];
              uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
              uVar38 = (uint)*(undefined8 *)__src;
              uVar40 = uVar17 >> 0x18 | uVar8;
              uVar16 = (uint)((ulonglong)uVar34 >> 0x20);
              uVar18 = (uint)uVar34 >> 0x18;
              uVar8 = (uint)uVar34 << 8;
              uVar3 = (undefined)uVar34;
              *(undefined8 *)((int)__dest + -3) = CONCAT44(uVar40,uVar38 >> 0x18 | uVar17 << 8);
              *(undefined8 *)((int)__dest + 5) =
                   CONCAT44(uVar16 >> 0x18 | uVar38 << 8,uVar18 | uVar16 << 8);
              uVar40 = (int)uVar13 - 0x10;
              uVar5 = uVar13 & 0xffffffff00000000;
              uVar13 = uVar5 | uVar40;
              uVar17 = (uint)(uVar5 >> 0x20);
              __src = (undefined8 *)__src + 2;
              __dest = (undefined2 *)__dest + 8;
            } while (uVar40 != 0);
            uVar6 = (undefined2)(uVar8 >> 0x10);
          }
          *(undefined2 *)((int)__dest + -3) = uVar6;
          *(undefined *)((int)__dest + -1) = uVar3;
        }
        else {
          uVar5 = (ulonglong)*(uint *)((int)puVar28 + -3) << 0x20;
          do {
            uVar35 = uVar13;
            uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
            uVar18 = (uint)*(undefined8 *)__src;
            uVar40 = (uint)((ulonglong)((undefined8 *)__src)[1] >> 0x20);
            uVar38 = (uint)((undefined8 *)__src)[1];
            *(ulonglong *)((int)__dest + -7) =
                 uVar5 & 0xffffffff00000000 | (ulonglong)(uVar17 >> 0x18 | uVar8);
            *(undefined8 *)((int)__dest + 1) =
                 CONCAT44(uVar18 >> 0x18 | uVar17 << 8,uVar40 >> 0x18 | uVar18 << 8);
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[2] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[2];
            uVar8 = (uint)((ulonglong)((undefined8 *)__src)[3] >> 0x20);
            uVar16 = (uint)((undefined8 *)__src)[3];
            *(undefined8 *)((int)__dest + 9) =
                 CONCAT44(uVar38 >> 0x18 | uVar40 << 8,uVar17 >> 0x18 | uVar38 << 8);
            *(undefined8 *)((int)__dest + 0x11) =
                 CONCAT44(uVar18 >> 0x18 | uVar17 << 8,uVar8 >> 0x18 | uVar18 << 8);
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[4] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[4];
            uVar40 = (uint)((ulonglong)((undefined8 *)__src)[5] >> 0x20);
            uVar10 = (uint)((undefined8 *)__src)[5];
            *(undefined8 *)((int)__dest + 0x19) =
                 CONCAT44(uVar16 >> 0x18 | uVar8 << 8,uVar17 >> 0x18 | uVar16 << 8);
            *(undefined8 *)((int)__dest + 0x21) =
                 CONCAT44(uVar18 >> 0x18 | uVar17 << 8,uVar40 >> 0x18 | uVar18 << 8);
            uVar34 = ((undefined8 *)__src)[7];
            uVar17 = (uint)((ulonglong)((undefined8 *)__src)[6] >> 0x20);
            uVar18 = (uint)((undefined8 *)__src)[6];
            uVar16 = uVar17 >> 0x18 | uVar10 << 8;
            uVar38 = (uint)((ulonglong)uVar34 >> 0x20);
            *(undefined8 *)((int)__dest + 0x29) = CONCAT44(uVar10 >> 0x18 | uVar40 << 8,uVar16);
            *(undefined8 *)((int)__dest + 0x31) =
                 CONCAT44(uVar18 >> 0x18 | uVar17 << 8,uVar38 >> 0x18 | uVar18 << 8);
            uVar8 = (uint)uVar34 << 8;
            uVar3 = (undefined)uVar34;
            uVar5 = CONCAT44((uint)uVar34 >> 0x18 | uVar38 << 8,uVar16);
            uVar17 = (int)uVar35 - 0x40;
            uVar14 = uVar35 & 0xffffffff00000000;
            __src = (undefined8 *)__src + 8;
            __dest = (undefined2 *)__dest + 0x20;
            uVar13 = uVar14 | uVar17;
          } while (uVar17 != 0);
          uVar13 = uVar14 | uVar35 >> 0x20 & 0x30;
          uVar17 = (uint)(uVar14 >> 0x20);
          if ((uVar35 & 0x3000000000) == 0) {
            uVar6 = (undefined2)(uVar8 >> 0x10);
          }
          else {
            do {
              uVar34 = ((undefined8 *)__src)[1];
              uVar17 = (uint)((ulonglong)*(undefined8 *)__src >> 0x20);
              uVar18 = (uint)*(undefined8 *)__src;
              uVar38 = uVar17 >> 0x18 | uVar8;
              uVar40 = (uint)((ulonglong)uVar34 >> 0x20);
              *(ulonglong *)((int)__dest + -7) = uVar5 & 0xffffffff00000000 | (ulonglong)uVar38;
              *(undefined8 *)((int)__dest + 1) =
                   CONCAT44(uVar18 >> 0x18 | uVar17 << 8,uVar40 >> 0x18 | uVar18 << 8);
              uVar8 = (uint)uVar34 << 8;
              uVar3 = (undefined)uVar34;
              uVar5 = CONCAT44((uint)uVar34 >> 0x18 | uVar40 << 8,uVar38);
              uVar18 = (int)uVar13 - 0x10;
              uVar14 = uVar13 & 0xffffffff00000000;
              uVar13 = uVar14 | uVar18;
              uVar17 = (uint)(uVar14 >> 0x20);
              __src = (undefined8 *)__src + 2;
              __dest = (undefined2 *)__dest + 8;
            } while (uVar18 != 0);
            uVar6 = (undefined2)(uVar8 >> 0x10);
          }
          uVar18 = (uint)uVar5;
          *(undefined4 *)((int)__dest + -7) = (int)(uVar5 >> 0x20);
          *(undefined2 *)((int)__dest + -3) = uVar6;
          *(undefined *)((int)__dest + -1) = uVar3;
        }
      }
    }
LAB_0001316c:
    uVar13 = CONCAT44(uVar17,uVar17) & 0xffffffff0000000e;
    iVar20 = (int)uVar13;
    FUN_00013248((int)__dest + iVar20,(int)__src + iVar20,(int)(uVar13 >> 0x20),iVar20,iVar20 << 3);
                    /* WARNING: Could not recover jumptable at 0x00013188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar37 = (void *)(*(code *)(uVar18 + 0x84))();
    return pvVar37;
  }
  bVar42 = ((uint)__src & 3) != 0;
  puVar25 = (undefined8 *)__dest;
  if (uVar17 < 0x10) {
    if (bVar42) goto LAB_0001316c;
    bVar42 = (uVar13 & 0x400000000) == 0;
    if ((uVar13 & 0x800000000) != 0) {
      uVar7 = *(undefined4 *)__src;
      uVar9 = *(undefined4 *)((int)__src + 4);
      __src = (void *)((int)__src + 8);
      *(undefined4 *)__dest = uVar7;
      *(undefined4 *)((int)__dest + 4) = uVar9;
      puVar25 = (undefined8 *)((int)__dest + 8);
    }
    goto LAB_000123f4;
  }
  uVar8 = (uint)__src & 4;
  uVar18 = uVar17;
  if (bVar42) {
    uVar8 = (uint)__src & 2;
    if (((uint)__src & 1) == 0) {
LAB_000121cc:
      uVar6 = *(undefined2 *)__src;
      __src = (void *)((int)__src + 2);
      *(undefined2 *)puVar25 = uVar6;
      uVar18 = uVar17 - 2;
      puVar25 = (undefined8 *)((int)puVar25 + 2);
    }
    else {
      uVar3 = *(undefined *)__src;
      __src = (void *)((int)__src + 1);
      *(undefined *)__dest = uVar3;
      uVar17 = uVar17 - 1;
      puVar25 = (undefined8 *)((int)__dest + 1);
      uVar18 = uVar17;
      if (uVar8 == 0) goto LAB_000121cc;
    }
    uVar8 = (uint)__src & 4;
  }
  uVar17 = uVar18;
  if (uVar8 != 0) {
    uVar17 = uVar18 - 4;
    *(undefined4 *)puVar25 = *(undefined4 *)__src;
    __src = (void *)((int)__src + 4);
    puVar25 = (undefined8 *)((int)puVar25 + 4);
  }
  uVar40 = (uint)pvVar37 & 3;
  uVar8 = uVar17 & 0xffffff80;
  if (uVar8 != 0) {
    uVar34 = *(undefined8 *)__src;
    if (((uint)puVar25 & 4) == 0) {
      while( true ) {
        uVar39 = ((undefined8 *)__src)[1];
        uVar4 = ((undefined8 *)__src)[2];
        uVar11 = ((undefined8 *)__src)[3];
        *puVar25 = uVar34;
        puVar25[1] = uVar39;
        puVar25[2] = uVar4;
        puVar25[3] = uVar11;
        uVar11 = ((undefined8 *)__src)[5];
        uVar34 = ((undefined8 *)__src)[6];
        uVar4 = ((undefined8 *)__src)[7];
        puVar25[4] = ((undefined8 *)__src)[4];
        puVar25[5] = uVar11;
        puVar25[6] = uVar34;
        puVar25[7] = uVar4;
        uVar11 = ((undefined8 *)__src)[9];
        uVar34 = ((undefined8 *)__src)[10];
        uVar4 = ((undefined8 *)__src)[0xb];
        puVar25[8] = ((undefined8 *)__src)[8];
        puVar25[9] = uVar11;
        puVar25[10] = uVar34;
        puVar25[0xb] = uVar4;
        uVar11 = ((undefined8 *)__src)[0xc];
        uVar39 = ((undefined8 *)__src)[0xd];
        iVar20 = (int)uVar39;
        uVar34 = ((undefined8 *)__src)[0xe];
        uVar4 = ((undefined8 *)__src)[0xf];
        puVar25[0xc] = uVar11;
        puVar25[0xd] = uVar39;
        puVar25[0xe] = uVar34;
        puVar25[0xf] = uVar4;
        uVar8 = uVar8 - 0x80;
        puVar32 = (undefined8 *)__src + 0x10;
        puVar26 = puVar25 + 0x10;
        if (uVar8 == 0) break;
        uVar34 = *puVar32;
        puVar25 = puVar26;
        __src = puVar32;
      }
      uVar18 = uVar17 & 0x70;
      if (uVar18 == 0) {
        if ((uVar17 & 8) != 0) {
          puVar26 = puVar25 + 0x11;
          puVar25[0x10] = *puVar32;
          puVar32 = (undefined8 *)__src + 0x11;
        }
        if ((uVar17 & 4) != 0) {
          uVar7 = *(undefined4 *)puVar32;
          puVar32 = (undefined8 *)((int)puVar32 + 4);
          *(undefined4 *)puVar26 = uVar7;
          puVar26 = (undefined8 *)((int)puVar26 + 4);
        }
        if ((uVar17 & 2) != 0) {
          uVar6 = *(undefined2 *)puVar32;
          puVar32 = (undefined8 *)((int)puVar32 + 2);
          *(undefined2 *)puVar26 = uVar6;
          puVar26 = (undefined8 *)((int)puVar26 + 2);
        }
        if ((uVar17 & 1) != 0) {
          *(undefined *)puVar26 = *(undefined *)puVar32;
        }
        return __dest;
      }
      iVar23 = FUN_00013250(puVar26,(int)puVar32 + uVar18,(int)((ulonglong)uVar11 >> 0x20),
                            (int)uVar11,(int)((ulonglong)uVar39 >> 0x20));
                    /* WARNING: Could not recover jumptable at 0x000124e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar37 = (void *)(*(code *)(iVar20 + 0x84))(iVar23 + uVar18);
      return pvVar37;
    }
    while( true ) {
      uVar39 = ((undefined8 *)__src)[1];
      uVar4 = ((undefined8 *)__src)[2];
      uVar11 = ((undefined8 *)__src)[3];
      *(int *)puVar25 = (int)((ulonglong)uVar34 >> 0x20);
      *(undefined4 *)((int)puVar25 + 4) = (int)uVar34;
      *(int *)(puVar25 + 1) = (int)((ulonglong)uVar39 >> 0x20);
      *(undefined4 *)((int)puVar25 + 0xc) = (int)uVar39;
      *(int *)(puVar25 + 2) = (int)((ulonglong)uVar4 >> 0x20);
      *(undefined4 *)((int)puVar25 + 0x14) = (int)uVar4;
      *(int *)(puVar25 + 3) = (int)((ulonglong)uVar11 >> 0x20);
      *(undefined4 *)((int)puVar25 + 0x1c) = (int)uVar11;
      uVar11 = ((undefined8 *)__src)[4];
      uVar39 = ((undefined8 *)__src)[5];
      uVar34 = ((undefined8 *)__src)[6];
      uVar4 = ((undefined8 *)__src)[7];
      *(int *)(puVar25 + 4) = (int)((ulonglong)uVar11 >> 0x20);
      *(undefined4 *)((int)puVar25 + 0x24) = (int)uVar11;
      *(int *)(puVar25 + 5) = (int)((ulonglong)uVar39 >> 0x20);
      *(undefined4 *)((int)puVar25 + 0x2c) = (int)uVar39;
      *(int *)(puVar25 + 6) = (int)((ulonglong)uVar34 >> 0x20);
      *(undefined4 *)((int)puVar25 + 0x34) = (int)uVar34;
      *(int *)(puVar25 + 7) = (int)((ulonglong)uVar4 >> 0x20);
      *(undefined4 *)((int)puVar25 + 0x3c) = (int)uVar4;
      uVar11 = ((undefined8 *)__src)[8];
      uVar39 = ((undefined8 *)__src)[9];
      uVar34 = ((undefined8 *)__src)[10];
      uVar4 = ((undefined8 *)__src)[0xb];
      *(int *)(puVar25 + 8) = (int)((ulonglong)uVar11 >> 0x20);
      *(undefined4 *)((int)puVar25 + 0x44) = (int)uVar11;
      *(int *)(puVar25 + 9) = (int)((ulonglong)uVar39 >> 0x20);
      *(undefined4 *)((int)puVar25 + 0x4c) = (int)uVar39;
      *(int *)(puVar25 + 10) = (int)((ulonglong)uVar34 >> 0x20);
      *(undefined4 *)((int)puVar25 + 0x54) = (int)uVar34;
      *(int *)(puVar25 + 0xb) = (int)((ulonglong)uVar4 >> 0x20);
      *(undefined4 *)((int)puVar25 + 0x5c) = (int)uVar4;
      uVar11 = ((undefined8 *)__src)[0xc];
      uVar39 = ((undefined8 *)__src)[0xd];
      uVar34 = ((undefined8 *)__src)[0xe];
      uVar4 = ((undefined8 *)__src)[0xf];
      uVar18 = (uint)((ulonglong)uVar11 >> 0x20);
      *(uint *)(puVar25 + 0xc) = uVar18;
      uVar7 = (undefined4)uVar11;
      *(undefined4 *)((int)puVar25 + 100) = uVar7;
      *(int *)(puVar25 + 0xd) = (int)((ulonglong)uVar39 >> 0x20);
      uVar40 = (uint)uVar39;
      *(uint *)((int)puVar25 + 0x6c) = uVar40;
      *(int *)(puVar25 + 0xe) = (int)((ulonglong)uVar34 >> 0x20);
      *(undefined4 *)((int)puVar25 + 0x74) = (int)uVar34;
      *(int *)(puVar25 + 0xf) = (int)((ulonglong)uVar4 >> 0x20);
      *(undefined4 *)((int)puVar25 + 0x7c) = (int)uVar4;
      uVar8 = uVar8 - 0x80;
      __src = (undefined8 *)__src + 0x10;
      puVar25 = puVar25 + 0x10;
      if (uVar8 == 0) break;
      uVar34 = *(undefined8 *)__src;
    }
  }
  uVar8 = uVar17 & 0x70;
  if (uVar8 != 0) {
    FUN_00013248((int)puVar25 + uVar8,(int)__src + uVar8,uVar18,uVar7,uVar8 + (uVar8 >> 1));
                    /* WARNING: Could not recover jumptable at 0x00012328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar37 = (void *)(*(code *)(uVar40 + 0xb8))();
    return pvVar37;
  }
  bVar42 = (uVar17 & 4) == 0;
  if ((uVar17 & 8) != 0) {
    uVar34 = *(undefined8 *)__src;
    *(int *)puVar25 = (int)((ulonglong)uVar34 >> 0x20);
    __src = (undefined8 *)__src + 1;
    *(undefined4 *)((int)puVar25 + 4) = (int)uVar34;
    puVar25 = puVar25 + 1;
  }
LAB_000123f4:
  if (!bVar42) {
    uVar7 = *(undefined4 *)__src;
    __src = (void *)((int)__src + 4);
    *(undefined4 *)puVar25 = uVar7;
    puVar25 = (undefined8 *)((int)puVar25 + 4);
  }
  if ((uVar17 & 2) != 0) {
    uVar6 = *(undefined2 *)__src;
    __src = (void *)((int)__src + 2);
    *(undefined2 *)puVar25 = uVar6;
    puVar25 = (undefined8 *)((int)puVar25 + 2);
  }
  if ((uVar17 & 1) != 0) {
    *(undefined *)puVar25 = *(undefined *)__src;
  }
  return __dest;
}


void FUN_00013248(void)

{
  return;
}


void FUN_00013250(void)

{
  return;
}


/* WARNING: Instruction at (ram,0x000132b8) overlaps instruction at (ram,0x000132b4)
    */
/* WARNING: Removing unreachable block (ram,0x00013338) */

void bzero(void *__s,size_t __n)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_o4;
  
  if (__n < 8) {
    if (__n != 0) {
      *(undefined *)__s = 0;
      if (__n != 1) {
        *(undefined *)((int)__s + 1) = 0;
        if (__n != 2) {
          *(undefined *)((int)__s + 2) = 0;
          if (__n != 3) {
            *(undefined *)((int)__s + 3) = 0;
            if (__n != 4) {
              *(undefined *)((int)__s + 4) = 0;
              if ((__n != 5) && (*(undefined *)((int)__s + 5) = 0, __n != 6)) {
                *(undefined *)((int)__s + 6) = 0;
              }
            }
          }
        }
      }
    }
    return;
  }
  uVar3 = (uint)__s & 3;
  uVar1 = (uint)__s & 4;
  if (uVar3 != 0) {
    *(undefined *)__s = 0;
    if ((uVar3 != 3) && (*(undefined *)((int)__s + 1) = 0, uVar3 != 2)) {
      *(undefined *)((int)__s + 2) = 0;
    }
    __n = __n + (uVar3 - 4);
    __s = (void *)((int)__s - (uVar3 - 4));
    uVar1 = (uint)__s & 4;
  }
  if (uVar1 != 0) {
    *(undefined4 *)__s = 0;
    __n = __n - 4;
    __s = (void *)((int)__s + 4);
  }
  uVar1 = __n & 0xffffff80;
  uVar3 = __n & 0x78;
  while (uVar1 != 0) {
    *(undefined8 *)__s = 0;
    ((undefined8 *)__s)[1] = 0;
    ((undefined8 *)__s)[2] = 0;
    ((undefined8 *)__s)[3] = 0;
    ((undefined8 *)__s)[4] = 0;
    ((undefined8 *)__s)[5] = 0;
    ((undefined8 *)__s)[6] = 0;
    ((undefined8 *)__s)[7] = 0;
    uVar1 = uVar1 - 0x80;
    ((undefined8 *)__s)[8] = 0;
    ((undefined8 *)__s)[9] = 0;
    ((undefined8 *)__s)[10] = 0;
    ((undefined8 *)__s)[0xb] = 0;
    ((undefined8 *)__s)[0xc] = 0;
    ((undefined8 *)__s)[0xd] = 0;
    ((undefined8 *)__s)[0xe] = 0;
    ((undefined8 *)__s)[0xf] = 0;
    __s = (undefined8 *)__s + 0x10;
  }
  if (uVar3 == 0) {
    if ((__n & 7) != 0) {
      if ((__n & 4) != 0) {
        *(undefined4 *)__s = 0;
        __s = (void *)((int)__s + 4);
      }
      if ((__n & 2) != 0) {
        *(undefined2 *)__s = 0;
        __s = (void *)((int)__s + 2);
      }
      if ((__n & 1) != 0) {
        *(undefined *)__s = 0;
      }
    }
    return;
  }
  iVar2 = FUN_0001334c();
                    /* WARNING: Could not recover jumptable at 0x00013344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_o4 + 0x5c))(iVar2 + uVar3);
  return;
}


/* WARNING: Instruction at (ram,0x000132b8) overlaps instruction at (ram,0x000132b4)
    */
/* WARNING: Removing unreachable block (ram,0x00013338) */

void * memset(void *__s,int __c,size_t __n)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  int in_o4;
  
  bVar1 = (byte)__c;
  uVar2 = (ushort)__c & 0xff | (ushort)bVar1 << 8;
  if (__n < 8) {
    if (__n != 0) {
      *(byte *)__s = bVar1;
      if (__n != 1) {
        *(byte *)((int)__s + 1) = bVar1;
        if (__n != 2) {
          *(byte *)((int)__s + 2) = bVar1;
          if (__n != 3) {
            *(byte *)((int)__s + 3) = bVar1;
            if (__n != 4) {
              *(byte *)((int)__s + 4) = bVar1;
              if ((__n != 5) && (*(byte *)((int)__s + 5) = bVar1, __n != 6)) {
                *(byte *)((int)__s + 6) = bVar1;
              }
            }
          }
        }
      }
    }
    return __s;
  }
  uVar7 = (uint)__s & 3;
  uVar3 = (uint)__s & 4;
  puVar6 = (undefined8 *)__s;
  if (uVar7 != 0) {
    *(byte *)__s = bVar1;
    if ((uVar7 != 3) && (*(byte *)((int)__s + 1) = bVar1, uVar7 != 2)) {
      *(byte *)((int)__s + 2) = bVar1;
    }
    __n = __n + (uVar7 - 4);
    puVar6 = (undefined8 *)((int)__s - (uVar7 - 4));
    uVar3 = (uint)puVar6 & 4;
  }
  uVar7 = __c & 0xffU | (uint)CONCAT21(uVar2,bVar1) << 8;
  if (uVar3 != 0) {
    *(uint *)puVar6 = __c & 0xffU | (uint)CONCAT21(uVar2,bVar1) << 8;
    __n = __n - 4;
    puVar6 = (undefined8 *)((int)puVar6 + 4);
  }
  uVar3 = __n & 0xffffff80;
  uVar8 = __n & 0x78;
  while (uVar3 != 0) {
    *puVar6 = CONCAT71(CONCAT61(CONCAT42(uVar7,uVar2),bVar1),bVar1);
    puVar6[1] = CONCAT71(CONCAT61(CONCAT42(uVar7,uVar2),bVar1),bVar1);
    puVar6[2] = CONCAT71(CONCAT61(CONCAT42(uVar7,uVar2),bVar1),bVar1);
    puVar6[3] = CONCAT71(CONCAT61(CONCAT42(uVar7,uVar2),bVar1),bVar1);
    puVar6[4] = CONCAT71(CONCAT61(CONCAT42(uVar7,uVar2),bVar1),bVar1);
    puVar6[5] = CONCAT71(CONCAT61(CONCAT42(uVar7,uVar2),bVar1),bVar1);
    puVar6[6] = CONCAT71(CONCAT61(CONCAT42(uVar7,uVar2),bVar1),bVar1);
    puVar6[7] = CONCAT71(CONCAT61(CONCAT42(uVar7,uVar2),bVar1),bVar1);
    uVar3 = uVar3 - 0x80;
    puVar6[8] = CONCAT71(CONCAT61(CONCAT42(uVar7,uVar2),bVar1),bVar1);
    puVar6[9] = CONCAT71(CONCAT61(CONCAT42(uVar7,uVar2),bVar1),bVar1);
    puVar6[10] = CONCAT71(CONCAT61(CONCAT42(uVar7,uVar2),bVar1),bVar1);
    puVar6[0xb] = CONCAT71(CONCAT61(CONCAT42(uVar7,uVar2),bVar1),bVar1);
    puVar6[0xc] = CONCAT71(CONCAT61(CONCAT42(uVar7,uVar2),bVar1),bVar1);
    puVar6[0xd] = CONCAT71(CONCAT61(CONCAT42(uVar7,uVar2),bVar1),bVar1);
    puVar6[0xe] = CONCAT71(CONCAT61(CONCAT42(uVar7,uVar2),bVar1),bVar1);
    puVar6[0xf] = CONCAT71(CONCAT61(CONCAT42(uVar7,uVar2),bVar1),bVar1);
    puVar6 = puVar6 + 0x10;
  }
  if (uVar8 == 0) {
    if ((__n & 7) != 0) {
      if ((__n & 4) != 0) {
        *(uint *)puVar6 = __c & 0xffU | (uint)CONCAT21(uVar2,bVar1) << 8;
        puVar6 = (undefined8 *)((int)puVar6 + 4);
      }
      if ((__n & 2) != 0) {
        *(ushort *)puVar6 = CONCAT11(bVar1,bVar1);
        puVar6 = (undefined8 *)((int)puVar6 + 2);
      }
      if ((__n & 1) != 0) {
        *(byte *)puVar6 = bVar1;
      }
    }
    return __s;
  }
  iVar4 = FUN_0001334c();
                    /* WARNING: Could not recover jumptable at 0x00013344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar5 = (void *)(*(code *)(in_o4 + 0x5c))(iVar4 + uVar8);
  return pvVar5;
}


void FUN_0001334c(void)

{
  return;
}


size_t strlen(char *__s)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar1 = (uint *)__s;
  if (((uint)__s & 3) != 0) {
    puVar1 = (uint *)(__s + 1);
    if (*__s == '\0') {
      return 0;
    }
    if (((uint)puVar1 & 3) != 0) {
      puVar2 = (uint *)(__s + 2);
      if (*(char *)puVar1 == '\0') {
        return 1;
      }
      puVar1 = puVar2;
      if ((((uint)puVar2 & 3) != 0) && (puVar1 = (uint *)(__s + 3), *(char *)puVar2 == '\0')) {
        return 2;
      }
    }
  }
  do {
    uVar4 = *puVar1;
    puVar2 = puVar1;
    while (puVar1 = puVar2 + 1, (uVar4 + 0xfefefeff & 0x80808080) != 0) {
      puVar3 = puVar2;
      if (((uVar4 >> 0x18 == 0) || (puVar3 = (uint *)((int)puVar2 + 1), (uVar4 >> 0x10 & 0xff) == 0)
          ) || (puVar3 = (uint *)((int)puVar2 + 2), (uVar4 >> 8 & 0xff) == 0)) {
LAB_00013504:
        return (size_t)((int)puVar3 - (int)__s);
      }
      if ((uVar4 & 0xff) == 0) {
        puVar3 = (uint *)((int)puVar2 + 3);
        goto LAB_00013504;
      }
      uVar4 = *puVar1;
      puVar2 = puVar1;
    }
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x0001350c) */
/* WARNING: Removing unreachable block (ram,0x000135b0) */

size_t strnlen(char *__string,size_t __maxlen)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = (int *)(__string + __maxlen);
  if (__maxlen != 0) {
    piVar4 = (int *)__string;
    if (piVar1 < __string) {
      piVar1 = (int *)0xffffffff;
    }
    while (piVar3 = piVar4, ((uint)piVar4 & 3) != 0) {
      if (*(char *)piVar4 == '\0') goto LAB_000135a0;
      piVar4 = (int *)((int)piVar4 + 1);
    }
    do {
      do {
        piVar2 = piVar4;
        piVar4 = piVar3;
        if (piVar1 <= piVar2) goto LAB_000135a0;
        piVar4 = piVar2 + 1;
        piVar3 = piVar1;
      } while ((*piVar2 + 0xfefefeffU & 0x80808080) == 0);
      piVar4 = piVar2;
      if (*(char *)piVar2 == '\0') goto LAB_000135a0;
      if (*(char *)((int)piVar2 + 1) == '\0') {
        piVar4 = (int *)((int)piVar2 + 1);
        goto LAB_000135a0;
      }
      if (*(char *)((int)piVar2 + 2) == '\0') {
        piVar4 = (int *)((int)piVar2 + 2);
        goto LAB_000135a0;
      }
      piVar4 = piVar2 + 1;
    } while (*(char *)((int)piVar2 + 3) != '\0');
    piVar4 = (int *)((int)piVar2 + 3);
LAB_000135a0:
    if (piVar1 < piVar4) {
      piVar4 = piVar1;
    }
    __maxlen = (int)piVar4 - (int)__string;
  }
  return (size_t)(int *)__maxlen;
}


/* WARNING: Removing unreachable block (ram,0x000135e8) */
/* WARNING: Removing unreachable block (ram,0x000135f8) */

char * strerror_r(int __errnum,char *__buf,size_t __buflen)

{
  __GI___xpg_strerror_r(__errnum,__buf,__buflen);
  return __buf;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00013630) */
/* WARNING: Removing unreachable block (ram,0x00013608) */
/* WARNING: Removing unreachable block (ram,0x00013618) */

char * strerror(int __errnum)

{
  __GI___xpg_strerror_r(__errnum,buf_1250,0x32);
  return buf_1250;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x000136b0) */
/* WARNING: Removing unreachable block (ram,0x0001374c) */
/* WARNING: Removing unreachable block (ram,0x00013640) */
/* WARNING: Removing unreachable block (ram,0x000136f4) */
/* WARNING: Removing unreachable block (ram,0x00013690) */
/* WARNING: Removing unreachable block (ram,0x00013648) */

int __GI___xpg_strerror_r(uint param_1,void *param_2,uint param_3)

{
  int unaff_g7;
  size_t sVar1;
  uint uVar2;
  char *__s;
  int iVar3;
  undefined auStack7 [7];
  
  iVar3 = 0;
  while ((uint)(byte)(&estridx)[iVar3] != param_1) {
    iVar3 = iVar3 + 1;
    if (iVar3 == 0x7e) goto LAB_00013684;
  }
  __s = "Success";
  while (iVar3 != 0) {
    if (*__s == '\0') {
      iVar3 = iVar3 + -1;
    }
    __s = __s + 1;
  }
  if (*__s == '\0') {
LAB_00013684:
    iVar3 = _uintmaxtostr(auStack7,(int)param_1 >> 0x1f,param_1,0xfffffff6,0);
    __s = (char *)(iVar3 + -0xe);
    iVar3 = 0x16;
    memcpy(__s,"Unknown error ",0xe);
  }
  if (param_2 == (void *)0x0) {
    param_3 = 0;
  }
  sVar1 = strlen(__s);
  uVar2 = sVar1 + 1;
  if (param_3 < uVar2) {
    iVar3 = 0x22;
    if (param_3 == 0) goto LAB_0001371c;
LAB_00013740:
    memcpy(param_2,__s,param_3);
    *(undefined *)((int)param_2 + (param_3 - 1)) = 0;
  }
  else {
    param_3 = uVar2;
    if (uVar2 != 0) goto LAB_00013740;
  }
  if (iVar3 == 0) {
    return 0;
  }
LAB_0001371c:
  *(int *)(unaff_g7 + -8) = iVar3;
  return iVar3;
}


/* WARNING: Removing unreachable block (ram,0x0001376c) */
/* WARNING: Removing unreachable block (ram,0x00013774) */

int isatty(int __fd)

{
  int iVar1;
  undefined auStack36 [36];
  
  iVar1 = tcgetattr(__fd,(termios *)auStack36);
  return (uint)(iVar1 == 0);
}


/* WARNING: Removing unreachable block (ram,0x000137e8) */
/* WARNING: Removing unreachable block (ram,0x0001378c) */
/* WARNING: Removing unreachable block (ram,0x000137dc) */
/* WARNING: Removing unreachable block (ram,0x0001379c) */

int tcgetattr(int __fd,termios *__termios_p)

{
  int iVar1;
  void *__s;
  tcflag_t local_24;
  tcflag_t local_20;
  tcflag_t local_1c;
  tcflag_t local_18;
  cc_t local_14;
  undefined auStack19 [19];
  
  iVar1 = ioctl(__fd,0x40245408,&local_24);
  if (iVar1 == 0) {
    __termios_p->c_iflag = local_24;
    __termios_p->c_oflag = local_20;
    __termios_p->c_cflag = local_1c;
    __termios_p->c_lflag = local_18;
    __termios_p->c_line = local_14;
    __s = mempcpy(__termios_p->c_cc,auStack19,0x11);
    memset(__s,0,0);
  }
  return iVar1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001385c) */
/* WARNING: Removing unreachable block (ram,0x00013880) */
/* WARNING: Removing unreachable block (ram,0x000137f8) */
/* WARNING: Removing unreachable block (ram,0x00013878) */
/* WARNING: Removing unreachable block (ram,0x00013808) */

undefined4 __malloc_trim_constprop_1(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(__malloc_state._44_4_ + 4) & 0xfffffffc;
  iVar3 = ((((__malloc_state._860_4_ - 0x11) + uVar4) - param_1) / __malloc_state._860_4_ - 1) *
          __malloc_state._860_4_;
  if ((0 < iVar3) && (pvVar1 = sbrk(0), pvVar1 == (void *)(__malloc_state._44_4_ + uVar4))) {
    sbrk(-iVar3);
    pvVar2 = sbrk(0);
    pvVar1 = (void *)((int)pvVar1 - (int)pvVar2);
    if ((pvVar2 != (void *)0xffffffff) && (pvVar1 != (void *)0x0)) {
      __malloc_state._872_4_ = __malloc_state._872_4_ - (int)pvVar1;
      *(uint *)(__malloc_state._44_4_ + 4) = uVar4 - (int)pvVar1 | 1;
      return 1;
    }
  }
  return 0;
}


/* WARNING: Removing unreachable block (ram,0x000138bc) */
/* WARNING: Removing unreachable block (ram,0x00013a58) */
/* WARNING: Removing unreachable block (ram,0x0001390c) */

uint * __malloc_consolidate(uint *param_1)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  
  uVar1 = *param_1;
  puVar11 = param_1 + 0xd;
  if (uVar1 == 0) {
    *(uint **)(param_1 + 0x10) = puVar11;
    puVar3 = puVar11;
    while( true ) {
      *(uint **)(puVar3 + 2) = puVar3;
      puVar4 = puVar3 + 2;
      if (param_1 + 0xcb == puVar4) break;
      *(uint **)(puVar3 + 5) = puVar4;
      puVar3 = puVar4;
    }
    param_1[0xd5] = 0x10000;
    param_1[0xd3] = 0x40000;
    param_1[0xd1] = 0x40000;
    param_1[0xd8] = param_1[0xd8] | 1;
    param_1[0xd2] = 0;
    *param_1 = 0x48;
    *(uint **)(param_1 + 0xb) = puVar11;
    uVar1 = getpagesize();
    param_1[0xd7] = uVar1;
    return param_1;
  }
  *param_1 = uVar1 & 0xfffffffd;
  piVar2 = (int *)param_1[1];
  puVar3 = param_1;
  while (piVar2 == (int *)0x0) {
LAB_00013900:
    if (param_1 + ((uVar1 >> 3) - 1) == puVar3 + 1) {
      return param_1;
    }
    piVar2 = (int *)puVar3[2];
    puVar3 = puVar3 + 1;
  }
  puVar3[1] = 0;
  uVar8 = piVar2[1];
  do {
    piVar7 = (int *)piVar2[2];
    uVar5 = uVar8 & 0xfffffffe;
    uVar6 = (int)piVar2 + uVar5;
    uVar12 = *(uint *)(uVar6 + 4) & 0xfffffffc;
    if ((uVar8 & 1) == 0) {
      iVar9 = *piVar2;
      piVar2 = (int *)((int)piVar2 - iVar9);
      uVar5 = uVar5 + iVar9;
      iVar9 = piVar2[2];
      iVar10 = piVar2[3];
      if ((*(int **)(iVar9 + 0xc) != piVar2) || (*(int **)(iVar10 + 8) != piVar2))
      goto LAB_00013954;
      *(int *)(iVar9 + 0xc) = iVar10;
      *(int *)(iVar10 + 8) = iVar9;
    }
    if (param_1[0xb] == uVar6) {
      piVar2[1] = uVar5 + uVar12 | 1;
      *(int **)(param_1 + 0xb) = piVar2;
    }
    else {
      uVar8 = *(uint *)(uVar6 + uVar12 + 4);
      *(uint *)(uVar6 + 4) = uVar12;
      if ((uVar8 & 1) == 0) {
        uVar5 = uVar5 + uVar12;
        iVar9 = *(int *)(uVar6 + 8);
        iVar10 = *(int *)(uVar6 + 0xc);
        if ((*(uint *)(iVar9 + 0xc) != uVar6) || (*(uint *)(iVar10 + 8) != uVar6)) {
LAB_00013954:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(int *)(iVar9 + 0xc) = iVar10;
        *(int *)(iVar10 + 8) = iVar9;
      }
      uVar8 = param_1[0xf];
      *(int **)(param_1 + 0xf) = piVar2;
      *(int **)(uVar8 + 0xc) = piVar2;
      *(uint **)(piVar2 + 3) = puVar11;
      piVar2[1] = uVar5 | 1;
      piVar2[2] = uVar8;
      *(uint *)((int)piVar2 + uVar5) = uVar5;
    }
    if (piVar7 == (int *)0x0) goto LAB_00013900;
    uVar8 = piVar7[1];
    piVar2 = piVar7;
  } while( true );
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00013a9c) */
/* WARNING: Removing unreachable block (ram,0x00013ab4) */
/* WARNING: Removing unreachable block (ram,0x00013acc) */
/* WARNING: Removing unreachable block (ram,0x00013a6c) */
/* WARNING: Removing unreachable block (ram,0x00013abc) */
/* WARNING: Removing unreachable block (ram,0x00013aa4) */
/* WARNING: Removing unreachable block (ram,0x00013a7c) */

undefined4 malloc_trim(undefined4 param_1)

{
  undefined4 uVar1;
  undefined auStack16 [16];
  
  _pthread_cleanup_push_defer(auStack16,__pthread_mutex_trylock,__malloc_lock);
  __pthread_mutex_trylock(__malloc_lock);
  __malloc_consolidate(__malloc_state);
  uVar1 = __malloc_trim_constprop_1(param_1);
  _pthread_cleanup_pop_restore(auStack16,1);
  return uVar1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00013b1c) */
/* WARNING: Removing unreachable block (ram,0x00013c78) */
/* WARNING: Removing unreachable block (ram,0x00013b70) */
/* WARNING: Removing unreachable block (ram,0x00013adc) */
/* WARNING: Removing unreachable block (ram,0x00013c9c) */
/* WARNING: Removing unreachable block (ram,0x00013ce0) */
/* WARNING: Removing unreachable block (ram,0x00013b14) */
/* WARNING: Removing unreachable block (ram,0x00013ae4) */

void free(void *__ptr)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  size_t __len;
  int iVar8;
  int iVar9;
  undefined auStack16 [16];
  
  if (__ptr != (void *)0x0) {
    _pthread_cleanup_push_defer(auStack16,__pthread_mutex_trylock,__malloc_lock);
    __pthread_mutex_trylock(__malloc_lock);
    uVar5 = *(uint *)((int)__ptr + -4);
    uVar7 = uVar5 & 0xfffffffc;
    iVar3 = (int)__ptr + -8;
    if (__malloc_state._0_4_ < uVar7) {
      uVar2 = __malloc_state._0_4_ | 1;
      if ((uVar5 & 2) == 0) {
        iVar8 = iVar3 + uVar7;
        uVar4 = *(uint *)(iVar8 + 4) & 0xfffffffc;
        __malloc_state._0_4_ = uVar2;
        if ((uVar5 & 1) == 0) {
          iVar3 = iVar3 - *(int *)((int)__ptr + -8);
          uVar7 = uVar7 + *(int *)((int)__ptr + -8);
          iVar9 = *(int *)(iVar3 + 8);
          iVar6 = *(int *)(iVar3 + 0xc);
          if ((iVar3 != *(int *)(iVar9 + 0xc)) || (iVar3 != *(int *)(iVar6 + 8))) goto LAB_00013bc4;
          *(int *)(iVar9 + 0xc) = iVar6;
          *(int *)(iVar6 + 8) = iVar9;
        }
        if (iVar8 == __malloc_state._44_4_) {
          uVar7 = uVar7 + uVar4;
          *(uint *)(iVar3 + 4) = uVar7 | 1;
          __malloc_state._44_4_ = iVar3;
        }
        else {
          uVar5 = *(uint *)(iVar8 + uVar4 + 4);
          *(uint *)(iVar8 + 4) = uVar4;
          if ((uVar5 & 1) == 0) {
            iVar9 = *(int *)(iVar8 + 8);
            iVar6 = *(int *)(iVar8 + 0xc);
            if ((iVar8 != *(int *)(iVar9 + 0xc)) ||
               (uVar7 = uVar7 + uVar4, iVar8 != *(int *)(iVar6 + 8))) {
LAB_00013bc4:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(int *)(iVar9 + 0xc) = iVar6;
            *(int *)(iVar6 + 8) = iVar9;
          }
          *(int *)(iVar3 + 8) = __malloc_state._60_4_;
          *(undefined4 *)(iVar3 + 0xc) = 0x3072c;
          piVar1 = (int *)(__malloc_state._60_4_ + 0xc);
          __malloc_state._60_4_ = iVar3;
          *piVar1 = iVar3;
          *(uint *)(iVar3 + 4) = uVar7 | 1;
          *(uint *)(iVar3 + uVar7) = uVar7;
        }
        if (0x1ffff < uVar7) {
          if ((__malloc_state._0_4_ & 2) != 0) {
            __malloc_consolidate(__malloc_state,1);
          }
          if (__malloc_state._836_4_ <= (*(uint *)(__malloc_state._44_4_ + 4) & 0xfffffffc)) {
            __malloc_trim_constprop_1(__malloc_state._840_4_);
          }
        }
      }
      else {
        __malloc_state._848_4_ = __malloc_state._848_4_ + -1;
        __len = uVar7 + *(int *)((int)__ptr + -8);
        __malloc_state._868_4_ = __malloc_state._868_4_ - __len;
        munmap((void *)(iVar3 - *(int *)((int)__ptr + -8)),__len);
      }
    }
    else {
      __malloc_state._0_4_ = __malloc_state._0_4_ | 3;
      iVar8 = ((uVar5 >> 3) - 2) * 4;
      *(undefined4 *)__ptr = *(undefined4 *)(__malloc_state + iVar8 + 4);
      *(int *)(__malloc_state + iVar8 + 4) = iVar3;
    }
    _pthread_cleanup_pop_restore(auStack16,1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00013cf0) */
/* WARNING: Removing unreachable block (ram,0x00013d74) */

int __malloc_largebin_index(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = param_1 >> 8;
  iVar4 = 0x5f;
  if (uVar1 < 0x10000) {
    uVar2 = uVar1 - 0x100 >> 0x10 & 8;
    iVar4 = uVar1 << (sbyte)uVar2;
    uVar5 = iVar4 - 0x1000U >> 0x10 & 4;
    iVar4 = iVar4 << (sbyte)uVar5;
    uVar3 = iVar4 - 0x4000U >> 0x10 & 2;
    uVar1 = iVar4 << (sbyte)uVar3;
    iVar4 = (uVar1 >> 0xe & ~(uVar1 >> 0xf)) - ((uVar2 | uVar5) + uVar3);
    iVar4 = (param_1 >> ((char)iVar4 + 0x13U & 0x1f) & 3) + iVar4 * 4 + 0x54;
  }
  return iVar4;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00013dec) */
/* WARNING: Removing unreachable block (ram,0x00013ef8) */
/* WARNING: Removing unreachable block (ram,0x00014250) */
/* WARNING: Removing unreachable block (ram,0x000143fc) */
/* WARNING: Removing unreachable block (ram,0x00014550) */
/* WARNING: Removing unreachable block (ram,0x0001446c) */
/* WARNING: Removing unreachable block (ram,0x00013e94) */
/* WARNING: Removing unreachable block (ram,0x00013d7c) */
/* WARNING: Removing unreachable block (ram,0x000145d8) */
/* WARNING: Removing unreachable block (ram,0x00014564) */
/* WARNING: Removing unreachable block (ram,0x000143d4) */
/* WARNING: Removing unreachable block (ram,0x000142b8) */
/* WARNING: Removing unreachable block (ram,0x00013e1c) */
/* WARNING: Removing unreachable block (ram,0x000140dc) */
/* WARNING: Removing unreachable block (ram,0x00013ee4) */
/* WARNING: Removing unreachable block (ram,0x00013de4) */
/* WARNING: Removing unreachable block (ram,0x00013d84) */
/* WARNING: Removing unreachable block (ram,0x00014258) */
/* WARNING: Removing unreachable block (ram,0x00013dac) */

void * malloc(size_t __size)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_g7;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint __len;
  int *piVar12;
  uint __len_00;
  uint uVar13;
  int __delta;
  uint uVar14;
  undefined auStack16 [16];
  
  if (0xffffffdf < __size) {
    *(undefined4 *)(unaff_g7 + -8) = 0xc;
    return (void *)0x0;
  }
  uVar14 = 0x10;
  if (0xf < __size + 0xb) {
    uVar14 = __size + 0xb & 0xfffffff8;
  }
  _pthread_cleanup_push_defer(auStack16,__pthread_mutex_trylock,__malloc_lock);
  __pthread_mutex_trylock(__malloc_lock);
  uVar2 = __malloc_state._0_4_;
  __len_00 = __malloc_state._0_4_ & 1;
  if (__len_00 == 0) {
    if (__malloc_state._0_4_ == 0) {
      __malloc_consolidate(__malloc_state);
    }
LAB_00013e28:
    uVar2 = *(uint *)(__malloc_state._44_4_ + 4) & 0xfffffffc;
    puVar11 = __malloc_state._44_4_;
    if (uVar2 < uVar14 + 0x10) {
      __delta = __malloc_state._860_4_ + -1;
      if ((__malloc_state._0_4_ & 2) != 0) {
        __malloc_consolidate(__malloc_state);
        piVar12 = (int *)malloc(uVar14 - 7);
        goto LAB_00013e90;
      }
      uVar2 = -__malloc_state._860_4_;
      if ((((__malloc_state._844_4_ <= uVar14) && (__malloc_state._848_4_ < __malloc_state._852_4_))
          && (__len_00 = __malloc_state._860_4_ + 10 + uVar14 & uVar2, uVar14 < __len_00)) &&
         (piVar12 = (int *)mmap((void *)0x0,__len_00,3,0x22,0,0), piVar12 != (int *)0xffffffff)) {
        if (((uint)piVar12 & 7) == 0) {
          *piVar12 = 0;
          uVar14 = __len_00;
        }
        else {
          __delta = 8 - ((uint)piVar12 & 7);
          piVar12 = (int *)((int)piVar12 + __delta);
          *piVar12 = __delta;
          uVar14 = __len_00 - __delta;
        }
        piVar12[1] = uVar14 | 2;
        __malloc_state._848_4_ = __malloc_state._848_4_ + 1;
        if (__malloc_state._856_4_ < __malloc_state._848_4_) {
          __malloc_state._856_4_ = __malloc_state._848_4_;
        }
        __malloc_state._868_4_ = __len_00 + __malloc_state._868_4_;
        if (__malloc_state._880_4_ < __malloc_state._868_4_) {
          __malloc_state._880_4_ = __malloc_state._868_4_;
        }
        if (__malloc_state._884_4_ < __malloc_state._872_4_ + __malloc_state._868_4_) {
          __malloc_state._884_4_ = __malloc_state._872_4_ + __malloc_state._868_4_;
        }
        piVar12 = piVar12 + 2;
        goto LAB_00013e90;
      }
      puVar11 = __malloc_state._44_4_;
      __len_00 = *(uint *)(__malloc_state._44_4_ + 4) & 0xfffffffc;
      puVar9 = __malloc_state._44_4_ + __len_00;
      iVar5 = __malloc_state._840_4_ + 0x10 + uVar14;
      if ((__malloc_state._864_4_ & 1) != 0) {
        iVar5 = iVar5 - __len_00;
      }
      __len = __delta + iVar5 & uVar2;
      if ((int)__len < 1) {
LAB_00014390:
        if ((__malloc_state._864_4_ & 1) != 0) {
          __len = __delta + __len_00 + __len & uVar2;
        }
        if (__len < 0x100000) {
          __len = 0x100000;
        }
        if ((uVar14 < __len) &&
           (puVar3 = (undefined1 *)mmap((void *)0x0,__len,3,0x22,0,0),
           puVar3 != (undefined1 *)0xffffffff)) {
          puVar8 = puVar3 + __len;
          __malloc_state._864_4_ = __malloc_state._864_4_ & 0xfffffffe;
          goto LAB_00014414;
        }
      }
      else {
        puVar3 = (undefined1 *)sbrk(__len);
        puVar8 = (undefined1 *)0xffffffff;
        if (puVar3 == (undefined1 *)0xffffffff) goto LAB_00014390;
LAB_00014414:
        __malloc_state._872_4_ = __malloc_state._872_4_ + __len;
        if ((puVar9 == puVar3) && (puVar8 == (undefined1 *)0xffffffff)) {
          *(uint *)(puVar11 + 4) = __len_00 + __len | 1;
        }
        else {
          uVar13 = __malloc_state._864_4_;
          puVar10 = puVar3;
          if (((__malloc_state._864_4_ & 1) == 0) ||
             ((__len_00 != 0 && (uVar13 = __malloc_state._864_4_ & 0xfffffffe, puVar3 < puVar9)))) {
            __malloc_state._864_4_ = uVar13;
            if (puVar8 == (undefined1 *)0xffffffff) {
              puVar8 = (undefined1 *)sbrk(0);
              __malloc_state._872_4_ =
                   puVar8 + (int)(__malloc_state._872_4_ + (-__len - (int)puVar3));
              goto LAB_0001456c;
            }
LAB_0001457c:
            __delta = 0;
          }
          else {
            if (__len_00 != 0) {
              __malloc_state._872_4_ = puVar3 + (int)(__malloc_state._872_4_ + -(int)puVar9);
            }
            iVar5 = 0;
            if (((uint)puVar3 & 7) != 0) {
              iVar5 = 8 - ((uint)puVar3 & 7);
              puVar10 = puVar3 + iVar5;
            }
            __delta = ((uint)(puVar3 + __len + iVar5 + __len_00 + __delta) & uVar2) +
                      ((iVar5 + __len_00) - (int)(puVar3 + __len + iVar5 + __len_00));
            puVar8 = (undefined1 *)sbrk(__delta);
            if (puVar8 == (undefined1 *)0xffffffff) {
              puVar8 = (undefined1 *)sbrk(0);
LAB_0001456c:
              if (puVar8 == (undefined1 *)0xffffffff) goto LAB_000144a4;
              goto LAB_0001457c;
            }
            if (puVar8 < puVar3) {
              puVar8 = puVar3 + __len;
              __malloc_state._864_4_ = __malloc_state._864_4_ & 0xfffffffe;
              goto LAB_0001456c;
            }
          }
          __malloc_state._44_4_ = puVar10;
          *(uint *)(puVar10 + 4) = (uint)(puVar8 + (__delta - (int)puVar10)) | 1;
          __malloc_state._872_4_ = __malloc_state._872_4_ + __delta;
          if (__len_00 != 0) {
            uVar2 = __len_00 - 0xc & 0xfffffff8;
            *(uint *)(puVar11 + 4) = uVar2 | 1;
            *(undefined4 *)(puVar11 + uVar2 + 4) = 5;
            *(undefined4 *)(puVar11 + uVar2 + 8) = 5;
            uVar1 = __malloc_state._836_4_;
            __malloc_state._836_4_ = uVar1;
            if (0xf < uVar2) {
              __malloc_state._836_4_ = 0xffffffff;
              free(puVar11 + 8);
              __malloc_state._836_4_ = uVar1;
            }
          }
        }
LAB_000144a4:
        if (__malloc_state._876_4_ < __malloc_state._872_4_) {
          __malloc_state._876_4_ = __malloc_state._872_4_;
        }
        if (__malloc_state._884_4_ < __malloc_state._872_4_ + __malloc_state._868_4_) {
          __malloc_state._884_4_ = __malloc_state._872_4_ + __malloc_state._868_4_;
        }
        uVar2 = *(uint *)(__malloc_state._44_4_ + 4) & 0xfffffffc;
        puVar11 = __malloc_state._44_4_;
        if (uVar14 + 0x10 <= uVar2) goto LAB_00013e44;
      }
      piVar12 = (int *)0x0;
      *(undefined4 *)(unaff_g7 + -8) = 0xc;
      goto LAB_00013e90;
    }
LAB_00013e44:
    __malloc_state._44_4_ = puVar11 + uVar14;
    *(uint *)(puVar11 + 4) = uVar14 | 1;
    *(uint *)(puVar11 + uVar14 + 4) = uVar2 - uVar14 | 1;
LAB_00013e8c:
    piVar12 = (int *)(puVar11 + 8);
  }
  else {
    if (0xfe < uVar14) {
      puVar11 = *(undefined1 **)(_custom_printf_handler + (uVar14 >> 1) + 0x24);
      if (puVar11 != (undefined1 *)0x0) {
        *(undefined4 *)(_custom_printf_handler + (uVar14 >> 1) + 0x24) =
             *(undefined4 *)(puVar11 + 8);
        goto LAB_00013e8c;
      }
    }
    if (uVar14 < 0x100) {
      puVar11 = *(undefined1 **)(__malloc_state + uVar14 + 0x38);
      __len = uVar14 >> 3;
      if (__malloc_state + uVar14 + 0x2c != puVar11) {
        __delta = *(int *)(puVar11 + 0xc);
        *(uint *)(puVar11 + uVar14 + 4) = *(uint *)(puVar11 + uVar14 + 4) | 1;
        *(int *)(__malloc_state + uVar14 + 0x38) = __delta;
        *(undefined1 **)(__delta + 8) = __malloc_state + uVar14 + 0x2c;
        goto LAB_00013e8c;
      }
    }
    else {
      __len = __malloc_largebin_index(uVar14);
      if ((uVar2 & 2) != 0) {
        __malloc_consolidate(__malloc_state);
      }
    }
    puVar9 = __malloc_state._48_4_;
    while (puVar11 = __malloc_state._64_4_, __malloc_state._64_4_ != __malloc_state + 0x34) {
      uVar13 = *(uint *)(__malloc_state._64_4_ + 4);
      puVar3 = *(undefined1 **)(__malloc_state._64_4_ + 0xc);
      uVar2 = uVar13 & 0xfffffffc;
      if ((((uVar14 < 0x100) && (puVar3 == __malloc_state + 0x34)) &&
          (puVar9 == __malloc_state._64_4_)) && (uVar14 + 0x10 < uVar2)) {
        puVar11 = puVar9 + uVar14;
        __malloc_state._48_4_ = puVar11;
        __malloc_state._60_4_ = puVar11;
        __malloc_state._64_4_ = puVar11;
        *(undefined4 *)(puVar11 + 8) = 0x3072c;
        *(undefined4 *)(puVar11 + 0xc) = 0x3072c;
        *(uint *)(puVar9 + 4) = uVar14 | 1;
        *(uint *)(puVar11 + 4) = uVar2 - uVar14 | 1;
        *(uint *)(puVar9 + uVar2) = uVar2 - uVar14;
        piVar12 = (int *)(puVar9 + 8);
        goto LAB_00013e90;
      }
      __malloc_state._64_4_ = puVar3;
      *(undefined4 *)(puVar3 + 8) = 0x3072c;
      if (uVar14 == uVar2) {
        *(uint *)(puVar11 + uVar14 + 4) = *(uint *)(puVar11 + uVar14 + 4) | 1;
        goto LAB_00013e8c;
      }
      uVar7 = uVar13 >> 3;
      if (uVar2 < 0x100) {
        __delta = *(int *)(__malloc_state + (uVar13 & 0xfffffff8) + 0x34);
        iVar5 = (uVar13 & 0xfffffff8) + 0x30724;
      }
      else {
        uVar7 = __malloc_largebin_index(uVar2);
        iVar6 = uVar7 * 8;
        iVar4 = *(int *)(__malloc_state + iVar6 + 0x34);
        __delta = iVar4;
        iVar5 = iVar4;
        if ((iVar6 + 0x30724 != iVar4) &&
           (iVar5 = *(int *)(__malloc_state + iVar6 + 0x38), __delta = iVar6 + 0x30724,
           *(uint *)(iVar5 + 4) <= uVar2)) {
          while ((uVar2 | 1) < *(uint *)(iVar4 + 4)) {
            iVar4 = *(int *)(iVar4 + 8);
          }
          iVar5 = *(int *)(iVar4 + 0xc);
          __delta = iVar4;
        }
      }
      iVar6 = (((int)uVar7 >> 5) + 0xcc) * 4;
      *(uint *)(__malloc_state + iVar6 + 4) =
           1 << ((byte)uVar7 & 0x1f) | *(uint *)(__malloc_state + iVar6 + 4);
      *(int *)(puVar11 + 0xc) = iVar5;
      *(int *)(puVar11 + 8) = __delta;
      *(undefined1 **)(__delta + 0xc) = puVar11;
      *(undefined1 **)(iVar5 + 8) = puVar11;
    }
    if (uVar14 < 0x100) {
LAB_00014034:
      __len = __len + 1;
      uVar13 = __len >> 5;
      __delta = __len * 8 + 0x30724;
      uVar2 = 1 << ((byte)__len & 0x1f);
      __len = *(uint *)(__malloc_state + (uVar13 + 0xcc) * 4 + 4);
      while( true ) {
        uVar7 = uVar2 & __len;
        if (uVar2 != 0) goto LAB_000140a8;
        do {
          uVar13 = uVar13 + 1;
          if (2 < uVar13) goto LAB_00013e28;
          __len = *(uint *)(__malloc_state + uVar13 * 4 + 0x334);
        } while (__len == 0);
        __delta = uVar13 * 0x100 + 0x30724;
        uVar2 = __len_00;
        while( true ) {
          uVar7 = uVar2 & __len;
LAB_000140a8:
          if (uVar7 != 0) break;
          __delta = __delta + 8;
          uVar2 = uVar2 * 2;
        }
        iVar5 = *(int *)(__delta + 0xc);
        __len = __len & ~uVar2;
        if (__delta != iVar5) break;
        __delta = __delta + 8;
        uVar2 = uVar2 * 2;
        *(uint *)(__malloc_state + (uVar13 + 0xcc) * 4 + 4) = __len;
      }
      uVar2 = *(uint *)(iVar5 + 4);
      iVar6 = *(int *)(iVar5 + 0xc);
      *(int *)(__delta + 0xc) = iVar6;
      *(int *)(iVar6 + 8) = __delta;
      uVar2 = uVar2 & 0xfffffffc;
      piVar12 = (int *)(iVar5 + 8);
      __len_00 = uVar2 - uVar14;
      if (__len_00 < 0x10) {
        *(uint *)(iVar5 + uVar2 + 4) = *(uint *)(iVar5 + uVar2 + 4) | 1;
      }
      else {
        puVar11 = (undefined1 *)(iVar5 + uVar14);
        __malloc_state._60_4_ = puVar11;
        __malloc_state._64_4_ = puVar11;
        *(undefined4 *)(puVar11 + 8) = 0x3072c;
        *(undefined4 *)(puVar11 + 0xc) = 0x3072c;
        if (uVar14 < 0x100) {
          __malloc_state._48_4_ = puVar11;
        }
        *(uint *)(iVar5 + 4) = uVar14 | 1;
        *(uint *)(puVar11 + 4) = __len_00 | 1;
        *(uint *)(iVar5 + uVar2) = __len_00;
      }
    }
    else {
      __delta = *(int *)(__malloc_state + __len * 8 + 0x38);
      do {
        iVar5 = __delta;
        if (iVar5 == __len * 8 + 0x30724) goto LAB_00014034;
        uVar2 = *(uint *)(iVar5 + 4) & 0xfffffffc;
        __delta = *(int *)(iVar5 + 0xc);
      } while (uVar2 < uVar14);
      iVar6 = *(int *)(iVar5 + 8);
      __len_00 = uVar2 - uVar14;
      if ((*(int *)(iVar6 + 0xc) != iVar5) || (*(int *)(__delta + 8) != iVar5)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(int *)(iVar6 + 0xc) = __delta;
      *(int *)(__delta + 8) = iVar6;
      piVar12 = (int *)(iVar5 + 8);
      if (__len_00 < 0x10) {
        *(uint *)(iVar5 + uVar2 + 4) = *(uint *)(iVar5 + uVar2 + 4) | 1;
      }
      else {
        puVar11 = (undefined1 *)(iVar5 + uVar14);
        __malloc_state._60_4_ = puVar11;
        __malloc_state._64_4_ = puVar11;
        *(undefined4 *)(puVar11 + 8) = 0x3072c;
        *(undefined4 *)(puVar11 + 0xc) = 0x3072c;
        *(uint *)(iVar5 + 4) = uVar14 | 1;
        *(uint *)(puVar11 + 4) = __len_00 | 1;
        *(uint *)(iVar5 + uVar2) = __len_00;
      }
    }
  }
LAB_00013e90:
  _pthread_cleanup_pop_restore(auStack16,1);
  return piVar12;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00014620) */
/* WARNING: Removing unreachable block (ram,0x00014668) */
/* WARNING: Removing unreachable block (ram,0x00014678) */
/* WARNING: Removing unreachable block (ram,0x000146c0) */
/* WARNING: Removing unreachable block (ram,0x00014604) */
/* WARNING: Removing unreachable block (ram,0x000146a4) */
/* WARNING: Removing unreachable block (ram,0x00014670) */
/* WARNING: Removing unreachable block (ram,0x0001463c) */
/* WARNING: Removing unreachable block (ram,0x0001460c) */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void abort(void)

{
  ulong local_1c;
  ulong local_18;
  undefined auStack20 [12];
  ulong local_8;
  ulong local_4;
  
  __pthread_mutex_trylock(mylock);
  local_18 = 0;
  local_1c = 0x20;
  sigprocmask(2,(sigset_t *)&local_1c,(sigset_t *)0x0);
  if (been_there_done_that != 0) goto LAB_00014688;
  been_there_done_that = 1;
  while( true ) {
    __pthread_mutex_trylock(mylock);
    raise(6);
    __pthread_mutex_trylock(mylock);
LAB_00014688:
    if (been_there_done_that != 1) break;
    been_there_done_that = 2;
    memset((sigaction *)auStack20,0,0x14);
    local_8 = 0xffffffff;
    local_4 = 0xffffffff;
    sigaction(6,(sigaction *)auStack20,(sigaction *)0x0);
  }
  if (been_there_done_that != 2) {
    if (been_there_done_that != 3) {
      IllegalInstructionTrap(0xf00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    been_there_done_that = 4;
    _exit(0x7f);
  }
  IllegalInstructionTrap(0xf00);
  been_there_done_that = 3;
  return;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001473c) */
/* WARNING: Removing unreachable block (ram,0x00014778) */
/* WARNING: Removing unreachable block (ram,0x00014798) */
/* WARNING: Removing unreachable block (ram,0x00014704) */
/* WARNING: Removing unreachable block (ram,0x00014770) */
/* WARNING: Removing unreachable block (ram,0x00014734) */
/* WARNING: Removing unreachable block (ram,0x00014714) */

void exit(int __status)

{
  undefined auStack16 [16];
  
  _pthread_cleanup_push_defer(auStack16,__pthread_mutex_trylock,__atexit_lock);
  __pthread_mutex_trylock(__atexit_lock);
  if (__exit_cleanup != (code *)0x0) {
    (*__exit_cleanup)(__status,1);
  }
  _pthread_cleanup_pop_restore(auStack16,1);
  __uClibc_fini();
  _stdio_term();
                    /* WARNING: Subroutine does not return */
  _exit(__status);
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x000147dc) */
/* WARNING: Removing unreachable block (ram,0x000147ac) */
/* WARNING: Removing unreachable block (ram,0x000147c0) */
/* WARNING: Removing unreachable block (ram,0x000147b8) */

int __check_one_fd(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fcntl(param_1,1);
  if ((iVar1 == -1) && (iVar1 = open("/dev/null",param_2), param_1 != iVar1)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x00014800) */
/* WARNING: Removing unreachable block (ram,0x00014804) */

undefined4 __pthread_mutex_trylock(void)

{
  return 0;
}


/* WARNING: Removing unreachable block (ram,0x0001480c) */
/* WARNING: Removing unreachable block (ram,0x00014810) */

undefined4 __pthread_mutex_init(void)

{
  return 0;
}


/* WARNING: Removing unreachable block (ram,0x00014818) */
/* WARNING: Removing unreachable block (ram,0x00014824) */

undefined4 * _pthread_cleanup_push_defer(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x0001482c) */

code ** _pthread_cleanup_pop_restore(code **param_1,int param_2)

{
  if (param_2 != 0) {
    (**param_1)(param_1[1]);
  }
  return param_1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00014884) */
/* WARNING: Removing unreachable block (ram,0x00014850) */
/* WARNING: Removing unreachable block (ram,0x0001488c) */
/* WARNING: Removing unreachable block (ram,0x00014858) */
/* WARNING: Removing unreachable block (ram,0x000148b4) */

undefined4
__uClibc_init(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  if (__pagesize == 0) {
    __pagesize = 0x1000;
    __libc_setup_tls(0x450,0x10);
    __pthread_initialize_minimal();
    uVar1 = _stdio_init(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar1;
  }
  return param_1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x000148bc) */
/* WARNING: Removing unreachable block (ram,0x000148c4) */

undefined4 __uClibc_fini(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while (iVar1 != 0) {
    (*(code *)(&__CTOR_LIST__)[iVar1 + -1])();
    iVar1 = iVar1 + -1;
  }
  if (__app_fini != (code *)0x0) {
    (*__app_fini)();
  }
  if (__rtld_fini != (code *)0x0) {
    (*__rtld_fini)();
  }
  return param_1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x000149e0) */
/* WARNING: Removing unreachable block (ram,0x00014a20) */
/* WARNING: Removing unreachable block (ram,0x00014ab4) */
/* WARNING: Removing unreachable block (ram,0x00014c9c) */
/* WARNING: Removing unreachable block (ram,0x00014ad0) */
/* WARNING: Removing unreachable block (ram,0x00014aec) */
/* WARNING: Removing unreachable block (ram,0x00014c10) */
/* WARNING: Removing unreachable block (ram,0x00014c44) */
/* WARNING: Removing unreachable block (ram,0x00014e38) */
/* WARNING: Removing unreachable block (ram,0x00014960) */
/* WARNING: Removing unreachable block (ram,0x00014d50) */
/* WARNING: Removing unreachable block (ram,0x00014c38) */
/* WARNING: Removing unreachable block (ram,0x00014b48) */
/* WARNING: Removing unreachable block (ram,0x00014ae0) */
/* WARNING: Removing unreachable block (ram,0x00014ca4) */
/* WARNING: Removing unreachable block (ram,0x00014abc) */
/* WARNING: Removing unreachable block (ram,0x00014a28) */
/* WARNING: Removing unreachable block (ram,0x00014aa4) */
/* WARNING: Removing unreachable block (ram,0x00014968) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00030338 : 0x000149f8 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __uClibc_main(code *param_1,int param_2,int **param_3,code *param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7)

{
  code **ppcVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int unaff_g7;
  __uid_t _Var6;
  __uid_t _Var7;
  char *pcVar8;
  int __status;
  __gid_t _Var9;
  __gid_t _Var10;
  int **__src;
  int *piVar11;
  int iVar12;
  undefined auStack152 [16];
  int local_88;
  int local_84;
  undefined auStack120 [92];
  ulong local_1c;
  ulong local_14;
  ulong local_c;
  ulong local_4;
  
  __libc_stack_end = param_7;
  environ = param_3 + param_2 + 1;
  if (environ == (int **)*param_3) {
    environ = param_3 + param_2;
  }
  __rtld_fini = param_6;
  memset(auStack120,0,0x78);
  __src = environ;
  do {
    piVar4 = *__src;
    __src = __src + 1;
  } while (piVar4 != (int *)0x0);
  while (piVar4 = *__src, piVar4 != (int *)0x0) {
    if (piVar4 < (int *)0xf) {
      memcpy(auStack120 + (int)piVar4 * 8,__src,8);
      __src = __src + 2;
    }
    else {
      __src = __src + 2;
    }
  }
  _dl_aux_init(auStack120);
  __uClibc_init();
  __pagesize = _dl_pagesize;
  if (local_1c == 0xffffffff) {
    _Var6 = getuid();
    _Var7 = geteuid();
    if (_Var6 == _Var7) {
      _Var9 = getgid();
      _Var10 = getegid();
      if (_Var9 == _Var10) goto LAB_00014a68;
    }
LAB_00014ad0:
    __check_one_fd(0,0x20000);
    __check_one_fd(1,0x20002);
    __check_one_fd(2,0x20002);
    __GI__pe_secure = 1;
  }
  else {
LAB_00014a68:
    if ((local_1c != 0xffffffff) && ((local_1c != local_14 || (local_c != local_4))))
    goto LAB_00014ad0;
    __GI__pe_secure = 0;
  }
  __uclibc_progname = *param_3;
  piVar11 = piVar4;
  uVar3 = param_5;
  if (__uclibc_progname != (int *)0x0) {
    program_invocation_name = __uclibc_progname;
    pcVar8 = rindex((char *)*param_3,0x2f);
    if (pcVar8 == (char *)0x0) {
      program_invocation_short_name = *param_3;
      uVar3 = param_5;
    }
    else {
      program_invocation_short_name = (int *)(pcVar8 + 1);
      uVar3 = param_5;
    }
  }
  while (__app_fini = uVar3, piVar11 != (int *)0x0) {
    (*(code *)(&__CTOR_LIST__)[(int)piVar11])();
    piVar11 = (int *)((int)piVar11 + 1);
    uVar3 = __app_fini;
  }
  if (param_4 != (code *)0x0) {
    (*param_4)();
  }
  while (piVar4 != (int *)0x0) {
    ppcVar1 = (code **)(&__CTOR_LIST__ + (int)piVar4);
    piVar4 = (int *)((int)piVar4 + 1);
    (**ppcVar1)();
  }
  piVar4 = __errno_location();
  *piVar4 = 0;
  piVar4 = __h_errno_location();
  *piVar4 = 0;
  __status = _setjmp((__jmp_buf_tag *)auStack152);
  if (__status == 0) {
    local_88 = *(int *)(unaff_g7 + 0x7c);
    local_84 = *(int *)(unaff_g7 + 0x78);
    *(undefined **)(unaff_g7 + 0x7c) = auStack152;
    __status = (*param_1)(param_2,param_3,environ);
  }
  else {
    func_0x00000000();
    if (PTR_0002e0a0 != (undefined *)0x0) {
      uVar5 = ((int)PTR_0002e0a0 >> 2 ^ (int)PTR_0002e0a0 >> 0xc) & 0x3f;
      do {
        __status = *(int *)PTR_0002e0a0;
        do {
          cVar2 = __sparc32_atomic_locks[uVar5];
          __sparc32_atomic_locks[uVar5] = -1;
        } while (cVar2 != '\0');
        iVar12 = *(int *)PTR_0002e0a0;
        if (iVar12 == __status) {
          *(int *)PTR_0002e0a0 = __status + -1;
        }
        __sparc32_atomic_locks[uVar5] = 0;
      } while (iVar12 != __status);
      if (__status != 1) {
        sw_trap(0x10);
        __status = 0;
        goto LAB_00014c94;
      }
    }
    __status = 0;
  }
LAB_00014c94:
                    /* WARNING: Subroutine does not return */
  exit(__status);
}


/* WARNING: Removing unreachable block (ram,0x00014e54) */
/* WARNING: Removing unreachable block (ram,0x00014eb4) */
/* WARNING: Removing unreachable block (ram,0x00014ee8) */

uint * __lll_lock_wait_private(uint *param_1)

{
  char cVar1;
  uint uVar2;
  
  while( true ) {
    do {
      cVar1 = *(char *)param_1;
      *(undefined *)param_1 = 0xff;
    } while (cVar1 != '\0');
    uVar2 = *param_1;
    if ((uVar2 & 0xffffff) == 1) {
      *param_1 = 2;
    }
    else {
      *(undefined *)param_1 = 0;
    }
    if ((uVar2 & 0xffffff) != 0) {
      sw_trap(0x10);
    }
    do {
      cVar1 = *(char *)param_1;
      *(undefined *)param_1 = 0xff;
    } while (cVar1 != '\0');
    if ((*param_1 & 0xffffff) == 0) break;
    *(undefined *)param_1 = 0;
  }
  *param_1 = 2;
  return param_1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00014ef8) */
/* WARNING: Removing unreachable block (ram,0x00014f18) */
/* WARNING: Removing unreachable block (ram,0x00014fd0) */

int raise(int __sig)

{
  uint uVar1;
  int unaff_g7;
  bool in_i_cf;
  
  sw_trap(0x10);
  sw_trap(0x10);
  uVar1 = 1;
  if (in_i_cf) {
    uVar1 = 0xffffffff;
  }
  sw_trap(0x10);
  sw_trap(0x10);
  if (in_i_cf) {
    uVar1 = -uVar1;
  }
  if (0xfffff000 < uVar1) {
    *(int *)(unaff_g7 + -8) = -uVar1;
    uVar1 = 0xffffffff;
  }
  sw_trap(0x10);
  return uVar1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x000150b8) */
/* WARNING: Removing unreachable block (ram,0x00014fd8) */
/* WARNING: Removing unreachable block (ram,0x00014fe0) */

uint __libc_enable_asynccancel(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_g7;
  uint uVar6;
  bool bVar7;
  
  uVar3 = (unaff_g7 + 0x80 >> 2 ^ unaff_g7 + 0x80 >> 0xc) & 0x3f;
  uVar4 = *(uint *)(unaff_g7 + 0x80);
  uVar5 = unaff_g7;
  while( true ) {
    do {
      if (uVar4 == (uVar4 | 2)) {
        return uVar4;
      }
      do {
        cVar1 = __sparc32_atomic_locks[uVar3];
        __sparc32_atomic_locks[uVar3] = -1;
      } while (cVar1 != '\0');
      uVar6 = *(uint *)(uVar5 + 0x80);
      if (uVar4 == uVar6) {
        *(uint *)(uVar5 + 0x80) = uVar4 | 2;
      }
      __sparc32_atomic_locks[uVar3] = 0;
      bVar7 = uVar4 != uVar6;
      uVar2 = uVar4 & 0xffffffbb;
      uVar4 = uVar6;
    } while (bVar7);
    if ((uVar2 | 2) != 10) break;
    *(undefined4 *)(uVar5 + 0x21c) = 0xffffffff;
    uVar3 = (unaff_g7 + 0x80 >> 2 ^ unaff_g7 + 0x80 >> 0xc) & 0x3f;
    uVar5 = *(uint *)(unaff_g7 + 0x80);
    while( true ) {
      do {
        cVar1 = __sparc32_atomic_locks[uVar3];
        __sparc32_atomic_locks[uVar3] = -1;
      } while (cVar1 != '\0');
      bVar7 = uVar5 == *(uint *)(unaff_g7 + 0x80);
      if (bVar7) {
        uVar5 = uVar5 | 0x10;
        *(uint *)(unaff_g7 + 0x80) = uVar5;
      }
      __sparc32_atomic_locks[uVar3] = 0;
      if (bVar7) break;
      uVar5 = *(uint *)(unaff_g7 + 0x80);
    }
    func_0x00000000(*(undefined4 *)(unaff_g7 + 0x7c));
  }
  return uVar6;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x000150d0) */
/* WARNING: Removing unreachable block (ram,0x000150d8) */
/* WARNING: Removing unreachable block (ram,0x0001517c) */

uint __libc_disable_asynccancel(uint param_1)

{
  char cVar1;
  uint uVar2;
  int unaff_g7;
  uint uVar3;
  uint uVar4;
  
  if ((param_1 & 2) == 0) {
    uVar2 = (unaff_g7 + 0x80 >> 2 ^ unaff_g7 + 0x80 >> 0xc) & 0x3f;
    uVar4 = *(uint *)(unaff_g7 + 0x80);
    do {
      uVar3 = uVar4;
      do {
        cVar1 = __sparc32_atomic_locks[uVar2];
        __sparc32_atomic_locks[uVar2] = -1;
      } while (cVar1 != '\0');
      uVar4 = *(uint *)(unaff_g7 + 0x80);
      if (uVar3 == uVar4) {
        *(uint *)(unaff_g7 + 0x80) = uVar3 & 0xfffffffd;
      }
      __sparc32_atomic_locks[uVar2] = 0;
    } while (uVar3 != uVar4);
    while ((uVar3 & 0xc) == 4) {
      sw_trap(0x10);
      uVar3 = *(uint *)(unaff_g7 + 0x80);
    }
  }
  return param_1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x000152e0) */
/* WARNING: Removing unreachable block (ram,0x00015184) */
/* WARNING: Removing unreachable block (ram,0x00015254) */
/* WARNING: Removing unreachable block (ram,0x0001518c) */

int __libc_setup_tls(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  size_t __n;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *__src;
  
  __src = _dl_phdr;
  uVar8 = param_2;
  if (_dl_phdr != (int *)0x0) {
    while (__src < _dl_phdr + _dl_phnum * 8) {
      if (*__src == 7) {
        uVar4 = __src[7];
        iVar5 = __src[5];
        __n = __src[4];
        __src = (int *)__src[2];
        if (param_2 < uVar4) {
          uVar8 = uVar4;
        }
        goto LAB_0001521c;
      }
      __src = __src + 8;
    }
    __src = (int *)0x0;
  }
  uVar4 = 0;
  __n = 0;
  iVar5 = 0;
LAB_0001521c:
  iVar7 = ((_dl_tls_static_size + -1 + param_2 + iVar5) / param_2) * param_2;
  pvVar3 = sbrk(param_1 + uVar8 + iVar7);
  static_dtv._0_4_ = 0x3e;
  uVar6 = (int)pvVar3 + (uVar8 - 1) & -uVar8;
  iVar1 = uVar4 - 1;
  if (uVar4 == 0) {
    iVar1 = 0;
  }
  uVar2 = uVar4;
  if (uVar4 == 0) {
    uVar2 = 1;
  }
  iVar1 = ((uint)(iVar1 + iVar5) / uVar2) * uVar2;
  static_dtv[20] = 1;
  static_dtv._16_4_ = (void *)(uVar6 + (iVar7 - iVar1));
  static_map._40_4_ = iVar1;
  memcpy(static_dtv._16_4_,__src,__n);
  *(undefined4 *)(uVar6 + iVar7 + 4) = 0x30a7c;
  _dl_tls_static_used = iVar1 + param_1;
  if (uVar8 < 0x10) {
    uVar8 = 0x10;
  }
  _dl_tls_static_size = _dl_tls_static_size + 0xf + _dl_tls_static_used & 0xfffffff0;
  static_map._20_4_ = __src;
  static_map._24_4_ = __n;
  static_map._28_4_ = iVar5;
  static_map._32_4_ = uVar4;
  static_map._44_4_ = 1;
  static_slotinfo._0_4_ = 0x40;
  static_slotinfo._28_4_ = static_map;
  _dl_tls_static_align = uVar8;
  _dl_tls_max_dtv_idx = 1;
  _dl_tls_dtv_slotinfo_list = static_slotinfo;
  _dl_tls_static_nelem = 1;
  return _dl_tls_static_used;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x000153b0) */
/* WARNING: Removing unreachable block (ram,0x000153bc) */
/* WARNING: Removing unreachable block (ram,0x0001544c) */

undefined4 _dl_tls_setup(void)

{
  _dl_tls_static_size = _dl_tls_static_size + 0x45f & 0xfffffff0;
  static_slotinfo._0_4_ = 0x40;
  _dl_tls_static_used = 0x450;
  _dl_tls_static_align = 0x10;
  _dl_tls_max_dtv_idx = 1;
  _dl_tls_dtv_slotinfo_list = static_slotinfo;
  _dl_tls_static_nelem = 1;
  return 0;
}


/* WARNING: Removing unreachable block (ram,0x00015454) */
/* WARNING: Removing unreachable block (ram,0x0001545c) */

void __pthread_initialize_minimal
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  __libc_setup_tls(0x450,0x10,param_3,param_4,param_5,param_6);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00015464) */
/* WARNING: Removing unreachable block (ram,0x00015490) */

void _dl_nothread_init_static_tls(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_g7;
  void *__dest;
  size_t __n;
  
  iVar1 = *(int *)(param_1 + 0x2c) * 8;
  iVar2 = *(int *)(unaff_g7 + 4);
  __dest = (void *)(unaff_g7 - *(int *)(param_1 + 0x28));
  *(void **)(iVar2 + iVar1) = __dest;
  __n = *(size_t *)(param_1 + 0x18);
  *(undefined *)(iVar2 + iVar1 + 4) = 1;
  __dest = mempcpy(__dest,*(void **)(param_1 + 0x14),__n);
  memset(__dest,0,*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18));
  return;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x000154b0) */
/* WARNING: Removing unreachable block (ram,0x000154b8) */
/* WARNING: Removing unreachable block (ram,0x00015508) */

int _dl_aux_init(int param_1)

{
  _dl_pagesize = *(int *)(param_1 + 0x34);
  if (_dl_pagesize == 0) {
    _dl_pagesize = 0x1000;
  }
  _dl_phdr = *(undefined4 *)(param_1 + 0x1c);
  _dl_phnum = *(undefined4 *)(param_1 + 0x2c);
  return param_1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00015548) */
/* WARNING: Removing unreachable block (ram,0x00015510) */
/* WARNING: Removing unreachable block (ram,0x00015518) */

undefined4 remove_slotinfo(int param_1,uint *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if ((uint)(param_1 - param_3) < *param_2) {
    puVar2 = param_2 + (param_1 - param_3) * 3;
    if (puVar2[4] != 0) {
      puVar2[4] = 0;
      puVar2[2] = _dl_tls_generation + 1;
    }
    if (_dl_tls_max_dtv_idx != param_1) {
      return 1;
    }
  }
  else {
    if (param_2[1] != 0) {
      iVar4 = remove_slotinfo(param_1,param_2[1],*param_2 + param_3,param_4);
      if (iVar4 != 0) {
        return 1;
      }
      param_1 = param_3 + *param_2;
    }
  }
  uVar1 = 0;
  if (param_3 == 0) {
    uVar1 = _dl_tls_static_nelem + 1;
  }
  uVar5 = param_1 - param_3;
  iVar4 = uVar5 - uVar1;
  do {
    iVar3 = param_3 + -1 + uVar5;
    if (uVar5 < uVar1 || iVar4 == 0) {
      return 0;
    }
    uVar5 = uVar5 - 1;
    iVar4 = uVar5 - uVar1;
  } while (param_2[uVar5 * 3 + 4] == 0);
  _dl_tls_max_dtv_idx = iVar3;
  return 1;
}


/* WARNING: Removing unreachable block (ram,0x0001563c) */
/* WARNING: Removing unreachable block (ram,0x00015678) */

int _dl_build_local_scope(int *param_1,int param_2)

{
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  
  *param_1 = param_2;
  piVar3 = param_1 + 1;
  ppiVar2 = *(int ***)(param_2 + 0x5c);
  *(ushort *)(param_2 + 0x4e) = *(ushort *)(param_2 + 0x4e) | 0x20;
  while (ppiVar2 != (int **)0x0) {
    if ((*(ushort *)((int)ppiVar2[1] + 0x4e) & 0x20) == 0) {
      iVar1 = _dl_build_local_scope(piVar3);
      piVar3 = piVar3 + iVar1;
      ppiVar2 = (int **)*ppiVar2;
    }
    else {
      ppiVar2 = (int **)*ppiVar2;
    }
  }
  return (int)((int)piVar3 - (int)param_1) >> 2;
}


/* WARNING: Removing unreachable block (ram,0x0001569c) */
/* WARNING: Removing unreachable block (ram,0x00015724) */

int * check_match(int *param_1,int param_2,char *param_3,byte param_4)

{
  short sVar1;
  int iVar2;
  
  if (param_1[1] == 0) {
    if ((*(byte *)(param_1 + 3) & 0xf) != 6) {
      return (int *)0;
    }
    sVar1 = *(short *)((int)param_1 + 0xe);
  }
  else {
    sVar1 = *(short *)((int)param_1 + 0xe);
  }
  if ((sVar1 == 0 & param_4) == 0) {
    if ((((uint)*(byte *)(param_1 + 3) & 0xf) - 5 < 2) || (((uint)*(byte *)(param_1 + 3) & 0xf) < 3)
       ) {
      iVar2 = strcmp((char *)(param_2 + *param_1),param_3);
      if (iVar2 != 0) {
        param_1 = (int *)0x0;
      }
    }
    else {
      param_1 = (int *)0x0;
    }
  }
  else {
    param_1 = (int *)0x0;
  }
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x00015740) */

int * _dl_run_init_array(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = param_1[0x34];
  iVar6 = 0;
  if (iVar2 != 0) {
    uVar4 = param_1[0x36];
    iVar5 = *param_1;
    iVar1 = 0;
    while (iVar3 = iVar6 * 4, (uVar4 >> 2) + iVar1 != 0) {
      iVar6 = iVar6 + 1;
      (**(code **)(iVar2 + iVar5 + iVar3))();
      iVar1 = -iVar6;
    }
  }
  return param_1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001578c) */
/* WARNING: Removing unreachable block (ram,0x00015794) */
/* WARNING: Removing unreachable block (ram,0x000157ac) */

void _dl_app_init_array(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6)

{
  _dl_run_init_array(_dl_loaded_modules,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* WARNING: Removing unreachable block (ram,0x000157b4) */

int * _dl_run_fini_array(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_1[0x35];
  if (iVar1 != 0) {
    iVar2 = *param_1;
    uVar3 = (uint)param_1[0x37] >> 2;
    while( true ) {
      if (uVar3 == 0) break;
      (**(code **)(iVar1 + iVar2 + (uVar3 - 1) * 4))();
      uVar3 = uVar3 - 1;
    }
  }
  return param_1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00015ad0) */
/* WARNING: Removing unreachable block (ram,0x00015d30) */
/* WARNING: Removing unreachable block (ram,0x00015c18) */
/* WARNING: Removing unreachable block (ram,0x00015c38) */
/* WARNING: Removing unreachable block (ram,0x00015dc4) */
/* WARNING: Removing unreachable block (ram,0x00015948) */
/* WARNING: Removing unreachable block (ram,0x00015a38) */
/* WARNING: Removing unreachable block (ram,0x00015804) */
/* WARNING: Removing unreachable block (ram,0x00015990) */
/* WARNING: Removing unreachable block (ram,0x00015940) */
/* WARNING: Removing unreachable block (ram,0x00015928) */
/* WARNING: Removing unreachable block (ram,0x00015c30) */
/* WARNING: Removing unreachable block (ram,0x00015da0) */
/* WARNING: Removing unreachable block (ram,0x00015d0c) */
/* WARNING: Removing unreachable block (ram,0x0001580c) */
/* WARNING: Removing unreachable block (ram,0x000158a0) */
/* WARNING: Removing unreachable block (ram,0x00015868) */

undefined4 do_dlclose(void **param_1,uint param_2)

{
  short sVar1;
  void *__ptr;
  void *__ptr_00;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  void **ppvVar5;
  void *__ptr_01;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  undefined *puVar9;
  void *__ptr_02;
  int iVar10;
  undefined **ppuVar11;
  void **ppvVar12;
  int unaff_g7;
  undefined4 *__ptr_03;
  void **__ptr_04;
  int **ppiVar13;
  int **ppiVar14;
  uint uVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  char cVar20;
  code *pcVar21;
  
  ppuVar16 = &_GLOBAL_OFFSET_TABLE_;
  if (_dl_symbol_tables != param_1) {
    ppvVar5 = _dl_handles;
    __ptr_04 = (void **)0x0;
    do {
      ppvVar12 = __ptr_04;
      __ptr_04 = ppvVar5;
      if (__ptr_04 == (void **)0x0) {
        _dl_error_number = 10;
        return 1;
      }
      ppvVar5 = (void **)__ptr_04[1];
    } while (__ptr_04 != param_1);
    if (ppvVar12 != (void **)0x0) {
      *(void ***)(ppvVar12 + 1) = ppvVar5;
      ppvVar5 = _dl_handles;
    }
    _dl_handles = ppvVar5;
    __ptr = *param_1;
    if (*(short *)((int)__ptr + 0x4c) == 1) {
      __ptr_01 = *(void **)((int)__ptr + 0x40);
      ppiVar13 = (int **)((int)_dl_loaded_modules + 0x40);
LAB_000158c4:
      ppiVar14 = ppiVar13;
      ppiVar13 = (int **)0x0;
      if (ppiVar14 == (int **)0x0) goto LAB_000158e0;
      ppiVar13 = (int **)ppiVar14[2];
      if (ppiVar13 == (int **)0x0) goto LAB_000158e0;
      ppvVar5 = (void **)*ppiVar13;
LAB_000159a8:
      if (__ptr == *ppvVar5) {
        ppiVar13 = (int **)ppiVar13[2];
LAB_000158e0:
        __ptr = (void *)0x0;
LAB_000158e4:
        do {
          __ptr_00 = param_1[3];
          while( true ) {
            if (__ptr_00 <= __ptr) {
              puVar18 = (undefined *)0x0;
              puVar17 = (undefined *)0x0;
              cVar20 = '\0';
              __ptr = (void *)0x0;
              param_2 = 0xffffffff;
              goto LAB_0001590c;
            }
            piVar7 = *(int **)((int)param_1[2] + (int)__ptr * 4);
            sVar1 = *(short *)(piVar7 + 0x13);
            *(short *)(piVar7 + 0x13) = sVar1 + -1;
            if (sVar1 != 1) break;
            if ((piVar7[0x28] == 0) && (piVar7[0x35] == 0)) {
              __ptr = (void *)((int)__ptr + 1);
              goto LAB_000158e4;
            }
            if (param_2 == 0) {
              __ptr = (void *)((int)__ptr + 1);
              goto LAB_000158e4;
            }
            if ((*(ushort *)((int)piVar7 + 0x4e) & 8) != 0) {
              __ptr = (void *)((int)__ptr + 1);
              goto LAB_000158e4;
            }
            *(ushort *)((int)piVar7 + 0x4e) = *(ushort *)((int)piVar7 + 0x4e) | 8;
            if (piVar7[0x35] == 0) {
              iVar10 = piVar7[0x28];
            }
            else {
              _dl_run_fini_array(piVar7);
              iVar10 = piVar7[0x28];
            }
            __ptr = (void *)((int)__ptr + 1);
            if (iVar10 == 0) goto LAB_000158e4;
            (*(code *)(iVar10 + *piVar7))();
            __ptr_00 = param_1[3];
          }
          __ptr = (void *)((int)__ptr + 1);
        } while( true );
      }
      goto LAB_000158c4;
    }
    *(short *)((int)__ptr + 0x4c) = *(short *)((int)__ptr + 0x4c) + -1;
    free(param_1);
  }
  return 0;
LAB_0001590c:
  if (__ptr < param_1[3]) {
    __ptr_00 = *(void **)((int)param_1[2] + (int)__ptr * 4);
    if (*(short *)((int)__ptr_00 + 0x4c) == 0) {
      piVar7 = *(int **)((int)__ptr_00 + 0xfc);
      iVar10 = 0;
      uVar15 = 0;
      while (iVar10 != *(int *)((int)__ptr_00 + 0xf8)) {
        if (*piVar7 == 1) {
          uVar3 = piVar7[2];
          if (uVar3 < param_2) {
            param_2 = uVar3;
          }
          if (uVar15 < uVar3 + piVar7[5]) {
            uVar15 = uVar3 + piVar7[5];
          }
        }
        piVar7 = piVar7 + 8;
        iVar10 = iVar10 + 1;
      }
      if (*(int *)((int)__ptr_00 + 0x1c) != 0) {
        if (ppuVar16[0xb1f] == (undefined *)0x0) {
LAB_00015b04:
          puVar6 = *(undefined **)((int)__ptr_00 + 0x28);
        }
        else {
          iVar10 = remove_slotinfo(*(undefined4 *)((int)__ptr_00 + 0x2c),ppuVar16[0xb1f],0,
                                   (uint)(*(ushort *)((int)__ptr_00 + 0x4e) >> 2) & 1);
          if (iVar10 == 0) {
            ppuVar16[0xb1e] = ppuVar16[0xb22];
            goto LAB_00015b04;
          }
          puVar6 = *(undefined **)((int)__ptr_00 + 0x28);
        }
        puVar19 = puVar18;
        if (puVar6 == (undefined *)0x0) {
          iVar8 = *(int *)(unaff_g7 + 4);
          iVar10 = *(int *)((int)__ptr_00 + 0x2c) * 8;
          cVar20 = *(char *)(iVar8 + iVar10 + 4);
          if (cVar20 != '\0') goto LAB_00015b48;
          __ptr_02 = *(void **)(iVar8 + iVar10);
          if (__ptr_02 != (void *)0xffffffff) {
            free(__ptr_02);
            *(undefined4 *)(iVar8 + *(int *)((int)__ptr_00 + 0x2c) * 8) = 0xffffffff;
          }
        }
        else {
          puVar9 = puVar6 + -*(int *)((int)__ptr_00 + 0x1c);
          puVar19 = puVar6;
          if ((puVar17 == (undefined *)0x0) || (puVar6 == puVar17)) {
            puVar17 = puVar9;
            puVar19 = puVar18;
            if (puVar18 == (undefined *)0x0) {
              puVar19 = puVar6;
            }
          }
          else {
            if (puVar18 != puVar9) {
              ppuVar11 = ppuVar16 + 0xa9c;
              if (puVar18 == *ppuVar11) {
                *ppuVar11 = puVar17;
                puVar17 = puVar9;
              }
              else {
                if (puVar6 == *ppuVar11) {
                  *ppuVar11 = puVar9;
                  puVar19 = puVar18;
                }
                else {
                  puVar19 = puVar18;
                  if (puVar18 < puVar6) {
                    puVar17 = puVar9;
                    puVar19 = puVar6;
                  }
                }
              }
            }
          }
        }
        cVar20 = '\x01';
        puVar18 = puVar19;
      }
LAB_00015b48:
      uVar3 = -(int)ppuVar16[0x8c];
      param_2 = param_2 & uVar3;
      uVar3 = (uint)(ppuVar16[0x8c] + (uVar15 - 1)) & uVar3;
      if (param_2 < uVar3) {
        uVar15 = *(uint *)((int)__ptr_00 + 0x38);
        sw_trap(0x10);
        if (uVar3 < param_2) {
          uVar15 = -uVar15;
        }
        if (uVar15 < 0xfffff001) {
          __ptr_03 = *(undefined4 **)((int)__ptr_00 + 0x60);
        }
        else {
          ppuVar16[0x9a6] = (undefined *)-uVar15;
          __ptr_03 = *(undefined4 **)((int)__ptr_00 + 0x60);
        }
      }
      else {
        __ptr_03 = *(undefined4 **)((int)__ptr_00 + 0x60);
      }
      while (__ptr_03 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)*__ptr_03;
        free(__ptr_03);
        __ptr_03 = puVar2;
      }
      __ptr_02 = _dl_loaded_modules;
      if (__ptr_00 == _dl_loaded_modules) {
        _dl_loaded_modules = *(void **)((int)__ptr_00 + 0xc);
        if (_dl_loaded_modules != (void *)0x0) {
          *(undefined4 *)((int)_dl_loaded_modules + 0x10) = 0;
        }
      }
      else {
        do {
          pvVar4 = __ptr_02;
          if (pvVar4 == (void *)0x0) goto LAB_00015be8;
          __ptr_02 = *(void **)((int)pvVar4 + 0xc);
        } while (__ptr_00 != *(void **)((int)pvVar4 + 0xc));
        iVar10 = *(int *)((int)__ptr_00 + 0xc);
        *(int *)((int)pvVar4 + 0xc) = iVar10;
        if (iVar10 != 0) {
          *(void **)(iVar10 + 0x10) = pvVar4;
        }
      }
LAB_00015be8:
      if (_dl_symbol_tables != (void **)0x0) {
        if (__ptr_00 == *_dl_symbol_tables) {
          _dl_symbol_tables = (void **)_dl_symbol_tables[4];
          if (_dl_symbol_tables != (void **)0x0) {
            _dl_symbol_tables[5] = (void *)0x0;
          }
        }
        else {
          ppvVar5 = _dl_symbol_tables;
          __ptr_04 = (void **)_dl_symbol_tables[4];
          while (__ptr_04 != (void **)0x0) {
            if (__ptr_00 == *__ptr_04) {
              __ptr_02 = __ptr_04[4];
              free(__ptr_04);
              ppvVar5[4] = __ptr_02;
              if (__ptr_02 != (void *)0x0) {
                *(void ***)((int)__ptr_02 + 0x14) = ppvVar5;
              }
              break;
            }
            ppvVar5 = __ptr_04;
            __ptr_04 = (void **)__ptr_04[4];
          }
        }
      }
      free(*(void **)((int)__ptr_00 + 4));
      if (__ptr_00 != *param_1) {
        free(*(void **)((int)__ptr_00 + 0x40));
      }
      free(__ptr_00);
      __ptr = (void *)((int)__ptr + 1);
    }
    else {
      __ptr = (void *)((int)__ptr + 1);
    }
    goto LAB_0001590c;
  }
  if (ppiVar14 != (int **)0x0) {
    *(int ***)(ppiVar14 + 2) = ppiVar13;
  }
  free(__ptr_01);
  __ptr = param_1[4];
  while (__ptr != (void *)0x0) {
    __ptr_00 = *(void **)((int)__ptr + 0x10);
    free(__ptr);
    __ptr = __ptr_00;
  }
  free(param_1[2]);
  free(param_1);
  if (cVar20 != '\0') {
    puVar6 = ppuVar16[0xb21] + 1;
    ppuVar16[0xb21] = puVar6;
    if (puVar6 == (undefined *)0x0) {
      sw_trap(0x10);
      __ptr = (void *)0xffffffe2;
      ppvVar5 = (void **)&DAT_00002698;
      ppuVar16 = ppuVar16 + 0x9a6;
      *ppuVar16 = (undefined *)0xffffffe2;
      goto LAB_000159a8;
    }
    if (puVar18 == ppuVar16[0xa9c]) {
      ppuVar16[0xa9c] = puVar17;
    }
  }
  puVar17 = ppuVar16[0x9a5];
  if (puVar17 == (undefined *)0x0) {
    return 0;
  }
  pcVar21 = *(code **)(puVar17 + 8);
  if (pcVar21 == (code *)0x0) {
    return 0;
  }
  *(undefined4 *)(puVar17 + 0xc) = 2;
  (*pcVar21)();
  *(undefined4 *)(ppuVar16[0x9a5] + 0xc) = 0;
  (*pcVar21)();
  return 0;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00015e48) */
/* WARNING: Removing unreachable block (ram,0x00015e50) */
/* WARNING: Removing unreachable block (ram,0x00015e68) */

void _dl_app_fini_array(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6)

{
  _dl_run_fini_array(_dl_loaded_modules,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00015e84) */
/* WARNING: Removing unreachable block (ram,0x00015ec0) */
/* WARNING: Removing unreachable block (ram,0x00015e70) */
/* WARNING: Removing unreachable block (ram,0x00015e98) */
/* WARNING: Removing unreachable block (ram,0x00015e74) */

undefined4 *
_dl_add_elf_hash_table(char *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *__s;
  char *pcVar7;
  
  __s = (undefined4 *)malloc(0x118);
  memset(__s,0,0x118);
  puVar2 = __s;
  if (_dl_loaded_modules != (undefined4 *)0x0) {
    puVar2 = _dl_loaded_modules;
    puVar3 = (undefined4 *)_dl_loaded_modules[3];
    while (puVar3 != (undefined4 *)0x0) {
      puVar2 = puVar3;
      puVar3 = (undefined4 *)puVar3[3];
    }
    *(undefined4 **)(puVar2 + 3) = __s;
    *(undefined4 **)(__s + 4) = puVar2;
    puVar2 = _dl_loaded_modules;
  }
  _dl_loaded_modules = puVar2;
  __s[3] = 0;
  *(undefined2 *)((int)__s + 0x4e) = 0;
  pcVar7 = strdup(param_1);
  *(char **)(__s + 1) = pcVar7;
  __s[2] = param_4;
  __s[0xf] = 3;
  piVar4 = (int *)param_3[4];
  if (piVar4 == (int *)0x0) {
    *__s = param_2;
  }
  else {
    iVar1 = *piVar4;
    __s[0x15] = iVar1;
    iVar5 = piVar4[1];
    *(int **)(__s + 0x16) = piVar4 + 2;
    __s[0x19] = iVar5;
    *(int **)(__s + 0x1a) = piVar4 + 2 + iVar1;
    *__s = param_2;
  }
  iVar1 = 0;
  uVar6 = *param_3;
  while( true ) {
    *(undefined4 *)((int)__s + iVar1 + 0x6c) = uVar6;
    iVar1 = iVar1 + 4;
    if (iVar1 == 0x8c) break;
    uVar6 = *(undefined4 *)((int)param_3 + iVar1);
  }
  return __s;
}


/* WARNING: Removing unreachable block (ram,0x00015f54) */
/* WARNING: Removing unreachable block (ram,0x00016104) */

int _dl_find_hash(byte *param_1,int *param_2,int *param_3,uint param_4,int *param_5)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  bool bVar16;
  
  if (((param_5 == (int *)0x0) || (iVar9 = *param_5, iVar9 == 0)) ||
     ((*(byte *)(iVar9 + 0xd) & 3) != 3)) {
    uVar10 = 0xffffffff;
    piVar15 = (int *)0x0;
    iVar9 = 0;
    while ((param_2 != (int *)0x0 && (iVar11 = 0, iVar9 == 0))) {
      iVar12 = param_2[1];
      while (iVar11 != iVar12) {
        piVar15 = *(int **)(*param_2 + iVar11 * 4);
        if (((((uint)piVar15[0x14] >> 8 ^ 1) & (uint)(param_3 != (int *)0x0)) == 0) ||
           (param_3 == piVar15)) {
LAB_0001602c:
          if ((param_4 & 2) == 0) {
            uVar8 = piVar15[0x15];
LAB_00016048:
            if (uVar8 != 0) {
              iVar13 = piVar15[0x21];
              if (uVar10 == 0xffffffff) {
                uVar10 = 0;
                pbVar4 = param_1;
                while (bVar1 = *pbVar4, bVar1 != 0) {
                  pbVar4 = pbVar4 + 1;
                  uVar10 = (uint)bVar1 + uVar10 * 0x10;
                  uVar10 = uVar10 & 0xfffffff ^ uVar10 >> 0x18 & 0xf0;
                }
              }
              uVar5 = 0;
              uVar7 = uVar8;
              while (bVar16 = -1 < (int)uVar7, uVar7 = uVar7 * 2, uVar3 = uVar10, bVar16) {
                uVar5 = uVar5 + 1;
              }
LAB_000160b0:
              uVar5 = uVar5 - 1;
              if (2 < uVar5) {
                uVar7 = uVar8 << ((byte)uVar5 & 0x1f);
                bVar16 = uVar3 < uVar7;
                if ((int)uVar7 < 0) goto LAB_000160d0;
                do {
                  if (bVar16) break;
                  uVar3 = uVar3 - uVar7;
                  uVar7 = uVar7 * 2;
                  bVar16 = uVar3 < uVar7;
                } while (-1 < (int)uVar7);
                goto LAB_000160b0;
              }
LAB_000160d0:
              while (uVar8 <= uVar3) {
                uVar3 = uVar3 - uVar8;
              }
              iVar6 = piVar15[0x20];
              iVar14 = *(int *)(piVar15[0x16] + uVar3 * 4);
              while (iVar14 != 0) {
                iVar9 = check_match(iVar13 + iVar14 * 0x10,iVar6,param_1,param_4);
                if (iVar9 != 0) goto LAB_00015ff4;
                iVar14 = *(int *)(piVar15[0x1a] + iVar14 * 4);
              }
              goto LAB_00015fe0;
            }
            iVar11 = iVar11 + 1;
          }
          else {
            if (piVar15[0xf] != 1) {
              uVar8 = piVar15[0x15];
              goto LAB_00016048;
            }
            iVar11 = iVar11 + 1;
          }
        }
        else {
          piVar2 = (int *)param_3[0x18];
          while (piVar2 != (int *)0x0) {
            if ((int *)piVar2[1] == piVar15) goto LAB_0001602c;
            piVar2 = (int *)*piVar2;
          }
LAB_00015fe0:
          iVar11 = iVar11 + 1;
        }
      }
      iVar9 = 0;
LAB_00015ff4:
      param_2 = (int *)param_2[2];
    }
    if (iVar9 == 0) {
      return 0;
    }
    param_3 = piVar15;
    if (param_5 == (int *)0x0) goto LAB_00016170;
    *param_5 = iVar9;
  }
  else {
    *param_5 = iVar9;
  }
  *(int **)(param_5 + 1) = param_3;
LAB_00016170:
  if ((*(byte *)(iVar9 + 0xc) & 0xf) == 6) {
    return *(undefined4 *)(iVar9 + 4);
  }
  if (1 < (uint)(*(byte *)(iVar9 + 0xc) >> 4) - 1) {
    return 0;
  }
  return *param_3 + *(int *)(iVar9 + 4);
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00016260) */
/* WARNING: Removing unreachable block (ram,0x000161c4) */
/* WARNING: Removing unreachable block (ram,0x0001622c) */
/* WARNING: Removing unreachable block (ram,0x00016200) */

uint _dl_linux_resolver(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = (param_2 >> 10) + -0xc;
  iVar4 = param_1[0x20] +
          *(int *)(param_1[0x21] + (*(uint *)(iVar3 + param_1[0x32] + 4) >> 8) * 0x10);
  iVar3 = *(int *)(iVar3 + param_1[0x32]) + *param_1;
  uVar2 = _dl_find_hash(iVar4,_dl_loaded_modules + 0x40,param_1,1,0);
  bVar5 = false;
  uVar1 = uVar2 >> 10;
  if (uVar2 == 0) {
    dprintf(2,"%s: Can\'t resolve symbol \'%s\'\n",_dl_progname,iVar4);
    sw_trap(0x10);
    iVar4 = 1;
    if (bVar5) {
      iVar4 = -1;
    }
    uVar1 = -iVar4;
    _dl_errno = uVar1;
  }
  *(uint *)(iVar3 + 4) = uVar1 | 0x3000000;
  *(uint *)(iVar3 + 8) = uVar2 & 0x3ff | 0x81c06000;
  return uVar2;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00016384) */
/* WARNING: Removing unreachable block (ram,0x0001661c) */
/* WARNING: Removing unreachable block (ram,0x0001640c) */
/* WARNING: Removing unreachable block (ram,0x00016430) */
/* WARNING: Removing unreachable block (ram,0x000162b8) */
/* WARNING: Removing unreachable block (ram,0x00016658) */
/* WARNING: Removing unreachable block (ram,0x000163e4) */
/* WARNING: Removing unreachable block (ram,0x000165ec) */
/* WARNING: Removing unreachable block (ram,0x000162c0) */

undefined4
_dl_parse_relocation_information(int **param_1,undefined4 param_2,int *param_3,uint param_4)

{
  void *__dest;
  void *__src;
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  undefined **ppuVar12;
  void **ppvVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  void *local_8;
  void **local_4;
  
  ppuVar12 = &_GLOBAL_OFFSET_TABLE_;
  ppvVar13 = (void **)*param_1;
  pvVar7 = ppvVar13[0x21];
  pvVar8 = ppvVar13[0x20];
  uVar6 = 0;
LAB_000162f8:
  if (param_4 / 0xc == uVar6) {
    return 0;
  }
  pvVar11 = *ppvVar13;
  uVar3 = param_3[1];
  local_4 = (void **)0x0;
  uVar10 = uVar3 >> 8;
  iVar9 = uVar10 * 0x10;
  local_8 = (void *)((int)pvVar7 + iVar9);
  iVar14 = *param_3;
  uVar15 = uVar3 & 0xff;
  __dest = (void *)((int)pvVar11 + iVar14);
  if (uVar10 == 0) {
    iVar1 = *(int *)((int)local_8 + 4);
    ppvVar2 = ppvVar13;
    goto LAB_00016470;
  }
  if ((uVar3 & 0xfb) == 0x4a) goto LAB_00016464;
  uVar3 = 1;
  if (uVar15 != 0x15) {
    uVar3 = (uint)(uVar15 == 0x4c);
  }
  do {
    uVar4 = 2;
    if (uVar15 != 0x13) {
      uVar4 = 0;
    }
    iVar1 = _dl_find_hash((int)pvVar8 + *(int *)((int)pvVar7 + iVar9),param_2,ppvVar13,uVar3 | uVar4
                          ,&local_8);
    ppvVar2 = local_4;
    if ((iVar1 != 0) || ((*(byte *)((int)local_8 + 0xc) & 0xf) == 6)) {
LAB_00016470:
      iVar5 = param_3[2];
LAB_00016474:
      __src = (void *)(iVar5 + iVar1);
      if (uVar15 == 0x13) {
        if (__src != (void *)0x0) {
          memcpy(__dest,__src,*(size_t *)((int)local_8 + 8));
        }
      }
      else {
        if ((int)uVar15 < 0x14) {
          if (uVar15 == 6) {
            __src = (void *)((int)__src - (int)__dest);
          }
          else {
            if ((int)uVar15 < 7) {
              if (uVar15 != 0) {
                if (uVar15 != 3) {
LAB_000164b4:
                  uVar15 = 0xffffffff;
                  goto LAB_000163c8;
                }
                *(void **)((int)pvVar11 + iVar14) = __src;
              }
              goto LAB_00016594;
            }
            if (uVar15 == 9) {
              if (__src == (void *)0x0) {
                __src = *ppvVar13;
              }
              uVar3 = (uint)(iVar5 + (int)__src) >> 10;
              uVar10 = *(uint *)((int)pvVar11 + iVar14) & 0xffc00000;
            }
            else {
              if (uVar15 != 0xc) {
                if (uVar15 != 7) {
                  uVar15 = 0xffffffff;
                  goto LAB_000163c8;
                }
                *(uint *)((int)pvVar11 + iVar14) =
                     *(uint *)((int)pvVar11 + iVar14) & 0xc0000000 |
                     (uint)((int)__src - (int)__dest) >> 2;
                goto LAB_00016594;
              }
              if (__src == (void *)0x0) {
                __src = *ppvVar13;
              }
              uVar3 = iVar5 + (int)__src & 0x3ff;
              uVar10 = *(uint *)((int)pvVar11 + iVar14) & 0xfffffc00;
            }
            __src = (void *)(uVar10 | uVar3);
          }
LAB_0001655c:
          *(void **)((int)pvVar11 + iVar14) = __src;
        }
        else {
          if (uVar15 == 0x16) {
            iVar9 = iVar5 + (int)*ppvVar13;
            iVar5 = *(int *)((int)pvVar11 + iVar14);
          }
          else {
            if ((int)uVar15 < 0x17) {
              if (uVar15 == 0x14) {
                *(void **)((int)pvVar11 + iVar14) = __src;
              }
              else {
                if (uVar15 != 0x15) goto LAB_000164b4;
                *(uint *)((int)__dest + 4) = (uint)__src >> 10 | 0x3000000;
                *(uint *)((int)__dest + 8) = (uint)__src & 0x3ff | 0x81c06000;
              }
              goto LAB_00016594;
            }
            if (uVar15 != 0x4c) {
              if (uVar15 == 0x4e) {
                if (ppvVar2[10] == (void *)0x0) {
                  _dl_allocate_static_tls(ppvVar2);
                  iVar9 = param_3[2];
                }
                else {
                  iVar9 = param_3[2];
                }
                __src = (void *)((*(int *)((int)local_8 + 4) + iVar9) - (int)ppvVar2[10]);
              }
              else {
                if (uVar15 != 0x4a) {
                  uVar15 = 0xffffffff;
                  goto LAB_000163c8;
                }
                __src = ppvVar2[0xb];
              }
              goto LAB_0001655c;
            }
            iVar9 = *(int *)((int)local_8 + 4);
          }
          *(int *)((int)pvVar11 + iVar14) = iVar9 + iVar5;
        }
      }
      goto LAB_00016594;
    }
    if (*(byte *)((int)local_8 + 0xc) >> 4 == 2) {
      iVar5 = param_3[2];
      goto LAB_00016474;
    }
    uVar15 = 1;
LAB_000163c8:
    dprintf(2,(char *)(ppuVar12 + -0x45f8),ppuVar12[0x93]);
    if (uVar10 != 0) {
      dprintf(2,(char *)(ppuVar12 + -0x45f6),(int)pvVar8 + *(int *)((int)pvVar7 + iVar9));
    }
    bVar16 = uVar15 == 0;
    if (uVar15 != 0xffffffff) break;
    dprintf(2,(char *)(ppuVar12 + -0x45f2),(uint)*(byte *)((int)param_3 + 7));
    sw_trap(0x10);
    iVar1 = 1;
    if (bVar16) {
      iVar1 = -1;
    }
    ppuVar12 = ppuVar12 + 0x9a6;
    *ppuVar12 = (undefined *)-iVar1;
LAB_00016464:
    uVar3 = 1;
  } while( true );
  if (uVar15 == 1) {
    dprintf(2,(char *)(ppuVar12 + -0x45ea));
    return 1;
  }
LAB_00016594:
  uVar6 = uVar6 + 1;
  param_3 = param_3 + 3;
  goto LAB_000162f8;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00016668) */
/* WARNING: Removing unreachable block (ram,0x00016678) */
/* WARNING: Removing unreachable block (ram,0x00016690) */

void _dl_parse_lazy_relocation_information
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  _dl_parse_relocation_information
            (param_1,_dl_loaded_modules + 0x40,param_2,param_3,param_5,param_6);
  return;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001672c) */
/* WARNING: Removing unreachable block (ram,0x00016698) */
/* WARNING: Removing unreachable block (ram,0x000166a4) */

int * _dl_protect_relro(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined **ppuVar4;
  bool bVar5;
  char cVar6;
  
  ppuVar4 = &_GLOBAL_OFFSET_TABLE_;
  uVar1 = -_dl_pagesize & *param_1 + param_1[0x40];
  uVar2 = *param_1 + param_1[0x40] + param_1[0x41] & -_dl_pagesize;
  if (uVar1 != uVar2) {
    sw_trap(0x10);
    if (uVar1 < uVar2) {
      uVar1 = -uVar1;
    }
    cVar6 = '\0';
    bVar5 = (int)uVar1 < 0;
    if (uVar1 < 0xfffff001) goto LAB_00016760;
    _dl_errno = -uVar1;
    iVar3 = param_1[1];
    while( true ) {
      dprintf(2,(char *)(ppuVar4 + -0x45e4),iVar3);
      sw_trap(0x10);
      ppuVar4 = ppuVar4 + 0x9a6;
      *ppuVar4 = (undefined *)0x0;
LAB_00016760:
      if (bVar5 == (bool)cVar6) break;
      iVar3 = param_1[1];
    }
  }
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x0001682c) */
/* WARNING: Removing unreachable block (ram,0x000168a8) */
/* WARNING: Removing unreachable block (ram,0x00016770) */
/* WARNING: Removing unreachable block (ram,0x000168d0) */
/* WARNING: Removing unreachable block (ram,0x000167a4) */

int _dl_fixup(int **param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  if (param_1[4] == (int *)0x0) {
    piVar8 = *param_1;
  }
  else {
    iVar6 = _dl_fixup(param_1[4],param_2,param_3);
    if (iVar6 != 0) {
      return iVar6;
    }
    piVar8 = *param_1;
  }
  iVar6 = 1;
  if (piVar8[0x2c] == 0) {
    iVar4 = piVar8[0x22];
    if (iVar4 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      if ((*(ushort *)((int)piVar8 + 0x4e) & 1) == 0) {
        iVar5 = piVar8[0x23] - piVar8[0x1d];
        iVar6 = piVar8[0x3d];
        if (iVar6 != 0) {
          iVar7 = *piVar8;
          iVar2 = iVar6 * 0xc;
          iVar5 = iVar5 + iVar6 * -0xc;
          piVar3 = (int *)(iVar4 + -0xc);
          do {
            iVar6 = iVar6 + -1;
            *(int *)(piVar3[3] + iVar7) = piVar3[5] + iVar7;
            piVar3 = piVar3 + 3;
          } while (iVar6 != 0);
          iVar4 = iVar4 + iVar2;
        }
        iVar6 = _dl_parse_relocation_information(param_1,param_2,iVar4,iVar5);
        *(ushort *)((int)piVar8 + 0x4e) = *(ushort *)((int)piVar8 + 0x4e) | 1;
      }
    }
    if (piVar8[0x33] != 0) {
      param_3 = 2;
    }
    iVar4 = piVar8[0x32];
    if (iVar4 != 0) {
      if ((*(ushort *)((int)piVar8 + 0x4e) & 2) == 0) {
        uVar1 = piVar8[0x14];
      }
      else {
        if (param_3 == 0) {
          return iVar6;
        }
        uVar1 = piVar8[0x14];
        if ((param_3 & uVar1) != 0) {
          return iVar6;
        }
      }
      piVar8[0x14] = param_3 | uVar1;
      if (((param_3 | uVar1) & 2) == 0) {
        _dl_parse_lazy_relocation_information(param_1,iVar4,piVar8[0x1d]);
      }
      else {
        iVar4 = _dl_parse_relocation_information(param_1,param_2,iVar4,piVar8[0x1d]);
        iVar6 = iVar6 + iVar4;
      }
      *(ushort *)((int)piVar8 + 0x4e) = *(ushort *)((int)piVar8 + 0x4e) | 2;
    }
  }
  return iVar6;
}


/* WARNING: Removing unreachable block (ram,0x000168e0) */
/* WARNING: Removing unreachable block (ram,0x000169ac) */
/* WARNING: Removing unreachable block (ram,0x00016a98) */

undefined4 _dl_parse_dynamic_info(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = 0;
LAB_00016904:
  while( true ) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      if (param_4 != 0) {
        if (*(int *)(param_2 + 0x10) == 0) {
          iVar1 = *(int *)(param_2 + 0xc);
        }
        else {
          *(int *)(param_2 + 0x10) = param_4 + *(int *)(param_2 + 0x10);
          iVar1 = *(int *)(param_2 + 0xc);
        }
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_2 + 0x14);
        }
        else {
          *(int *)(param_2 + 0xc) = param_4 + iVar1;
          iVar1 = *(int *)(param_2 + 0x14);
        }
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_2 + 0x18);
        }
        else {
          *(int *)(param_2 + 0x14) = param_4 + iVar1;
          iVar1 = *(int *)(param_2 + 0x18);
        }
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_2 + 0x1c);
        }
        else {
          *(int *)(param_2 + 0x18) = param_4 + iVar1;
          iVar1 = *(int *)(param_2 + 0x1c);
        }
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_2 + 0x5c);
        }
        else {
          *(int *)(param_2 + 0x1c) = param_4 + iVar1;
          iVar1 = *(int *)(param_2 + 0x5c);
        }
        if (iVar1 != 0) {
          *(int *)(param_2 + 0x5c) = param_4 + iVar1;
        }
        return uVar3;
      }
      return uVar3;
    }
    uVar4 = uVar3;
    if (iVar1 < 0x22) break;
    if (iVar1 < 0x70000000) {
      if (iVar1 == 0x6ffffff9) {
        *(int *)(param_2 + 0x88) = param_1[1];
        goto LAB_000169d8;
      }
      if (iVar1 == 0x6ffffffb) {
        uVar2 = param_1[1];
        if ((uVar2 & 1) != 0) {
          *(undefined4 *)(param_2 + 0x60) = 1;
        }
        uVar4 = 0x1000;
        if ((uVar2 & 8) != 0) goto LAB_000169d8;
        param_1 = param_1 + 2;
      }
      else {
        param_1 = param_1 + 2;
      }
    }
    else {
      param_1 = param_1 + 2;
    }
  }
  *(int *)(param_2 + iVar1 * 4) = param_1[1];
  if (iVar1 == 0x15) {
    param_1[1] = param_3;
  }
  else {
    if (iVar1 == 0x18) {
      *(undefined4 *)(param_2 + 0x60) = 1;
    }
    else {
      if (iVar1 == 0x1e) {
        if ((param_1[1] & 8U) == 0) {
          param_1 = param_1 + 2;
          goto LAB_00016904;
        }
        *(undefined4 *)(param_2 + 0x60) = 1;
      }
      else {
        if (iVar1 == 0x16) {
          *(undefined4 *)(param_2 + 0x58) = 1;
        }
        else {
          if (iVar1 == 0x1d) {
            *(undefined4 *)(param_2 + 0x3c) = 0;
          }
          else {
            if (iVar1 != 0xf) {
              param_1 = param_1 + 2;
              goto LAB_00016904;
            }
            if (*(int *)(param_2 + 0x74) == 0) {
              param_1 = param_1 + 2;
              goto LAB_00016904;
            }
            *(undefined4 *)(param_2 + 0x3c) = 0;
          }
        }
      }
    }
  }
LAB_000169d8:
  param_1 = param_1 + 2;
  uVar3 = uVar4;
  goto LAB_00016904;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00016cfc) */
/* WARNING: Removing unreachable block (ram,0x00016cc4) */
/* WARNING: Removing unreachable block (ram,0x00016cd8) */
/* WARNING: Removing unreachable block (ram,0x00016d04) */
/* WARNING: Removing unreachable block (ram,0x00016e10) */
/* WARNING: Removing unreachable block (ram,0x00016fb4) */
/* WARNING: Removing unreachable block (ram,0x00017418) */
/* WARNING: Removing unreachable block (ram,0x00017494) */
/* WARNING: Removing unreachable block (ram,0x000176e0) */
/* WARNING: Removing unreachable block (ram,0x00017574) */
/* WARNING: Removing unreachable block (ram,0x000176b4) */
/* WARNING: Removing unreachable block (ram,0x00017210) */
/* WARNING: Removing unreachable block (ram,0x000173d8) */
/* WARNING: Removing unreachable block (ram,0x00016b2c) */
/* WARNING: Removing unreachable block (ram,0x00016aa0) */
/* WARNING: Removing unreachable block (ram,0x00016cb4) */
/* WARNING: Removing unreachable block (ram,0x00016d98) */
/* WARNING: Removing unreachable block (ram,0x00016f14) */
/* WARNING: Removing unreachable block (ram,0x00017624) */
/* WARNING: Removing unreachable block (ram,0x0001755c) */
/* WARNING: Removing unreachable block (ram,0x00017520) */
/* WARNING: Removing unreachable block (ram,0x00017430) */
/* WARNING: Removing unreachable block (ram,0x00016f5c) */
/* WARNING: Removing unreachable block (ram,0x000172d4) */
/* WARNING: Removing unreachable block (ram,0x00016aa8) */
/* WARNING: Removing unreachable block (ram,0x00017700) */
/* WARNING: Removing unreachable block (ram,0x000170fc) */
/* WARNING: Removing unreachable block (ram,0x0001712c) */
/* WARNING: Removing unreachable block (ram,0x00016b78) */
/* WARNING: Removing unreachable block (ram,0x00017400) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * _dl_load_elf_shared_library(uint param_1,int **param_2,uint param_3)

{
  short sVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint __n;
  int *piVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int *__s;
  bool in_i_cf;
  bool bVar17;
  uint local_e4;
  int local_e0;
  uint local_dc;
  int local_d4;
  ushort local_cc;
  uint local_c8;
  ushort local_c4;
  undefined auStack140 [12];
  undefined4 *local_80;
  int local_34;
  
  sw_trap(0x10);
  uVar7 = param_3;
  if (in_i_cf) {
    uVar7 = -param_3;
  }
  if (uVar7 < 0xfffff001) {
    if (-1 < (int)uVar7) {
      sw_trap(0x10);
      if (uVar7 < 0xfffff001) {
        if ((int)uVar7 < 0) goto LAB_00016b50;
        if (((param_1 & 0x4000000) == 0) || ((local_c4 & 0x800) != 0)) {
          piVar8 = _dl_loaded_modules;
          while (piVar8 != (int *)0x0) {
            if (piVar8[0x42] == 0) {
              if (piVar8[0x43] == (uint)local_cc) {
                if (piVar8[0x44] == local_c8) {
                  *(short *)(piVar8 + 0x13) = *(short *)(piVar8 + 0x13) + 1;
                  *(ushort *)((int)piVar8 + 0x4e) = *(ushort *)((int)piVar8 + 0x4e) | 0x10;
                  sw_trap(0x10);
                  if ((uint)piVar8[0x44] < local_c8) {
                    uVar7 = -uVar7;
                  }
                  goto LAB_00016c70;
                }
                piVar8 = (int *)piVar8[3];
              }
              else {
                piVar8 = (int *)piVar8[3];
              }
            }
            else {
              piVar8 = (int *)piVar8[3];
            }
          }
          local_dc = param_1 & 4;
          if (local_dc == 0) {
            sw_trap(0x10);
            sw_trap(0x10);
            uVar10 = uVar7;
            if (-uVar7 < 0xfffff001) {
              uVar10 = _dl_errno;
            }
            _dl_errno = uVar10;
            bVar17 = _SUB_00000000 < 0x7f454c46;
            if (_SUB_00000000 == 0x7f454c46) {
              if (_DAT_00000010 == 0x30002) {
                uVar11 = 0;
                iVar4 = 0;
                bVar2 = true;
                iVar13 = 0;
                uVar10 = 0xffffffff;
                __s = (int *)0x0;
                piVar16 = _DAT_0000001c;
                while (iVar13 < (int)(uint)_DAT_0000002c) {
                  if (*piVar16 == 2) {
                    if (iVar4 == 0) {
                      iVar4 = piVar16[2];
                    }
                    else {
                      dprintf(2,"%s: \'%s\' has more than one dynamic section\n",_dl_progname,
                              param_3);
                      iVar4 = piVar16[2];
                    }
                    iVar5 = *piVar16;
                  }
                  else {
                    iVar5 = *piVar16;
                  }
                  piVar12 = __s;
                  if (iVar5 == 1) {
                    __n = piVar16[2];
                    if ((uVar10 == 0xffffffff) && (0x1000000 < __n)) {
                      bVar2 = false;
                      uVar10 = __n;
LAB_00017004:
                      iVar5 = piVar16[5];
                    }
                    else {
                      if (bVar2) {
                        if (__n < uVar10) {
                          uVar10 = __n;
                        }
                        goto LAB_00017004;
                      }
                      iVar5 = piVar16[5];
                    }
                    if (uVar11 < __n + iVar5) {
                      uVar11 = __n + iVar5;
                    }
LAB_0001701c:
                    piVar16 = piVar16 + 8;
                    iVar13 = iVar13 + 1;
                    __s = piVar12;
                  }
                  else {
                    if ((iVar5 != 7) || (piVar12 = piVar16, piVar16[5] != 0)) goto LAB_0001701c;
                    iVar13 = iVar13 + 1;
                  }
                }
                uVar11 = -_dl_pagesize & uVar10;
                if (bVar2) {
                  uVar11 = 0;
                }
                sw_trap(0x10);
                bVar17 = uVar11 != 0xffffffff;
                if (uVar11 < 0xfffff001) {
                  bVar17 = false;
                  if (uVar11 != 0xffffffff) {
                    uVar10 = uVar11 - (-_dl_pagesize & uVar10);
                    local_e4 = 0;
                    if (bVar2) {
                      local_e4 = uVar11;
                    }
                    local_e0 = 0;
                    local_d4 = 0;
                    piVar16 = _DAT_0000001c;
                    _dl_library_offset = uVar10;
                    while (local_d4 < (int)(uint)_DAT_0000002c) {
                      if (*piVar16 == 0x6474e552) {
                        local_dc = piVar16[2];
                        local_e0 = piVar16[5];
                      }
                      else {
                        if (*piVar16 == 1) {
                          __n = -_dl_pagesize & piVar16[2];
                          if ((piVar16[6] & 2U) == 0) {
                            uVar6 = uVar11;
                            if (!bVar2) {
                              uVar6 = _dl_library_offset;
                            }
                            uVar6 = uVar6 + __n;
                            sw_trap(0x10);
                            if (uVar6 < 0xfffff001) {
                              bVar17 = false;
                              if (uVar6 != 0xffffffff) goto LAB_00017168;
                            }
                            else {
LAB_00017350:
                              bVar17 = uVar6 != 0xffffffff;
                              _dl_errno = -uVar6;
                            }
                          }
                          else {
                            uVar14 = uVar11;
                            if (!bVar2) {
                              uVar14 = _dl_library_offset;
                            }
                            uVar14 = uVar14 + __n;
                            sw_trap(0x10);
                            bVar17 = uVar14 != 0xffffffff;
                            if (uVar14 < 0xfffff001) {
                              bVar17 = false;
                              if (uVar14 != 0xffffffff) {
                                iVar13 = piVar16[4] + piVar16[2];
                                uVar15 = _dl_pagesize + -1 + iVar13 & -_dl_pagesize;
                                __n = piVar16[5] - piVar16[4];
                                uVar6 = uVar15 - iVar13;
                                if (uVar6 < __n) {
                                  __n = uVar6;
                                }
                                memset((void *)(uVar14 + (_dl_pagesize - 1U & piVar16[2]) +
                                                         piVar16[4]),0,__n);
                                bVar17 = uVar15 < (uint)(piVar16[2] + piVar16[5]);
                                if (bVar17) {
                                  uVar15 = local_e4 + uVar15;
                                  sw_trap(0x10);
                                  uVar6 = uVar15;
                                  if (bVar17) {
                                    uVar6 = -uVar15;
                                  }
                                  if (0xfffff000 < uVar6) goto LAB_00017350;
                                  bVar17 = uVar15 < uVar6;
                                  if ((uVar6 == 0xffffffff) || (bVar17 = false, uVar15 != uVar6))
                                  goto LAB_00017238;
                                }
                                bVar17 = false;
                                if (uVar14 != 0) goto LAB_00017168;
                              }
                            }
                            else {
                              _dl_errno = -uVar14;
                            }
                          }
LAB_00017238:
                          sw_trap(0x10);
                          if (bVar17) {
                            uVar10 = -uVar10;
                          }
                          bVar17 = uVar10 < 0xfffff000;
                          if (0xfffff000 < uVar10) {
                            _dl_errno = -uVar10;
                          }
                          goto LAB_00016f3c;
                        }
                      }
LAB_00017168:
                      piVar16 = piVar16 + 8;
                      local_d4 = local_d4 + 1;
                    }
                    if (bVar2) {
                      iVar4 = iVar4 + uVar10;
                    }
                    if (iVar4 == 0) {
                      _dl_internal_error_number = 7;
                      dprintf(2,"%s: \'%s\' is missing a dynamic section\n",_dl_progname,param_3);
                      sw_trap(0x10);
                      bVar17 = true;
                      goto LAB_00016bf4;
                    }
                    memset(auStack140,0,0x8c);
                    __n = _dl_parse_dynamic_info(iVar4,auStack140,0,uVar10);
                    bVar17 = false;
                    if (local_34 != 0) {
                      uVar6 = 0;
                      piVar8 = _DAT_0000001c;
                      while (bVar17 = (uint)_DAT_0000002c < uVar6,
                            (int)uVar6 < (int)(uint)_DAT_0000002c) {
                        if ((*piVar8 == 1) && ((piVar8[6] & 2U) == 0)) {
                          uVar14 = uVar11;
                          if (!bVar2) {
                            uVar14 = _dl_library_offset;
                          }
                          uVar14 = (-_dl_pagesize & piVar8[2]) + uVar14;
                          sw_trap(0x10);
                          if (0xfffff000 < uVar14) {
                            _dl_errno = -uVar14;
                          }
                        }
                        uVar6 = uVar6 + 1;
                        piVar8 = piVar8 + 8;
                      }
                    }
                    sw_trap(0x10);
                    if (bVar17) {
                      uVar7 = -uVar7;
                    }
                    if (0xfffff000 < uVar7) {
                      _dl_errno = -uVar7;
                    }
                    piVar8 = (int *)_dl_add_elf_hash_table(param_3,uVar10,auStack140,iVar4,0);
                    piVar8[0x40] = local_dc;
                    piVar8[0x41] = local_e0;
                    piVar8[0x43] = (uint)local_cc;
                    piVar8[0x44] = local_c8;
                    piVar16 = _DAT_0000001c;
                    piVar8[0xe] = uVar11;
                    piVar8[0x42] = 0;
                    uVar7 = (uint)_DAT_0000002c;
                    piVar8[0x3f] = (int)piVar16 + uVar11;
                    piVar8[0x3e] = uVar7;
                    piVar8[0x14] = param_1 | __n;
                    if (__s == (int *)0x0) {
LAB_0001754c:
                      __s = *param_2;
                    }
                    else {
                      piVar8[7] = __s[5];
                      uVar7 = __s[7];
                      piVar8[8] = uVar7;
                      uVar10 = __s[2];
                      if (uVar7 != 0) {
                        uVar7 = uVar7 - 1 & uVar10;
                      }
                      piVar8[9] = uVar7;
                      iVar4 = __s[4];
                      piVar8[5] = uVar10;
                      piVar8[6] = iVar4;
                      iVar4 = _dl_next_tls_modid();
                      piVar8[0xb] = iVar4;
                      if (piVar8[5] != 0) {
                        piVar8[5] = *piVar8 + __s[2];
                        goto LAB_0001754c;
                      }
                      __s = *param_2;
                    }
                    if (__s == (int *)0x0) {
                      __s = (int *)malloc(0x18);
                      _dl_symbol_tables = __s;
                      *param_2 = __s;
                      memset(__s,0,0x18);
                      param_2 = (int **)*param_2;
                    }
                    else {
                      pvVar9 = malloc(0x18);
                      *(void **)(__s + 4) = pvVar9;
                      memset((void *)(*param_2)[4],0,0x18);
                      __s = (int *)(*param_2)[4];
                      *(int **)(__s + 5) = *param_2;
                      *param_2 = __s;
                      param_2 = (int **)*param_2;
                    }
                    *param_2 = piVar8;
                    sVar1 = *(short *)(piVar8 + 0x13);
                    *(short *)(piVar8 + 0x13) = sVar1 + 1;
                    if ((piVar8[0x14] & 0x1000U) == 0) {
                      piVar8[0xf] = 0;
                    }
                    else {
                      *(short *)(piVar8 + 0x13) = sVar1 + 2;
                      piVar8[0xf] = 0;
                    }
                    if (local_80 != (undefined4 *)0x0) {
                      *local_80 = 0x9de3bfc0;
                      *(int **)(local_80 + 3) = piVar8;
                      local_80[1] = 0x1871cU - (int)local_80 >> 2 | 0x40000000;
                      local_80[2] = 0x1000000;
                    }
                    sw_trap(0x10);
                    uVar7 = 0;
LAB_00016c70:
                    if (uVar7 < 0xfffff001) {
                      return piVar8;
                    }
                    goto LAB_00016e78;
                  }
                }
                else {
                  _dl_errno = -uVar11;
                }
LAB_00016f3c:
                dprintf(2,"%s:%i: can\'t map \'%s\'\n",_dl_progname,0x2a8,param_3);
                _dl_internal_error_number = 6;
              }
              else {
                bVar17 = _DAT_00000010 < 3;
                _dl_internal_error_number = 5;
                if (_DAT_00000010 == 3) {
                  _dl_internal_error_number = 4;
                }
                dprintf(2,"%s: \'%s\' is not an ELF executable for sparc\n",_dl_progname,param_3,
                        0xffffffff,0);
              }
            }
            else {
              dprintf(2,"%s: \'%s\' is not an ELF file\n",_dl_progname,param_3,0xffffffff,0);
              _dl_internal_error_number = 3;
            }
            sw_trap(0x10);
            if (bVar17) {
              uVar7 = -uVar7;
            }
            if (0xfffff000 < uVar7) {
              _dl_errno = -uVar7;
            }
            sw_trap(0x10);
            uVar7 = 0;
          }
          else {
            bVar17 = false;
LAB_00016bf4:
            sw_trap(0x10);
            if (bVar17) {
              uVar7 = -uVar7;
            }
          }
          if (uVar7 < 0xfffff001) {
            return (int *)0;
          }
LAB_00016e78:
          _dl_errno = -uVar7;
          return piVar8;
        }
      }
      else {
        _dl_errno = -uVar7;
LAB_00016b50:
        _dl_internal_error_number = 1;
      }
      sw_trap(0x10);
      if (uVar7 < 0xfffff001) {
        return (int *)0;
      }
      iVar4 = -uVar7;
      puVar3 = &DAT_00002698;
      goto LAB_00016b04;
    }
  }
  else {
    _dl_errno = -uVar7;
  }
  puVar3 = (undefined *)0x2c94;
  iVar4 = 1;
LAB_00016b04:
  *(int *)((int)&_GLOBAL_OFFSET_TABLE_ + (int)puVar3) = iVar4;
  return (int *)0;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00017740) */
/* WARNING: Removing unreachable block (ram,0x000178ac) */
/* WARNING: Removing unreachable block (ram,0x00017894) */
/* WARNING: Removing unreachable block (ram,0x00017808) */
/* WARNING: Removing unreachable block (ram,0x00017838) */
/* WARNING: Removing unreachable block (ram,0x00017864) */
/* WARNING: Removing unreachable block (ram,0x00017710) */
/* WARNING: Removing unreachable block (ram,0x00017844) */
/* WARNING: Removing unreachable block (ram,0x0001781c) */
/* WARNING: Removing unreachable block (ram,0x000177d0) */
/* WARNING: Removing unreachable block (ram,0x00017778) */
/* WARNING: Removing unreachable block (ram,0x000177b4) */
/* WARNING: Removing unreachable block (ram,0x00017718) */

int search_for_named_library
              (char *param_1,uint param_2,char *param_3,undefined4 param_4,char *param_5)

{
  char *pcVar1;
  int iVar2;
  size_t __n;
  char *__dest;
  char *__n_00;
  char acStack2057 [2057];
  
  if (param_3 != (char *)0x0) {
    __dest = acStack2057 + 1;
    do {
      pcVar1 = strchr(param_3 + 1,0x3a);
      if (pcVar1 == (char *)0x0) {
        __n_00 = (char *)strlen(param_3);
      }
      else {
        __n_00 = pcVar1 + -(int)param_3;
        pcVar1 = pcVar1 + 1;
      }
      if ((int)__n_00 < 7) {
        if (__n_00 != (char *)0x0) goto LAB_00017890;
        strcpy(__dest,&DAT_0001c978);
LAB_00017830:
        strcat(__dest,"/");
        strcat(__dest,param_1);
        if ((acStack2057[1] == '/') &&
           (iVar2 = _dl_load_elf_shared_library(param_2,param_4,__dest), iVar2 != 0)) {
          return iVar2;
        }
      }
      else {
        iVar2 = memcmp(param_3,s__ORIGIN_0001c970,7);
        if (iVar2 != 0) {
LAB_00017890:
          memcpy(__dest,param_3,(size_t)__n_00);
          __dest[(int)__n_00] = '\0';
          goto LAB_00017830;
        }
        if ((((param_2 >> 0x1a & 1) == 0) || (__n_00 == (char *)0x7)) && (param_5 != (char *)0x0)) {
          __n = strlen(param_5);
          do {
            __n = __n - 1;
            if ((int)__n < 0) goto LAB_000177a4;
          } while (param_5[__n] != '/');
          if (__n != 0) {
            memcpy(__dest,param_5,__n);
            memcpy(__dest + __n,param_3 + 7,(size_t)(__n_00 + -7));
            *(undefined *)((int)__dest + (int)__n_00 + __n + -7) = 0;
            goto LAB_00017830;
          }
        }
      }
LAB_000177a4:
      param_3 = pcVar1;
    } while (pcVar1 != (char *)0x0);
  }
  return 0;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00017914) */
/* WARNING: Removing unreachable block (ram,0x00017a40) */
/* WARNING: Removing unreachable block (ram,0x00017a9c) */
/* WARNING: Removing unreachable block (ram,0x000179bc) */
/* WARNING: Removing unreachable block (ram,0x00017a08) */
/* WARNING: Removing unreachable block (ram,0x000178bc) */
/* WARNING: Removing unreachable block (ram,0x00017af4) */
/* WARNING: Removing unreachable block (ram,0x00017ac8) */
/* WARNING: Removing unreachable block (ram,0x00017a64) */
/* WARNING: Removing unreachable block (ram,0x0001793c) */
/* WARNING: Removing unreachable block (ram,0x000178dc) */
/* WARNING: Removing unreachable block (ram,0x000178cc) */

int _dl_load_shared_library(undefined4 param_1,undefined4 param_2,int param_3,char *param_4)

{
  size_t sVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  _dl_internal_error_number = 0;
  sVar1 = strlen(param_4);
  if ((0x400 < sVar1) ||
     (((((pcVar2 = rindex(param_4,0x2f), pcVar4 = param_4, pcVar2 == (char *)0x0 ||
         (pcVar4 = pcVar2 + 1, param_4 == pcVar4)) ||
        (iVar3 = _dl_load_elf_shared_library(param_1,param_2,param_4), iVar3 == 0)) &&
       ((((param_3 == 0 || (*(int *)(param_3 + 0xa8) == 0)) ||
         (iVar3 = search_for_named_library
                            (pcVar4,param_1,*(int *)(param_3 + 0xa8) + *(int *)(param_3 + 0x80),
                             param_2,*(undefined4 *)(param_3 + 4)), iVar3 == 0)) &&
        ((_dl_library_path == 0 ||
         (iVar3 = search_for_named_library(pcVar4,param_1,_dl_library_path,param_2,0), iVar3 == 0)))
        ))) && ((((param_3 == 0 ||
                  ((*(int *)(param_3 + 0xe0) == 0 ||
                   (iVar3 = search_for_named_library
                                      (pcVar4,param_1,
                                       *(int *)(param_3 + 0xe0) + *(int *)(param_3 + 0x80),param_2,0
                                      ), iVar3 == 0)))) &&
                 (((*(int *)(_dl_loaded_modules + 0xa8) == 0 ||
                   (iVar3 = search_for_named_library
                                      (pcVar4,param_1,
                                       *(int *)(_dl_loaded_modules + 0xa8) +
                                       *(int *)(_dl_loaded_modules + 0x80),param_2,0), iVar3 == 0))
                  && ((iVar3 = search_for_named_library
                                         (pcVar4,param_1,"/lib:/usr/lib:/usr/X11R6/lib",param_2,0),
                      iVar3 == 0 &&
                      ((*(int *)(_dl_loaded_modules + 0xe0) == 0 ||
                       (iVar3 = search_for_named_library
                                          (pcVar4,param_1,
                                           *(int *)(_dl_loaded_modules + 0xe0) +
                                           *(int *)(_dl_loaded_modules + 0x80),param_2,0),
                       iVar3 == 0)))))))) &&
                ((*(int *)(_dl_loaded_modules + 0xa8) == 0 ||
                 (iVar3 = search_for_named_library
                                    (pcVar4,param_1,
                                     *(int *)(_dl_loaded_modules + 0xa8) +
                                     *(int *)(_dl_loaded_modules + 0x80),param_2,0), iVar3 == 0)))))
      ))) {
    _dl_error_number = _dl_internal_error_number;
    if (_dl_internal_error_number == 0) {
      _dl_error_number = 1;
    }
    iVar3 = 0;
  }
  return iVar3;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00017c48) */
/* WARNING: Removing unreachable block (ram,0x00017c98) */
/* WARNING: Removing unreachable block (ram,0x00017cbc) */
/* WARNING: Removing unreachable block (ram,0x00017e84) */
/* WARNING: Removing unreachable block (ram,0x00017de0) */
/* WARNING: Removing unreachable block (ram,0x00017e20) */
/* WARNING: Removing unreachable block (ram,0x00017f78) */
/* WARNING: Removing unreachable block (ram,0x00017e3c) */
/* WARNING: Removing unreachable block (ram,0x0001825c) */
/* WARNING: Removing unreachable block (ram,0x00018118) */
/* WARNING: Removing unreachable block (ram,0x00018084) */
/* WARNING: Removing unreachable block (ram,0x00017b1c) */
/* WARNING: Removing unreachable block (ram,0x00018248) */
/* WARNING: Removing unreachable block (ram,0x00018150) */
/* WARNING: Removing unreachable block (ram,0x00018014) */
/* WARNING: Removing unreachable block (ram,0x00017f94) */
/* WARNING: Removing unreachable block (ram,0x00017f64) */
/* WARNING: Removing unreachable block (ram,0x00017f20) */
/* WARNING: Removing unreachable block (ram,0x00017e94) */
/* WARNING: Removing unreachable block (ram,0x00017e70) */
/* WARNING: Removing unreachable block (ram,0x00017cac) */
/* WARNING: Removing unreachable block (ram,0x00017c64) */
/* WARNING: Removing unreachable block (ram,0x00017b24) */

int * do_dlopen(int param_1,uint param_2,uint param_3)

{
  int *__s;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  void *__s_00;
  void *pvVar10;
  undefined *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  undefined **ppuVar16;
  int **ppiVar17;
  int *piVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  code *pcVar22;
  undefined auStack120 [96];
  undefined4 local_18;
  int local_14;
  int *local_4;
  
  ppuVar16 = &_GLOBAL_OFFSET_TABLE_;
  if ((param_2 & 7) == 0) {
    _dl_error_number = 10;
    __s = (int *)0x0;
  }
  else {
    if (_dl_init_5537 == '\0') {
      _dl_init_5537 = '\x01';
      _dl_malloc_function = malloc;
      _dl_free_function = free;
    }
    __s = _dl_symbol_tables;
    iVar1 = 0;
    if (param_1 != 0) {
      while (__s != (int *)0x0) {
        iVar3 = *__s;
        uVar5 = *(uint *)(iVar3 + 0x38);
        if (uVar5 < param_3) {
          if ((iVar1 == 0) || (*(uint *)(iVar1 + 0x38) < uVar5)) {
            __s = (int *)__s[4];
            iVar1 = iVar3;
          }
          else {
            __s = (int *)__s[4];
          }
        }
        else {
          __s = (int *)__s[4];
        }
      }
      local_4 = _dl_symbol_tables;
      piVar12 = _dl_symbol_tables;
      while (piVar12 != (int *)0x0) {
        if ((int *)piVar12[4] == (int *)0x0) {
          piVar18 = piVar12;
          if (((uint)__s & 0xff) != 0) goto LAB_00017c3c;
          goto LAB_00017c40;
        }
        __s = (int *)0x1;
        piVar12 = (int *)piVar12[4];
      }
      piVar18 = local_4;
      if (((uint)__s & 0xff) != 0) {
        local_4 = (int *)0x0;
        piVar18 = local_4;
      }
LAB_00017c3c:
      local_4 = piVar18;
LAB_00017c40:
      uVar5 = 2;
      pcVar9 = getenv(s_LD_BIND_NOW_0001c9a8);
      if (pcVar9 == (char *)0x0) {
        uVar5 = param_2 & 2;
      }
      _dl_library_path = getenv("LD_LIBRARY_PATH");
      local_14 = _dl_load_shared_library(param_2 & 0x1104,&local_4,iVar1,param_1,0);
      __s = (int *)0x0;
      if (local_14 != 0) {
        __s = (int *)malloc(0x18);
        memset(__s,0,0x18);
        *__s = local_14;
        piVar18 = _dl_handles;
        piVar14 = __s;
        *(int **)(__s + 1) = _dl_handles;
        _dl_handles = piVar14;
        if ((*(ushort *)(local_14 + 0x4e) & 0x10) == 0) {
          puVar4 = auStack120;
          puVar21 = &local_18;
          local_18 = 0;
          puVar20 = (undefined4 *)0x0;
          piVar18 = __s;
          puVar7 = puVar21;
          puVar19 = puVar21;
          do {
            puVar13 = puVar20;
            iVar1 = puVar19[1];
            puVar20 = (undefined4 *)((int)puVar13 + 1);
            *(undefined4 *)(iVar1 + 0x5c) = 0;
            piVar14 = *(int **)(iVar1 + 8);
            while (*piVar14 != 0) {
              if (*piVar14 == 1) {
                iVar1 = _dl_load_shared_library
                                  (param_2 & 0x1100,&local_4,puVar19[1],
                                   *(int *)(puVar19[1] + 0x80) + piVar14[1],0);
                if (iVar1 == 0) goto LAB_0001825c;
                __s_00 = malloc(0x18,*puVar4);
                *(void **)(piVar18 + 4) = __s_00;
                memset(__s_00,0,0x18,*puVar4);
                piVar18 = (int *)piVar18[4];
                *piVar18 = iVar1;
                puVar11 = puVar4 + -0x10;
                *(int *)(puVar4 + 0x54) = iVar1;
                iVar3 = puVar19[1];
                *(undefined4 *)(puVar4 + 0x50) = *(undefined4 *)(iVar3 + 0x5c);
                *(undefined **)(iVar3 + 0x5c) = puVar4 + 0x50;
                puVar2 = puVar21;
                iVar3 = local_14;
                while (iVar3 != iVar1) {
                  puVar2 = (undefined4 *)*puVar2;
                  if (puVar2 == (undefined4 *)0x0) {
                    puVar11 = puVar4 + -0x20;
                    *(undefined **)puVar7 = puVar4 + 0x40;
                    *(int *)(puVar4 + 0x44) = iVar1;
                    *(undefined4 *)(puVar4 + 0x40) = 0;
                    puVar7 = (undefined4 *)(puVar4 + 0x40);
                    goto LAB_00017ee0;
                  }
                  iVar3 = puVar2[1];
                }
                *(short *)(iVar1 + 0x4c) = *(short *)(iVar1 + 0x4c) + -1;
LAB_00017ee0:
                piVar14 = piVar14 + 2;
                puVar4 = puVar11;
              }
              else {
                piVar14 = piVar14 + 2;
              }
            }
            puVar19 = (undefined4 *)*puVar19;
          } while (puVar19 != (undefined4 *)0x0);
          piVar14 = (int *)malloc((int)puVar20 * 4,*puVar4);
          *(undefined4 **)(__s + 3) = puVar20;
          *(int **)(__s + 2) = piVar14;
          piVar18 = piVar14;
          puVar7 = puVar21;
          do {
            iVar1 = puVar7[1];
            *piVar18 = iVar1;
            ppiVar17 = *(int ***)(iVar1 + 0x5c);
            while (ppiVar17 != (int **)0x0) {
              if ((*(uint *)((int)ppiVar17[1] + 0x50) & 0x100) == 0) {
                puVar19 = (undefined4 *)malloc(8,*puVar4);
                *(int **)(puVar19 + 1) = ppiVar17[1];
                iVar1 = puVar7[1];
                *puVar19 = *(undefined4 *)(iVar1 + 0x60);
                *(undefined4 **)(iVar1 + 0x60) = puVar19;
                ppiVar17 = (int **)*ppiVar17;
              }
              else {
                ppiVar17 = (int **)*ppiVar17;
              }
            }
            puVar7 = (undefined4 *)*puVar7;
            piVar18 = piVar18 + 1;
          } while (puVar7 != (undefined4 *)0x0);
          __s_00 = malloc((int)puVar20 * 4,*puVar4);
          while (puVar7 != puVar20) {
            if (*(int *)(piVar14[(int)puVar7] + 0x44) == 0) {
              iVar3 = _dl_build_local_scope(__s_00);
              iVar15 = piVar14[(int)puVar7];
              pvVar10 = malloc(iVar3 << 2,*puVar4);
              iVar1 = piVar14[(int)puVar7];
              *(void **)(iVar15 + 0x40) = pvVar10;
              *(int *)(iVar1 + 0x44) = iVar3;
              memcpy(*(undefined4 *)(iVar1 + 0x40),__s_00,iVar3 << 2,*puVar4);
              puVar19 = (undefined4 *)0x0;
              while (puVar19 != puVar20) {
                *(ushort *)(piVar14[(int)puVar19] + 0x4e) =
                     *(ushort *)(piVar14[(int)puVar19] + 0x4e) & 0xffdf;
                puVar19 = (undefined4 *)((int)puVar19 + 1);
              }
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
            else {
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
          }
          piVar18 = piVar14 + -1;
          free(__s_00,*puVar4);
          iVar1 = local_14;
LAB_00017e48:
          puVar7 = (undefined4 *)0x0;
          do {
            puVar19 = puVar7;
            puVar7 = (undefined4 *)((int)puVar19 + 1);
          } while (piVar14[(int)puVar19] != iVar1);
LAB_00017fe0:
          puVar4 = (undefined *)((int)puVar7 << 2);
          if (puVar20 <= puVar7) {
            puVar21 = (undefined4 *)*puVar21;
            if (puVar21 != (undefined4 *)0x0) goto code_r0x00017ff4;
            iVar1 = _dl_fixup(__s,ppuVar16[0x9a8] + 0x40,uVar5);
            if (iVar1 != 0) {
LAB_0001825c:
              do_dlclose(__s,0);
              return (int *)0;
            }
            if (piVar12 != (int *)0x0) {
              local_4 = (int *)piVar12[4];
              while (local_4 != (int *)0x0) {
                if (*(int *)(*local_4 + 0x104) != 0) {
                  _dl_protect_relro();
                }
                local_4 = (int *)local_4[4];
              }
            }
            piVar18 = (int *)0x0;
            puVar19 = (undefined4 *)0x0;
            while (puVar19 != puVar20) {
              puVar21 = (undefined4 *)piVar14[(int)puVar19];
              if ((*(ushort *)((int)puVar21 + 0x4e) & 4) == 0) {
                if (puVar21[7] == 0) {
                  puVar19 = (undefined4 *)((int)puVar19 + 1);
                }
                else {
                  _dl_add_to_slotinfo(puVar21);
                  piVar18 = (int *)0x1;
                  if (*(char *)(puVar21 + 0xc) < '\0') {
                    *(byte *)(puVar21 + 0xc) = *(byte *)(puVar21 + 0xc) & 0x7f;
                    (*(code *)ppuVar16[0x8a])(puVar21);
                  }
                  puVar19 = (undefined4 *)((int)puVar19 + 1);
                }
              }
              else {
                puVar19 = (undefined4 *)((int)puVar19 + 1);
              }
            }
            if ((piVar18 == (int *)0x0) ||
               (puVar4 = ppuVar16[0xb21] + 1, ppuVar16[0xb21] = puVar4, puVar4 != (undefined *)0x0))
            {
              puVar4 = ppuVar16[0x9a5];
              if ((puVar4 != (undefined *)0x0) &&
                 (pcVar22 = *(code **)(puVar4 + 8), pcVar22 != (code *)0x0)) {
                *(undefined4 *)(puVar4 + 0xc) = 1;
                (*pcVar22)();
                *(undefined4 *)(ppuVar16[0x9a5] + 0xc) = 0;
                (*pcVar22)();
              }
              goto LAB_000181d8;
            }
            sw_trap(0x10);
            puVar19 = (undefined4 *)0xffffffe2;
            puVar4 = &DAT_00002698;
            ppuVar16 = ppuVar16 + 0x9a6;
            *ppuVar16 = (undefined *)0xffffffe2;
          }
          iVar1 = *(int *)((int)piVar14 + (int)puVar4);
          piVar8 = *(int **)(iVar1 + 0x5c);
          while( true ) {
            if (piVar8 == (int *)0x0) goto code_r0x000180a8;
            if (piVar8[1] == puVar21[1]) break;
            piVar8 = (int *)*piVar8;
          }
          while ((int)puVar19 * 4 - (int)puVar4 != 0) {
            *(undefined4 *)((int)piVar14 + (int)puVar4) =
                 *(undefined4 *)((int)piVar18 + (int)puVar4);
            puVar4 = puVar4 + -4;
          }
          piVar14[(int)puVar19] = iVar1;
          puVar19 = (undefined4 *)((int)puVar19 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          goto LAB_00017fe0;
        }
        while (piVar18 != (int *)0x0) {
          if (*piVar18 == local_14) {
            iVar15 = piVar18[2];
            iVar3 = piVar18[3];
            __s[2] = iVar15;
            __s[3] = iVar3;
            iVar1 = 0;
            while (iVar6 = iVar1 * 4, iVar3 != iVar1) {
              iVar1 = iVar1 + 1;
              iVar6 = *(int *)(iVar15 + iVar6);
              *(uint *)(iVar6 + 0x50) = *(uint *)(iVar6 + 0x50) | param_2 & 0x1100;
            }
            __s[4] = piVar18[4];
            return __s;
          }
          piVar18 = (int *)piVar18[1];
        }
      }
    }
  }
  return __s;
code_r0x00017ff4:
  iVar1 = puVar21[1];
  goto LAB_00017e48;
LAB_000181d8:
  if (puVar13 == (undefined4 *)0xffffffff) {
    return __s;
  }
  piVar12 = (int *)piVar14[(int)puVar13];
  if ((*(ushort *)((int)piVar12 + 0x4e) & 4) != 0) {
LAB_00018250:
    puVar13 = (undefined4 *)((int)puVar13 + -1);
    goto LAB_000181d8;
  }
  *(ushort *)((int)piVar12 + 0x4e) = *(ushort *)((int)piVar12 + 0x4e) | 4;
  if (piVar12[0x27] == 0) {
    iVar1 = piVar12[0x34];
  }
  else {
    pcVar22 = (code *)(piVar12[0x27] + *piVar12);
    if (pcVar22 == (code *)0x0) {
      iVar1 = piVar12[0x34];
    }
    else {
      (*pcVar22)();
      iVar1 = piVar12[0x34];
    }
  }
  if (iVar1 == 0) {
    puVar13 = (undefined4 *)((int)puVar13 + -1);
  }
  else {
    if (iVar1 + *piVar12 != 0) {
      _dl_run_init_array(piVar12);
      goto LAB_00018250;
    }
    puVar13 = (undefined4 *)((int)puVar13 + -1);
  }
  goto LAB_000181d8;
code_r0x000180a8:
  puVar7 = (undefined4 *)((int)puVar7 + 1);
  goto LAB_00017fe0;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x000182a4) */
/* WARNING: Removing unreachable block (ram,0x000182c4) */
/* WARNING: Removing unreachable block (ram,0x0001826c) */
/* WARNING: Removing unreachable block (ram,0x000182b4) */
/* WARNING: Removing unreachable block (ram,0x0001829c) */
/* WARNING: Removing unreachable block (ram,0x0001827c) */

undefined4 dlopen(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_o7;
  undefined auStack16 [16];
  
  _pthread_cleanup_push_defer(auStack16,__pthread_mutex_trylock,_dl_mutex);
  __pthread_mutex_trylock(_dl_mutex);
  uVar1 = do_dlopen(param_1,param_2,in_o7);
  _pthread_cleanup_pop_restore(auStack16,1);
  return uVar1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001830c) */
/* WARNING: Removing unreachable block (ram,0x0001842c) */
/* WARNING: Removing unreachable block (ram,0x000182d4) */
/* WARNING: Removing unreachable block (ram,0x000183ec) */
/* WARNING: Removing unreachable block (ram,0x00018304) */
/* WARNING: Removing unreachable block (ram,0x000182e4) */

int dlsym(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint in_o7;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined auStack16 [16];
  
  _pthread_cleanup_push_defer(auStack16,__pthread_mutex_trylock,_dl_mutex);
  __pthread_mutex_trylock(_dl_mutex);
  local_18 = 0;
  local_14 = 0;
  if (param_1 == (int *)0x0) {
LAB_00018338:
    in_o7 = 0;
    piVar5 = _dl_symbol_tables;
  }
  else {
    if (param_1 != (int *)0xffffffff) {
      piVar5 = _dl_handles;
      if (param_1 != _dl_symbol_tables) {
        while (piVar5 != (int *)0x0) {
          in_o7 = 0;
          if (param_1 == piVar5) goto LAB_000183b4;
          piVar5 = (int *)piVar5[1];
        }
        iVar2 = 0;
        _dl_error_number = 10;
        goto LAB_00018428;
      }
      goto LAB_00018338;
    }
    piVar1 = _dl_symbol_tables;
    piVar5 = (int *)0xffffffff;
    iVar2 = 0;
    while (piVar1 != (int *)0x0) {
      iVar4 = *piVar1;
      uVar3 = *(uint *)(iVar4 + 0x38);
      piVar1 = (int *)piVar1[4];
      if ((uVar3 < in_o7) && ((iVar2 == 0 || (*(uint *)(iVar2 + 0x38) < uVar3)))) {
        piVar5 = piVar1;
        iVar2 = iVar4;
      }
    }
  }
LAB_000183b4:
  iVar4 = *piVar5;
  if (_dl_symbol_tables != piVar5) {
    iVar4 = 0;
  }
  iVar2 = *piVar5;
  while (iVar2 = _dl_find_hash(param_2,iVar2 + 0x40,iVar4,0x80000000,&local_18), iVar2 == 0) {
    piVar5 = (int *)piVar5[4];
    if ((in_o7 == 0) || (piVar5 == (int *)0x0)) {
      _dl_error_number = 0xb;
      break;
    }
    iVar2 = *piVar5;
  }
LAB_00018428:
  _pthread_cleanup_pop_restore(auStack16,1);
  return iVar2;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x000184ac) */
/* WARNING: Removing unreachable block (ram,0x000184c8) */
/* WARNING: Removing unreachable block (ram,0x00018474) */
/* WARNING: Removing unreachable block (ram,0x000184b8) */
/* WARNING: Removing unreachable block (ram,0x000184a4) */
/* WARNING: Removing unreachable block (ram,0x00018484) */

undefined4 dlclose(undefined4 param_1)

{
  undefined4 uVar1;
  undefined auStack16 [16];
  
  _pthread_cleanup_push_defer(auStack16,__pthread_mutex_trylock,_dl_mutex);
  __pthread_mutex_trylock(_dl_mutex);
  uVar1 = do_dlclose(param_1,1);
  _pthread_cleanup_pop_restore(auStack16,1);
  return uVar1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x000184d8) */
/* WARNING: Removing unreachable block (ram,0x000184e0) */
/* WARNING: Removing unreachable block (ram,0x0001851c) */

undefined4 dlerror(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (_dl_error_number != 0) {
    iVar1 = _dl_error_number * 4;
    _dl_error_number = 0;
    uVar2 = *(undefined4 *)(dl_error_names + iVar1);
  }
  return uVar2;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001855c) */
/* WARNING: Removing unreachable block (ram,0x000185f4) */
/* WARNING: Removing unreachable block (ram,0x00018524) */
/* WARNING: Removing unreachable block (ram,0x00018554) */
/* WARNING: Removing unreachable block (ram,0x00018534) */

undefined4 dladdr(uint param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined auStack16 [16];
  
  _pthread_cleanup_push_defer(auStack16,__pthread_mutex_trylock,_dl_mutex);
  __pthread_mutex_trylock(_dl_mutex);
  piVar2 = (int *)0x0;
  piVar4 = _dl_loaded_modules;
  while (piVar4 != (int *)0x0) {
    if ((uint)piVar4[0xe] < param_1) {
      piVar3 = piVar4;
      if ((piVar2 != (int *)0x0) && (piVar3 = piVar2, (uint)piVar2[0xe] < (uint)piVar4[0xe])) {
        piVar3 = piVar4;
      }
      piVar4 = (int *)piVar4[3];
      piVar2 = piVar3;
    }
    else {
      piVar4 = (int *)piVar4[3];
    }
  }
  uVar10 = 0;
  if (piVar2 != (int *)0x0) {
    iVar8 = piVar2[0x21];
    *param_2 = piVar2[1];
    iVar9 = piVar2[0x15];
    uVar12 = 0;
    param_2[1] = piVar2[0xe];
    bVar1 = false;
    iVar11 = 0;
    iVar13 = 0;
    while (iVar13 != iVar9) {
      iVar7 = piVar2[0x16];
      iVar5 = iVar13 << 2;
      while (iVar7 = *(int *)(iVar5 + iVar7), iVar7 != 0) {
        iVar5 = iVar8 + iVar7 * 0x10;
        if (((((*(int *)(iVar5 + 4) != 0) || (*(short *)(iVar5 + 0xe) != 0)) &&
             ((*(byte *)(iVar5 + 0xc) & 0xf) != 6)) &&
            (uVar6 = *(int *)(iVar5 + 4) + *piVar2, uVar6 <= param_1)) &&
           (((*(short *)(iVar5 + 0xe) == 0 || (*(int *)(iVar5 + 8) == 0)) &&
            ((uVar6 == param_1 && ((uVar12 == 0 || (uVar12 < uVar6)))))))) {
          bVar1 = true;
          iVar11 = iVar7;
          uVar12 = uVar6;
        }
        iVar7 = iVar7 << 2;
        iVar5 = piVar2[0x1a];
      }
      iVar13 = iVar13 + 1;
    }
    if (bVar1) {
      iVar9 = piVar2[0x20];
      iVar11 = *(int *)(iVar8 + iVar11 * 0x10);
      param_2[3] = uVar12;
      param_2[2] = iVar9 + iVar11;
    }
    else {
      param_2[2] = 0;
      param_2[3] = 0;
    }
    uVar10 = 1;
  }
  _pthread_cleanup_pop_restore(auStack16,1);
  return uVar10;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00018750) */
/* WARNING: Removing unreachable block (ram,0x00018724) */

int _dl_linux_resolve(void)

{
  int unaff_g7;
  code *pcVar1;
  undefined4 unaff_l0;
  undefined4 unaff_l1;
  undefined4 unaff_l3;
  undefined4 unaff_l4;
  undefined4 unaff_l5;
  undefined4 unaff_l6;
  undefined4 unaff_l7;
  undefined4 unaff_i0;
  undefined4 unaff_i1;
  undefined4 unaff_i2;
  undefined4 unaff_i3;
  undefined4 unaff_i4;
  undefined4 unaff_i5;
  undefined4 unaff_fp;
  undefined4 unaff_i7;
  bool bVar2;
  int in_CWP;
  
  bVar2 = true;
  pcVar1 = (code *)_dl_linux_resolver();
  in_CWP = in_CWP + -1;
  if (!bVar2) {
    unaff_i0 = *(undefined4 *)(in_CWP * 0x40 + 0x7000);
    unaff_i1 = *(undefined4 *)((in_CWP * 0x10 + 1) * 4 + 0x7000);
    unaff_i2 = *(undefined4 *)((in_CWP * 0x10 + 2) * 4 + 0x7000);
    unaff_i3 = *(undefined4 *)((in_CWP * 0x10 + 3) * 4 + 0x7000);
    unaff_i4 = *(undefined4 *)((in_CWP * 0x10 + 4) * 4 + 0x7000);
    unaff_i5 = *(undefined4 *)((in_CWP * 0x10 + 5) * 4 + 0x7000);
    unaff_fp = *(undefined4 *)((in_CWP * 0x10 + 6) * 4 + 0x7000);
    unaff_i7 = *(undefined4 *)((in_CWP * 0x10 + 7) * 4 + 0x7000);
    unaff_l0 = *(undefined4 *)((in_CWP * 0x10 + 8) * 4 + 0x7000);
    unaff_l1 = *(undefined4 *)((in_CWP * 0x10 + 9) * 4 + 0x7000);
    unaff_l3 = *(undefined4 *)((in_CWP * 0x10 + 0xb) * 4 + 0x7000);
    unaff_l4 = *(undefined4 *)((in_CWP * 0x10 + 0xc) * 4 + 0x7000);
    unaff_l5 = *(undefined4 *)((in_CWP * 0x10 + 0xd) * 4 + 0x7000);
    unaff_l6 = *(undefined4 *)((in_CWP * 0x10 + 0xe) * 4 + 0x7000);
    unaff_l7 = *(undefined4 *)((in_CWP * 0x10 + 0xe) * 4 + 0x7000);
  }
  (*pcVar1)();
  if (!bVar2) {
    *(undefined4 *)(in_CWP * 0x40 + 0x7000) = unaff_i0;
    *(undefined4 *)((in_CWP * 0x10 + 1) * 4 + 0x7000) = unaff_i1;
    *(undefined4 *)((in_CWP * 0x10 + 2) * 4 + 0x7000) = unaff_i2;
    *(undefined4 *)((in_CWP * 0x10 + 3) * 4 + 0x7000) = unaff_i3;
    *(undefined4 *)((in_CWP * 0x10 + 4) * 4 + 0x7000) = unaff_i4;
    *(undefined4 *)((in_CWP * 0x10 + 5) * 4 + 0x7000) = unaff_i5;
    *(undefined4 *)((in_CWP * 0x10 + 6) * 4 + 0x7000) = unaff_fp;
    *(undefined4 *)((in_CWP * 0x10 + 7) * 4 + 0x7000) = unaff_i7;
    *(undefined4 *)((in_CWP * 0x10 + 8) * 4 + 0x7000) = unaff_l0;
    *(undefined4 *)((in_CWP * 0x10 + 9) * 4 + 0x7000) = unaff_l1;
    *(undefined4 *)((in_CWP * 0x10 + 10) * 4 + 0x7000) = unaff_l3;
    *(undefined4 *)((in_CWP * 0x10 + 0xb) * 4 + 0x7000) = unaff_l3;
    *(undefined4 *)((in_CWP * 0x10 + 0xc) * 4 + 0x7000) = unaff_l4;
    *(undefined4 *)((in_CWP * 0x10 + 0xd) * 4 + 0x7000) = unaff_l5;
    *(undefined4 *)((in_CWP * 0x10 + 0xe) * 4 + 0x7000) = unaff_l6;
    *(undefined4 *)((in_CWP * 0x10 + 0xf) * 4 + 0x7000) = unaff_l7;
  }
  return unaff_g7 + -4;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00018740) */
/* WARNING: Removing unreachable block (ram,0x00018750) */
/* WARNING: Removing unreachable block (ram,0x00018760) */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int * __h_errno_location(void)

{
  int unaff_g7;
  
  return (int *)(unaff_g7 + -4);
}


/* WARNING: Removing unreachable block (ram,0x00018768) */
/* WARNING: Removing unreachable block (ram,0x00018774) */

undefined4 __rt_sigreturn_stub(undefined4 param_1)

{
  sw_trap(0x10);
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x0001877c) */
/* WARNING: Removing unreachable block (ram,0x00018788) */

undefined4 __sigreturn_stub(undefined4 param_1)

{
  sw_trap(0x10);
  return param_1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00018790) */
/* WARNING: Removing unreachable block (ram,0x00018798) */
/* WARNING: Removing unreachable block (ram,0x000187e8) */

uint rt_sigaction(uint param_1)

{
  int unaff_g7;
  bool in_i_cf;
  
  sw_trap(0x10);
  if (in_i_cf) {
    param_1 = -param_1;
  }
  if (0xfffff000 < param_1) {
    *(int *)(unaff_g7 + -8) = -param_1;
    param_1 = 0xffffffff;
  }
  return param_1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001881c) */
/* WARNING: Removing unreachable block (ram,0x000188d8) */
/* WARNING: Removing unreachable block (ram,0x000187f0) */
/* WARNING: Removing unreachable block (ram,0x00018880) */
/* WARNING: Removing unreachable block (ram,0x000187f8) */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int unaff_g7;
  undefined auStack28 [8];
  undefined4 local_14;
  ulong local_10;
  ulong local_c;
  undefined auStack8 [8];
  
  if (__act != (sigaction *)0x0) {
    memcpy(auStack28,(__act->sa_mask).__val + 2,8);
  }
  sw_trap(0x10);
  if (0xfffff000 < (uint)__sig) {
    *(int *)(unaff_g7 + -8) = -__sig;
    return -1;
  }
  if ((__oact != (sigaction *)0x0) && (-1 < __sig)) {
    __oact->__sigaction_handler = local_14;
    memcpy((__oact->sa_mask).__val + 2,auStack8,8);
    (__oact->sa_mask).__val[0] = local_10;
    (__oact->sa_mask).__val[1] = local_c;
  }
  return __sig;
}


int _setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  int in_o7;
  int unaff_fp;
  undefined auStackX0 [92];
  
  sw_trap(3);
  __env->__jmpbuf[2] = in_o7;
  *(BADSPACEBASE **)__env->__jmpbuf = register0x00000038;
  __env->__jmpbuf[1] = unaff_fp;
  iVar1 = __sigjmp_save(__env,0);
  return iVar1;
}


int setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  int in_o7;
  int unaff_fp;
  undefined auStackX0 [92];
  
  sw_trap(3);
  __env->__jmpbuf[2] = in_o7;
  *(BADSPACEBASE **)__env->__jmpbuf = register0x00000038;
  __env->__jmpbuf[1] = unaff_fp;
  iVar1 = __sigjmp_save(__env,1);
  return iVar1;
}


void __sigsetjmp(int param_1)

{
  undefined4 in_o7;
  undefined4 unaff_fp;
  undefined auStackX0 [92];
  
  sw_trap(3);
  *(undefined4 *)(param_1 + 8) = in_o7;
  *(BADSPACEBASE **)param_1 = register0x00000038;
  *(undefined4 *)(param_1 + 4) = unaff_fp;
  __sigjmp_save();
  return;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00018920) */
/* WARNING: Removing unreachable block (ram,0x00018928) */

void _exit(int __status)

{
  int unaff_g7;
  bool in_i_cf;
  
  sw_trap(0x10);
  if (in_i_cf) {
    __status = -__status;
  }
  if (0xfffff000 < (uint)__status) {
    *(int *)(unaff_g7 + -8) = -__status;
  }
  IllegalInstructionTrap(0xf00);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00018974) */
/* WARNING: Removing unreachable block (ram,0x0001898c) */
/* WARNING: Unknown calling convention yet parameter storage is locked */

__gid_t getegid(void)

{
  __gid_t in_o0;
  bool in_i_cf;
  
  sw_trap(0x10);
  if (in_i_cf) {
    in_o0 = -in_o0;
  }
  return in_o0;
}


/* WARNING: Removing unreachable block (ram,0x00018994) */
/* WARNING: Removing unreachable block (ram,0x000189ac) */
/* WARNING: Unknown calling convention yet parameter storage is locked */

__uid_t geteuid(void)

{
  __uid_t in_o0;
  bool in_i_cf;
  
  sw_trap(0x10);
  if (in_i_cf) {
    in_o0 = -in_o0;
  }
  return in_o0;
}


/* WARNING: Removing unreachable block (ram,0x000189b4) */
/* WARNING: Removing unreachable block (ram,0x000189cc) */
/* WARNING: Unknown calling convention yet parameter storage is locked */

__gid_t getgid(void)

{
  __gid_t in_o0;
  bool in_i_cf;
  
  sw_trap(0x10);
  if (in_i_cf) {
    in_o0 = -in_o0;
  }
  return in_o0;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x000189d4) */
/* WARNING: Removing unreachable block (ram,0x000189dc) */
/* WARNING: Removing unreachable block (ram,0x000189f4) */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int getpagesize(void)

{
  return __pagesize;
}


/* WARNING: Removing unreachable block (ram,0x000189fc) */
/* WARNING: Removing unreachable block (ram,0x00018a14) */
/* WARNING: Unknown calling convention yet parameter storage is locked */

__uid_t getuid(void)

{
  __uid_t in_o0;
  bool in_i_cf;
  
  sw_trap(0x10);
  if (in_i_cf) {
    in_o0 = -in_o0;
  }
  return in_o0;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00018a94) */
/* WARNING: Removing unreachable block (ram,0x00018a6c) */
/* WARNING: Removing unreachable block (ram,0x00018a1c) */
/* WARNING: Removing unreachable block (ram,0x00018ae0) */
/* WARNING: Removing unreachable block (ram,0x00018a3c) */
/* WARNING: Removing unreachable block (ram,0x00018a8c) */

int ioctl(int __fd,ulong __request,...)

{
  int unaff_g7;
  undefined4 uVar1;
  undefined4 in_o2;
  bool bVar2;
  
  bVar2 = false;
  if (*(int *)(unaff_g7 + 0xc) == 0) {
    sw_trap(0x10);
    if (0xfffff000 < (uint)__fd) {
      *(int *)(unaff_g7 + -8) = -__fd;
      return -1;
    }
  }
  else {
    uVar1 = __libc_enable_asynccancel(__fd,__request);
    sw_trap(0x10);
    if (bVar2) {
      __fd = -__fd;
    }
    if (0xfffff000 < (uint)__fd) {
      *(int *)(unaff_g7 + -8) = -__fd;
      __fd = 0xffffffff;
    }
    __libc_disable_asynccancel(uVar1,__request,in_o2);
  }
  return __fd;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00018af0) */
/* WARNING: Removing unreachable block (ram,0x00018af8) */
/* WARNING: Removing unreachable block (ram,0x00018b4c) */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  int unaff_g7;
  bool in_i_cf;
  
  sw_trap(0x10);
  if (in_i_cf) {
    __addr = (void *)-(int)__addr;
  }
  if ((void *)0xfffff000 < __addr) {
    *(int *)(unaff_g7 + -8) = -(int)__addr;
    __addr = (void *)0xffffffff;
  }
  return __addr;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00018b54) */
/* WARNING: Removing unreachable block (ram,0x00018b5c) */
/* WARNING: Removing unreachable block (ram,0x00018ba0) */

int munmap(void *__addr,size_t __len)

{
  int unaff_g7;
  bool in_i_cf;
  
  sw_trap(0x10);
  if (in_i_cf) {
    __addr = (void *)-(int)__addr;
  }
  if ((void *)0xfffff000 < __addr) {
    *(int *)(unaff_g7 + -8) = -(int)__addr;
    __addr = (void *)0xffffffff;
  }
  return (int)__addr;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00018ba8) */
/* WARNING: Removing unreachable block (ram,0x00018bb0) */
/* WARNING: Removing unreachable block (ram,0x00018bf8) */

uint __open_nocancel(uint param_1)

{
  int unaff_g7;
  bool in_i_cf;
  
  sw_trap(0x10);
  if (in_i_cf) {
    param_1 = -param_1;
  }
  if (0xfffff000 < param_1) {
    *(int *)(unaff_g7 + -8) = -param_1;
    param_1 = 0xffffffff;
  }
  return param_1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00018c00) */
/* WARNING: Removing unreachable block (ram,0x00018c08) */
/* WARNING: Removing unreachable block (ram,0x00018c4c) */

uint __open2_nocancel(uint param_1)

{
  int unaff_g7;
  bool in_i_cf;
  
  sw_trap(0x10);
  if (in_i_cf) {
    param_1 = -param_1;
  }
  if (0xfffff000 < param_1) {
    *(int *)(unaff_g7 + -8) = -param_1;
    param_1 = 0xffffffff;
  }
  return param_1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00018ce8) */
/* WARNING: Removing unreachable block (ram,0x00018cc0) */
/* WARNING: Removing unreachable block (ram,0x00018c54) */
/* WARNING: Removing unreachable block (ram,0x00018d34) */
/* WARNING: Removing unreachable block (ram,0x00018c6c) */
/* WARNING: Removing unreachable block (ram,0x00018ce0) */

int open(char *__file,int __oflag,...)

{
  int unaff_g7;
  undefined4 uVar1;
  uint in_o2;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0;
  if ((__oflag & 0x200U) != 0) {
    uVar2 = in_o2;
  }
  bVar3 = false;
  if (*(int *)(unaff_g7 + 0xc) == 0) {
    sw_trap(0x10);
    if ((char *)0xfffff000 < __file) {
      *(int *)(unaff_g7 + -8) = -(int)__file;
      return -1;
    }
  }
  else {
    uVar1 = __libc_enable_asynccancel(__file,__oflag,uVar2);
    sw_trap(0x10);
    if (bVar3) {
      __file = (char *)-(int)__file;
    }
    if ((char *)0xfffff000 < __file) {
      *(int *)(unaff_g7 + -8) = -(int)__file;
      __file = (char *)0xffffffff;
    }
    __libc_disable_asynccancel(uVar1,__oflag,uVar2 & 0xffff);
  }
  return (int)__file;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00018d78) */
/* WARNING: Removing unreachable block (ram,0x00018d44) */
/* WARNING: Removing unreachable block (ram,0x00018d94) */
/* WARNING: Removing unreachable block (ram,0x00018d54) */

void * sbrk(intptr_t __delta)

{
  int iVar1;
  void *pvVar2;
  
  if ((__curbrk == (void *)0x0) && (iVar1 = brk((void *)0x0), iVar1 < 0)) {
    pvVar2 = (void *)0xffffffff;
  }
  else {
    pvVar2 = __curbrk;
    if ((__delta != 0) && (iVar1 = brk((void *)((int)__curbrk + __delta)), iVar1 < 0)) {
      pvVar2 = (void *)0xffffffff;
    }
  }
  return pvVar2;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00018e28) */
/* WARNING: Removing unreachable block (ram,0x00018db4) */
/* WARNING: Removing unreachable block (ram,0x00018dbc) */
/* WARNING: Removing unreachable block (ram,0x00018e4c) */

int sigprocmask(int __how,sigset_t *__set,sigset_t *__oset)

{
  int unaff_g7;
  
  sw_trap(0x10);
  if (0xfffff000 < (uint)__how) {
    *(int *)(unaff_g7 + -8) = -__how;
    __how = -1;
  }
  return __how;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00018e54) */
/* WARNING: Removing unreachable block (ram,0x00018e5c) */
/* WARNING: Removing unreachable block (ram,0x00018eb0) */

uint __fcntl_nocancel(uint param_1,int param_2)

{
  int unaff_g7;
  
  sw_trap(0x10);
  if (param_2 - 0xcU < 2) {
    param_1 = -param_1;
  }
  if (0xfffff000 < param_1) {
    *(int *)(unaff_g7 + -8) = -param_1;
    param_1 = 0xffffffff;
  }
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x00018f14) */
/* WARNING: Removing unreachable block (ram,0x00018f34) */
/* WARNING: Removing unreachable block (ram,0x00018ec0) */
/* WARNING: Removing unreachable block (ram,0x00018f28) */
/* WARNING: Removing unreachable block (ram,0x00018f04) */

int fcntl(int __fd,int __cmd,...)

{
  int unaff_g7;
  int iVar1;
  undefined4 uVar2;
  undefined4 in_o2;
  
  if ((*(int *)(unaff_g7 + 0xc) != 0) && ((__cmd == 9 || (__cmd == 0xe)))) {
    uVar2 = __libc_enable_asynccancel(__fd,__cmd,in_o2);
    iVar1 = __fcntl_nocancel(__fd,__cmd,in_o2);
    __libc_disable_asynccancel(uVar2);
    return iVar1;
  }
  iVar1 = __fcntl_nocancel(__fd,__cmd);
  return iVar1;
}


/* WARNING: Removing unreachable block (ram,0x00018f44) */
/* WARNING: Removing unreachable block (ram,0x00018f64) */

int dprintf(int __fd,char *__fmt,...)

{
  int iVar1;
  undefined4 in_o2;
  undefined4 in_o3;
  undefined4 in_o4;
  undefined4 in_o5;
  undefined4 local_res4c;
  undefined4 local_res50;
  undefined4 local_res54;
  undefined4 local_res58;
  
  local_res4c = in_o2;
  local_res50 = in_o3;
  local_res54 = in_o4;
  local_res58 = in_o5;
  iVar1 = vdprintf(__fd,__fmt,&local_res4c);
  return iVar1;
}


/* WARNING: Removing unreachable block (ram,0x00018fd8) */
/* WARNING: Removing unreachable block (ram,0x00018f74) */
/* WARNING: Removing unreachable block (ram,0x00018fc4) */

int vdprintf(int __fd,char *__fmt,__gnuc_va_list __arg)

{
  int iVar1;
  int iVar2;
  undefined2 local_74 [2];
  char *local_70;
  char *local_6c;
  char *local_64;
  char *local_60;
  char *local_5c;
  char *local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  _IO_marker *local_44;
  char acStack64 [64];
  
  local_6c = acStack64;
  local_74[0] = 0xd0;
  local_50 = (char *)0x1;
  local_4c = (char *)0x0;
  local_48 = (char *)0x0;
  local_44 = (_IO_marker *)0x0;
  local_54 = (char *)0x0;
  local_70 = (char *)__fd;
  local_64 = local_6c;
  local_60 = local_6c;
  local_5c = local_6c;
  local_58 = local_6c;
  iVar1 = _vfprintf_internal((FILE *)local_74,__fmt,__arg);
  if ((0 < iVar1) && (iVar2 = fflush_unlocked((FILE *)local_74), iVar2 != 0)) {
    iVar1 = -1;
  }
  return iVar1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x000190d8) */
/* WARNING: Removing unreachable block (ram,0x00018ff4) */
/* WARNING: Removing unreachable block (ram,0x00018ffc) */

uint __stdio_WRITE(ushort *param_1,void *param_2,uint param_3)

{
  char cVar1;
  code *pcVar2;
  ushort uVar4;
  char *pcVar3;
  uint uVar5;
  uint uVar6;
  int unaff_g7;
  int iVar7;
  size_t __n;
  uint uVar8;
  
  uVar8 = param_3;
  while( true ) {
    if (uVar8 == 0) {
      return param_3;
    }
    __n = 0x7fffffff;
    if (-1 < (int)uVar8) {
      __n = uVar8;
    }
    if (*(int *)(param_1 + 2) == -2) break;
    iVar7 = write(*(int *)(param_1 + 2),param_2,__n);
LAB_000190c4:
    if (iVar7 < 0) {
      uVar4 = *param_1;
      goto LAB_00019070;
    }
    uVar8 = uVar8 - iVar7;
    param_2 = (void *)((int)param_2 + iVar7);
  }
  pcVar2 = *(code **)(param_1 + 0x1e);
  if (pcVar2 == (code *)0x0) {
    *(undefined4 *)(unaff_g7 + -8) = 0x16;
    uVar4 = *param_1;
  }
  else {
    *(undefined4 *)(unaff_g7 + -8) = 0xb;
    iVar7 = (*pcVar2)(*(undefined4 *)(param_1 + 0x1a),param_2);
    if (iVar7 != 0) goto LAB_000190c4;
    uVar4 = *param_1;
  }
LAB_00019070:
  *param_1 = uVar4 | 8;
  if (*(int *)(unaff_g7 + -8) == 4) {
    pcVar3 = *(char **)(param_1 + 4);
  }
  else {
    if (*(int *)(unaff_g7 + -8) != 0xb) goto LAB_0001909c;
    pcVar3 = *(char **)(param_1 + 4);
  }
  uVar5 = *(int *)(param_1 + 6) - (int)pcVar3;
  if (uVar5 == 0) {
    return param_3 - uVar8;
  }
  if (uVar8 < uVar5) {
    uVar5 = uVar8;
  }
  uVar6 = 0;
  do {
    cVar1 = *(char *)((int)param_2 + uVar6);
    *pcVar3 = cVar1;
    if ((cVar1 == '\n') && ((*param_1 & 0x100) != 0)) {
      *(char **)(param_1 + 8) = pcVar3;
      goto LAB_00019148;
    }
    uVar6 = uVar6 + 1;
    pcVar3 = pcVar3 + 1;
  } while (uVar6 != uVar5);
  *(char **)(param_1 + 8) = pcVar3;
LAB_00019148:
  uVar8 = uVar8 - (int)(pcVar3 + -*(int *)(param_1 + 4));
LAB_0001909c:
  return param_3 - uVar8;
}


/* WARNING: Removing unreachable block (ram,0x000191d4) */
/* WARNING: Removing unreachable block (ram,0x00019210) */
/* WARNING: Removing unreachable block (ram,0x000191a8) */
/* WARNING: Removing unreachable block (ram,0x00019158) */
/* WARNING: Removing unreachable block (ram,0x00019238) */
/* WARNING: Removing unreachable block (ram,0x000191fc) */
/* WARNING: Removing unreachable block (ram,0x00019274) */

uint __stdio_fwrite(void *param_1,uint param_2,ushort *param_3,undefined4 param_4,undefined4 param_5
                   )

{
  uint uVar1;
  undefined4 uVar2;
  void *__dest;
  int iVar3;
  uint __n;
  
  if ((*param_3 & 0x200) != 0) {
LAB_00019170:
    uVar2 = __stdio_WRITE(param_3,param_1,param_2,param_4,param_5,param_3);
    return uVar2;
  }
  __dest = *(void **)(param_3 + 8);
  uVar1 = *(int *)(param_3 + 6) - (int)__dest;
  if (*(int *)(param_3 + 2) == -3) {
    __n = param_2;
    if (uVar1 < param_2) {
      __n = uVar1;
    }
    memcpy(__dest,param_1,__n);
    *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + __n;
  }
  else {
    if (uVar1 < param_2) {
      if ((*(void **)(param_3 + 4) == __dest) || (iVar3 = __stdio_wcommit(param_3), iVar3 == 0))
      goto LAB_00019170;
      param_2 = 0;
    }
    else {
      memcpy(__dest,param_1,param_2);
      *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + param_2;
      if ((((*param_3 & 0x100) != 0) &&
          (__dest = memrchr(param_1,10,param_2), __dest != (void *)0x0)) &&
         (uVar1 = __stdio_wcommit(param_3), uVar1 != 0)) {
        __n = param_2;
        if (uVar1 < param_2) {
          __n = uVar1;
        }
        __dest = memchr((void *)((int)param_1 + (param_2 - __n)),10,__n);
        if (__dest != (void *)0x0) {
          iVar3 = (int)param_1 + (param_2 - (int)__dest);
          param_2 = param_2 - iVar3;
          *(int *)(param_3 + 8) = *(int *)(param_3 + 8) - iVar3;
        }
      }
    }
  }
  return param_2;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00019368) */
/* WARNING: Removing unreachable block (ram,0x00019290) */
/* WARNING: Removing unreachable block (ram,0x00019298) */

undefined4 __stdio_trans2w(FILE *param_1)

{
  ushort uVar2;
  char *pcVar1;
  int unaff_g7;
  int iVar3;
  
  uVar2 = *(ushort *)&param_1->_flags;
  if ((uVar2 & 0x20) != 0) {
    *(undefined4 *)(unaff_g7 + -8) = 9;
    uVar2 = *(ushort *)&param_1->_flags;
LAB_000192cc:
    *(ushort *)&param_1->_flags = uVar2 | 8;
    return 0xffffffff;
  }
  if ((uVar2 & 3) == 0) {
    uVar2 = *(ushort *)&param_1->_flags;
  }
  else {
    if ((uVar2 & 4) == 0) {
      if ((param_1->_IO_write_ptr == param_1->_IO_write_base) && ((uVar2 & 2) == 0)) {
        uVar2 = *(ushort *)&param_1->_flags;
      }
      else {
        iVar3 = fseek(param_1,0,(uint)((uVar2 & 0x400) != 0) + 1);
        uVar2 = *(ushort *)&param_1->_flags;
        if (iVar3 != 0) goto LAB_000192cc;
      }
    }
    else {
      uVar2 = *(ushort *)&param_1->_flags;
    }
    *(ushort *)&param_1->_flags = uVar2 & 0xfffc;
    pcVar1 = param_1->_IO_read_end;
    param_1->_IO_write_end = pcVar1;
    param_1->_IO_write_base = pcVar1;
    param_1->_IO_write_ptr = pcVar1;
    uVar2 = *(ushort *)&param_1->_flags;
  }
  *(ushort *)&param_1->_flags = uVar2 | 0x40;
  if ((uVar2 & 0x300) == 0) {
    param_1->_IO_buf_base = param_1->_IO_read_base;
  }
  return 0;
}


/* WARNING: Removing unreachable block (ram,0x00019384) */
/* WARNING: Removing unreachable block (ram,0x000193b8) */
/* WARNING: Removing unreachable block (ram,0x000193a4) */
/* WARNING: Removing unreachable block (ram,0x000193fc) */

int _load_inttype(uint param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 < 0) {
    if ((param_1 & 0x800) == 0) {
      iVar2 = *(int *)param_2;
      if (param_1 == 0x100) {
        iVar2 = (int)(char)iVar2;
      }
      else {
        if (param_1 != 0x200) {
          return iVar2 >> 0x1f;
        }
        iVar2 = (int)(short)iVar2;
      }
      return iVar2 >> 0x1f;
    }
    uVar1 = (undefined4)((ulonglong)*param_2 >> 0x20);
  }
  else {
    if ((param_1 & 0x800) == 0) {
      return 0;
    }
    uVar1 = (undefined4)((ulonglong)*param_2 >> 0x20);
  }
  return uVar1;
}


/* WARNING: Removing unreachable block (ram,0x0001941c) */
/* WARNING: Removing unreachable block (ram,0x00019458) */
/* WARNING: Removing unreachable block (ram,0x00019430) */
/* WARNING: Removing unreachable block (ram,0x00019444) */

undefined8 * _store_inttype(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0x100) {
    *(char *)param_1 = (char)param_4;
  }
  else {
    if (param_2 == 0x800) {
      *param_1 = CONCAT71(CONCAT61(CONCAT42(param_3,(short)((uint)param_4 >> 0x10)),
                                   (char)((uint)param_4 >> 8)),(char)param_4);
      return param_1;
    }
    if (param_2 == 0x200) {
      *(short *)param_1 = (short)param_4;
      return param_1;
    }
    *(undefined4 *)param_1 = param_4;
  }
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x00019468) */
/* WARNING: Removing unreachable block (ram,0x00019580) */

undefined * _uintmaxtostr(undefined *param_1,uint param_2,uint param_3,uint param_4,char param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  bool bVar10;
  
  bVar1 = false;
  if (((int)param_4 < 0) && (param_4 = -param_4, (int)param_2 < 0)) {
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    bVar1 = true;
    param_2 = -(uint)bVar10 - param_2;
  }
  uVar7 = 0xffffffff / param_4;
  uVar8 = -(uVar7 * param_4);
  *param_1 = 0;
  if (param_4 == uVar8) {
    uVar7 = uVar7 + 1;
    uVar8 = 0;
  }
  do {
    puVar9 = param_1;
    uVar2 = param_3 / param_4;
    param_3 = param_3 - uVar2 * param_4;
    uVar6 = param_2;
    if (param_2 != 0) {
      uVar6 = param_2 / param_4;
      iVar3 = param_2 - uVar6 * param_4;
      param_3 = uVar8 * iVar3 + param_3;
      uVar4 = param_3 / param_4;
      uVar2 = uVar7 * iVar3 + uVar2 + uVar4;
      param_3 = param_3 - uVar4 * param_4;
    }
    cVar5 = (char)param_3 + param_5;
    if (param_3 < 10) {
      cVar5 = (char)param_3 + '0';
    }
    puVar9[-1] = cVar5;
    param_1 = puVar9 + -1;
    param_2 = uVar6;
    param_3 = uVar2;
  } while ((uVar6 | uVar2) != 0);
  if (bVar1) {
    puVar9[-2] = 0x2d;
    param_1 = puVar9 + -2;
  }
  return param_1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00019b84) */
/* WARNING: Removing unreachable block (ram,0x00019590) */
/* WARNING: Removing unreachable block (ram,0x00019620) */
/* WARNING: Removing unreachable block (ram,0x000195ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * _fpmaxtostr(undefined4 param_1,float param_2,float param_3,byte **param_4,code *param_5)

{
  int iVar1;
  bool bVar2;
  byte **ppbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  char cVar15;
  int iVar16;
  double *pdVar17;
  byte bVar19;
  byte *pbVar18;
  byte *pbVar20;
  byte *pbVar21;
  byte **ppbVar22;
  int iVar23;
  byte *pbVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  bool bVar30;
  char local_90 [4];
  byte local_8c;
  undefined local_8b;
  char local_88;
  char local_7c [4];
  undefined2 local_78;
  byte local_76 [22];
  byte *local_60;
  byte *local_5c;
  char *local_58;
  uint local_54;
  byte *local_50;
  char *local_4c;
  byte *local_48;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  undefined4 local_34;
  byte *local_30 [12];
  
  local_88 = 'e';
  pbVar12 = param_4[2];
  dVar25 = (double)CONCAT44(param_2,param_3);
  uVar5 = (uint)pbVar12 & 0xff | 0x20;
  pbVar20 = param_4[1];
  pbVar21 = *param_4;
  if (uVar5 == 0x61) {
    local_88 = 'p';
    bVar2 = false;
    if ((int)pbVar21 < 0) {
      bVar2 = true;
      pbVar21 = (byte *)0xe;
    }
  }
  else {
    bVar2 = false;
    if ((int)pbVar21 < 0) {
      pbVar21 = (byte *)0x6;
    }
  }
  local_90[0] = '\0';
  if (((uint)param_4[3] & 2) == 0) {
    if (((uint)param_4[3] & 1) != 0) {
      local_90[0] = ' ';
    }
  }
  else {
    local_90[0] = '+';
  }
  local_90[1] = 0;
  local_4c = (char *)0x0;
  cVar15 = (dVar25 < _UNK_0001ce08) + (_UNK_0001ce08 < dVar25) * '\x02';
  dVar28 = _UNK_0001cdf8;
  if ((cVar15 == '\x01' || cVar15 == '\x02') || cVar15 == '\x03') {
    cVar15 = (dVar25 < _UNK_0001ce08) + (_UNK_0001ce08 < dVar25) * '\x02';
    if ((cVar15 != '\0' && cVar15 != '\x02') && cVar15 != '\x03') {
      param_2 = -param_2;
      local_90[0] = '-';
    }
    dVar27 = (double)CONCAT44(param_2,param_3);
    if ((char)((dVar27 * _UNK_0001ce10 < dVar27) + (dVar27 < dVar27 * _UNK_0001ce10) * '\x02') ==
        '\0') {
      param_4[4] = (byte *)0x20;
      local_54 = 0x70;
      local_50 = (byte *)0x3;
      iVar6 = 0;
      if (((uint)pbVar12 & 0xff) < 0x61) {
        iVar6 = 4;
      }
      local_4c = fmt + iVar6;
      ppbVar22 = &local_48;
      goto LAB_00019678;
    }
    if (uVar5 == 0x61) {
      iVar6 = -0x111e8;
      pbVar4 = (byte *)0x7;
      iVar16 = -0x11210;
      iVar23 = 0xe;
      iVar9 = 8;
      uVar5 = 0x10;
      dVar28 = _UNK_0001cde8;
    }
    else {
      iVar6 = -0x111a0;
      pbVar4 = &DAT_00000008;
      iVar16 = -0x11200;
      iVar23 = 0x11;
      iVar9 = 9;
      uVar5 = 10;
    }
    dVar29 = *(double *)((int)&_GLOBAL_OFFSET_TABLE_ + iVar16);
    pdVar17 = (double *)((int)&PTR_0002e040 + iVar6);
    dVar25 = (double)CONCAT44(param_2,param_3);
    iVar16 = 0x100;
    do {
      cVar15 = (dVar27 < dVar29) + (dVar29 < dVar27) * '\x02';
      if ((cVar15 == '\0' || cVar15 == '\x02') || cVar15 == '\x03') {
        dVar26 = dVar25 / *pdVar17;
        cVar15 = (dVar26 < dVar29) + (dVar29 < dVar26) * '\x02';
        iVar1 = iVar16;
        if (cVar15 != '\x01' && cVar15 != '\x03') goto LAB_000198bc;
      }
      else {
        dVar26 = dVar25 * *pdVar17;
        cVar15 = (dVar26 < dVar28) + (dVar28 < dVar26) * '\x02';
        if ((cVar15 != '\0' && cVar15 != '\x02') && cVar15 != '\x03') {
          iVar1 = -iVar16;
LAB_000198bc:
          dVar25 = dVar26;
          pbVar4 = pbVar4 + iVar1;
        }
      }
      iVar16 = iVar16 >> 1;
      bVar30 = (double *)((int)&_GLOBAL_OFFSET_TABLE_ + iVar6) != pdVar17;
      pdVar17 = pdVar17 + -1;
    } while (bVar30);
    cVar15 = (dVar25 < dVar28) + (dVar28 < dVar25) * '\x02';
    if (cVar15 != '\x01' && cVar15 != '\x03') {
      pbVar4 = pbVar4 + 1;
      dVar25 = dVar25 / *(double *)((int)&_GLOBAL_OFFSET_TABLE_ + iVar6);
    }
  }
  else {
    if (param_3 != param_2) {
      local_90[0] = '-';
    }
    pbVar4 = (byte *)0xffffffff;
    iVar23 = 0x11;
    iVar9 = 9;
    uVar5 = 10;
  }
  pbVar18 = local_76;
  iVar6 = 2;
  pbVar13 = pbVar18;
  while( true ) {
    cVar15 = (dVar25 < _UNK_0001cdf0) + (_UNK_0001cdf0 < dVar25) * '\x02';
    if (cVar15 == '\0' || cVar15 == '\x02') {
      uVar8 = (uint)((ulonglong)(longlong)(dVar25 - _UNK_0001cdf0) >> 0x20) ^ 0x80000000;
    }
    else {
      uVar8 = (uint)((ulonglong)(longlong)dVar25 >> 0x20);
    }
    dVar27 = (double)uVar8;
    if ((int)uVar8 < 0) {
      dVar27 = dVar27 + _UNK_0001cde8;
    }
    pbVar13 = pbVar13 + iVar9;
    dVar25 = (dVar25 - dVar27) * dVar28;
    iVar16 = 0;
    do {
      iVar16 = iVar16 + 1;
      pbVar13[-iVar16] = ((char)uVar8 - (char)(uVar8 / uVar5) * (char)uVar5) + 0x30;
      uVar8 = uVar8 / uVar5;
    } while (iVar9 != iVar16);
    if (iVar6 == 1) break;
    iVar6 = 1;
  }
  if (((uint)pbVar12 & 0xff) < 0x61) {
    pbVar12 = pbVar12 + 0x20;
    local_88 = local_88 + -0x20;
  }
  uVar8 = (uint)pbVar12 & 0xff;
  if ((uVar8 == 0x67) && (0 < (int)pbVar21)) {
    pbVar21 = pbVar21 + -1;
    pbVar13 = pbVar21;
  }
  else {
    pbVar13 = pbVar21;
    if ((uVar8 == 0x66) && (pbVar13 = pbVar4 + (int)pbVar21, (int)(pbVar4 + (int)pbVar21) < -1)) {
      memset(&local_78,0x30,0x11);
      pbVar4 = (byte *)0xffffffff;
      pbVar13 = (byte *)0xffffffff;
    }
  }
  local_78 = 0x30;
  pbVar14 = (byte *)((int)&local_78 + 1);
  if ((int)pbVar13 < iVar23) {
    pbVar7 = pbVar13 + 2;
    bVar30 = (uVar5 >> 1) + 0x30 <= (uint)pbVar14[(int)pbVar7];
  }
  else {
    pbVar7 = (byte *)(iVar23 + 1);
    bVar30 = false;
  }
  pbVar7 = pbVar14 + (int)pbVar7;
  do {
    do {
      pbVar7 = pbVar7 + -1;
      bVar19 = bVar30 + *pbVar7;
      *pbVar7 = bVar19;
    } while (bVar19 == 0x30);
  } while (uVar5 + 0x2f < (uint)bVar19);
  if (((uint)pbVar12 & 0xff | 0x20) == 0x61) {
    pbVar24 = pbVar7;
    while (bVar19 = *pbVar24, bVar19 != 0) {
      if (bVar19 < 0x3a) {
        pbVar24 = pbVar24 + -1;
      }
      else {
        *pbVar24 = bVar19 + local_88 + -0x49;
        pbVar24 = pbVar24 + -1;
      }
    }
    if (pbVar14 < pbVar7) {
      pbVar4 = (byte *)((int)pbVar4 << 2);
    }
    else {
LAB_00019a74:
      pbVar4 = pbVar4 + 1;
      pbVar7 = pbVar14;
      pbVar18 = pbVar14;
    }
  }
  else {
    if (pbVar7 <= pbVar14) goto LAB_00019a74;
  }
  pbVar7[1] = 0;
  if (uVar8 == 0x67) {
    if (((int)pbVar4 < -4) || ((int)pbVar13 < (int)pbVar4)) {
      pbVar13 = (byte *)0x0;
    }
    else {
      pbVar21 = pbVar13 + -(int)pbVar4;
LAB_00019ac4:
      pbVar12 = (byte *)0x66;
      pbVar13 = pbVar4;
      if ((int)pbVar4 < 0) {
        pbVar18 = pbVar18 + -1;
        *pbVar18 = 0x30;
      }
    }
  }
  else {
    pbVar13 = (byte *)0x0;
    if (uVar8 == 0x66) goto LAB_00019ac4;
  }
  local_50 = (byte *)0x1;
  local_4c = local_90 + 4;
  local_54 = 0xb0;
  pbVar14 = pbVar18 + 1;
  local_8b = 0;
  local_8c = *pbVar18;
  pbVar7 = pbVar7 + (1 - (int)pbVar14);
  ppbVar22 = &local_48;
  if (-1 < (int)pbVar13) {
    local_40 = pbVar14;
    local_48 = (byte *)0x70;
    if ((int)pbVar13 < (int)pbVar7) {
      if (0 < (int)pbVar13) {
        local_44 = pbVar13;
        pbVar14 = pbVar14 + (int)pbVar13;
        pbVar7 = pbVar7 + -(int)pbVar13;
        ppbVar22 = &local_3c;
        goto LAB_00019c7c;
      }
      pbVar13 = (byte *)0xffffffff;
    }
    else {
      local_44 = pbVar7;
      ppbVar22 = &local_3c;
      pbVar7 = pbVar13 + -(int)pbVar7;
      pbVar13 = (byte *)0xffffffff;
      if (pbVar7 != (byte *)0x0) {
        local_38 = pbVar7;
        local_3c = (byte *)0xb0;
        pbVar7 = (byte *)0x0;
        ppbVar22 = local_30;
        local_34 = 0x1ceab;
LAB_00019c7c:
        pbVar13 = (byte *)0xffffffff;
      }
    }
  }
  pbVar18 = param_4[3];
  if ((((uint)pbVar7 | (uint)pbVar18 & 0x10) != 0) ||
     ((ppbVar3 = ppbVar22, uVar8 != 0x67 && uVar8 != 0x61 && (pbVar21 != (byte *)0x0)))) {
    *ppbVar22 = (byte *)0x70;
    ppbVar3 = ppbVar22 + 3;
    ppbVar22[1] = (byte *)0x1;
    ppbVar22[2] = (byte *)0x1ceb8;
  }
  ppbVar22 = ppbVar3;
  if (pbVar13 + 1 != (byte *)0x0) {
    ppbVar3[1] = (byte *)~(uint)pbVar13;
    *ppbVar3 = (byte *)0xb0;
    ppbVar22 = ppbVar3 + 3;
    ppbVar3[2] = (byte *)0x1ceab;
  }
  if (pbVar7 != (byte *)0x0) {
    ppbVar22[1] = pbVar7;
    *ppbVar22 = (byte *)0x70;
    ppbVar22[2] = pbVar14;
    ppbVar22 = ppbVar22 + 3;
  }
  ppbVar3 = ppbVar22;
  if ((((((uint)pbVar18 & 0x10) != 0) || (uVar8 != 0x67)) && (!bVar2)) &&
     ((int)(pbVar7 + -(int)(pbVar13 + 1)) < (int)pbVar21)) {
    *ppbVar22 = (byte *)0xb0;
    ppbVar22[1] = pbVar21 + -(int)(pbVar7 + -(int)(pbVar13 + 1));
    ppbVar3 = ppbVar22 + 3;
    ppbVar22[2] = (byte *)0x1ceab;
  }
  ppbVar22 = ppbVar3;
  if (((uint)pbVar12 & 0xff) != 0x66) {
    iVar6 = 4;
    if (uVar8 == 0x61) {
      iVar6 = 3;
    }
    cVar15 = '+';
    if ((int)pbVar4 < 0) {
      pbVar4 = (byte *)-(int)pbVar4;
      cVar15 = '-';
    }
    local_7c[3] = 0;
    pbVar21 = (byte *)0x2;
    pcVar11 = local_7c + 3;
    do {
      while( true ) {
        pcVar10 = pcVar11;
        pbVar13 = (byte *)((int)pbVar4 / 10);
        pcVar11 = pcVar10 + -1;
        *pcVar11 = (char)pbVar4 + (char)pbVar13 * -10 + '0';
        pbVar21 = pbVar21 + 1;
        pbVar4 = pbVar13;
        if (iVar6 <= (int)pbVar21) break;
        pbVar21 = (byte *)0x3;
      }
    } while (pbVar13 != (byte *)0x0);
    pcVar10[-2] = cVar15;
    pcVar10[-3] = local_88;
    ppbVar3[1] = pbVar21;
    *ppbVar3 = (byte *)0x70;
    ppbVar22 = ppbVar3 + 3;
    *(char **)(ppbVar3 + 2) = pcVar10 + -3;
  }
LAB_00019678:
  ppbVar3 = &local_50;
  do {
    pbVar21 = *ppbVar3;
    ppbVar3 = ppbVar3 + 3;
    pbVar20 = pbVar20 + -(int)pbVar21;
  } while (ppbVar3 < ppbVar22);
  local_60 = (byte *)0xa0;
  local_58 = local_90;
  pbVar21 = (byte *)(uint)(local_90[0] != '\0');
  local_5c = pbVar21;
  if ((((uint)pbVar12 & 0xff | 0x20) == 0x61) && (0xf < local_54)) {
    local_90[(int)pbVar21] = '0';
    local_5c = pbVar21 + 2;
    local_90[(int)(pbVar21 + 2)] = '\0';
    local_90[(int)(pbVar21 + 1)] = local_88 + '\b';
  }
  pbVar20 = pbVar20 + -(int)local_5c;
  if (0 < (int)pbVar20) {
    if (((uint)param_4[3] & 8) == 0) {
      if (param_4[4] == (byte *)0x30) {
        local_50 = pbVar20 + (int)local_50;
      }
      else {
        local_5c = pbVar20 + (int)local_5c;
      }
    }
    else {
      ppbVar22[1] = pbVar20;
      *ppbVar22 = (byte *)0xa0;
      ppbVar22[2] = (byte *)0x1ceab;
      ppbVar22 = ppbVar22 + 3;
    }
  }
  ppbVar3 = &local_60;
  pbVar12 = (byte *)0x0;
  do {
    pbVar21 = ppbVar3[1];
    pbVar20 = (byte *)(*param_5)(param_1,*ppbVar3,pbVar21,ppbVar3[2]);
    ppbVar3 = ppbVar3 + 3;
    if (pbVar20 != pbVar21) {
      return (byte *)0xffffffff;
    }
    pbVar12 = pbVar20 + (int)pbVar12;
  } while (ppbVar3 < ppbVar22);
  return pbVar12;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x00019f28) */
/* WARNING: Removing unreachable block (ram,0x0001a168) */
/* WARNING: Removing unreachable block (ram,0x00019eac) */
/* WARNING: Removing unreachable block (ram,0x00019fdc) */
/* WARNING: Removing unreachable block (ram,0x00019eb4) */

ushort * _stdio_openlist_dec_use(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int unaff_g7;
  ushort *__ptr;
  ushort *puVar6;
  
  iVar3 = _stdio_openlist_del_lock._0_4_;
  iVar5 = _stdio_openlist_del_lock._8_4_;
  if (_stdio_openlist_del_lock._8_4_ != unaff_g7) {
    do {
      cVar2 = __sparc32_atomic_locks[28];
      __sparc32_atomic_locks[28] = -1;
    } while (cVar2 != '\0');
    if (_stdio_openlist_del_lock._0_4_ == 0) {
      _stdio_openlist_del_lock._0_4_ = 1;
    }
    __sparc32_atomic_locks[28] = '\0';
    iVar5 = unaff_g7;
    if (iVar3 != 0) {
      __lll_lock_wait_private(_stdio_openlist_del_lock);
      iVar5 = unaff_g7;
    }
  }
  _stdio_openlist_del_lock._8_4_ = iVar5;
  iVar3 = _stdio_openlist_add_lock._0_4_;
  _stdio_openlist_del_lock._4_4_ = _stdio_openlist_del_lock._4_4_ + 1;
  if ((_stdio_openlist_use_count == 1) && (0 < _stdio_openlist_del_count)) {
    iVar5 = _stdio_openlist_add_lock._8_4_;
    if (_stdio_openlist_add_lock._8_4_ != unaff_g7) {
      do {
        cVar2 = __sparc32_atomic_locks[27];
        __sparc32_atomic_locks[27] = -1;
      } while (cVar2 != '\0');
      if (_stdio_openlist_add_lock._0_4_ == 0) {
        _stdio_openlist_add_lock._0_4_ = 1;
      }
      __sparc32_atomic_locks[27] = '\0';
      iVar5 = unaff_g7;
      if (iVar3 != 0) {
        __lll_lock_wait_private(_stdio_openlist_add_lock);
        iVar5 = unaff_g7;
      }
    }
    _stdio_openlist_add_lock._8_4_ = iVar5;
    _stdio_openlist_add_lock._4_4_ = _stdio_openlist_add_lock._4_4_ + 1;
    puVar6 = _stdio_openlist;
    puVar4 = (ushort *)0x0;
    while (param_1 = puVar4, __ptr = puVar6, iVar3 = _stdio_openlist_add_lock._0_4_,
          __ptr != (ushort *)0x0) {
      uVar1 = *__ptr;
      puVar6 = *(ushort **)(__ptr + 0x10);
      puVar4 = __ptr;
      if ((uVar1 & 0x8030) == 0x30) {
        puVar4 = puVar6;
        if (param_1 != (ushort *)0x0) {
          *(ushort **)(param_1 + 0x10) = puVar6;
          puVar4 = _stdio_openlist;
        }
        _stdio_openlist = puVar4;
        puVar4 = param_1;
        if ((uVar1 & 0x2000) != 0) {
          free(__ptr);
        }
      }
    }
    _stdio_openlist_add_lock._4_4_ = _stdio_openlist_add_lock._4_4_ + -1;
    if (_stdio_openlist_add_lock._4_4_ == 0) {
      _stdio_openlist_add_lock._8_4_ = 0;
      do {
        cVar2 = __sparc32_atomic_locks[27];
        __sparc32_atomic_locks[27] = -1;
      } while (cVar2 != '\0');
      __sparc32_atomic_locks[27] = '\0';
      _stdio_openlist_add_lock._0_4_ = 0;
      if (iVar3 < 2) {
        _stdio_openlist_del_count = 0;
        goto LAB_0001a0a4;
      }
      sw_trap(0x10);
    }
    _stdio_openlist_del_count = 0;
  }
LAB_0001a0a4:
  iVar3 = _stdio_openlist_del_lock._0_4_;
  if (_stdio_openlist_del_lock._4_4_ + -1 == 0) {
    _stdio_openlist_del_lock._8_4_ = 0;
    do {
      cVar2 = __sparc32_atomic_locks[28];
      __sparc32_atomic_locks[28] = -1;
    } while (cVar2 != '\0');
    __sparc32_atomic_locks[28] = '\0';
    _stdio_openlist_del_lock._0_4_ = 0;
    if (1 < iVar3) {
      sw_trap(0x10);
    }
  }
  _stdio_openlist_use_count = _stdio_openlist_use_count + -1;
  _stdio_openlist_del_lock._4_4_ = _stdio_openlist_del_lock._4_4_ + -1;
  return param_1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001a264) */
/* WARNING: Removing unreachable block (ram,0x0001a408) */
/* WARNING: Removing unreachable block (ram,0x0001a4d4) */
/* WARNING: Removing unreachable block (ram,0x0001a180) */
/* WARNING: Removing unreachable block (ram,0x0001a4a4) */
/* WARNING: Removing unreachable block (ram,0x0001a370) */
/* WARNING: Removing unreachable block (ram,0x0001a1c4) */
/* WARNING: Removing unreachable block (ram,0x0001a188) */

int fflush_unlocked(FILE *__stream)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  int unaff_g7;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ushort *puVar7;
  
  iVar5 = _stdio_openlist_del_lock._0_4_;
  if (__stream == (FILE *)&_stdio_openlist) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x100;
    if (__stream != (FILE *)0x0) {
      iVar5 = 0;
      if ((*(ushort *)&__stream->_flags & 0x40) != 0) {
        iVar4 = __stdio_wcommit(__stream);
        if (iVar4 == 0) {
          __stream->_IO_buf_base = __stream->_IO_read_end;
          *(ushort *)&__stream->_flags = *(ushort *)&__stream->_flags & 0xffbf;
        }
        else {
          iVar5 = -1;
        }
      }
      return iVar5;
    }
  }
  iVar4 = _stdio_openlist_del_lock._8_4_;
  if (_stdio_openlist_del_lock._8_4_ != unaff_g7) {
    do {
      cVar2 = __sparc32_atomic_locks[28];
      __sparc32_atomic_locks[28] = -1;
    } while (cVar2 != '\0');
    if (_stdio_openlist_del_lock._0_4_ == 0) {
      _stdio_openlist_del_lock._0_4_ = 1;
    }
    __sparc32_atomic_locks[28] = '\0';
    iVar4 = unaff_g7;
    if (iVar5 != 0) {
      __stream = (FILE *)__lll_lock_wait_private(_stdio_openlist_del_lock);
      iVar4 = unaff_g7;
    }
  }
  _stdio_openlist_del_lock._8_4_ = iVar4;
  iVar4 = _stdio_openlist_add_lock._0_4_;
  iVar5 = _stdio_openlist_del_lock._0_4_;
  _stdio_openlist_use_count = _stdio_openlist_use_count + 1;
  if (_stdio_openlist_del_lock._4_4_ == 0) {
    _stdio_openlist_del_lock._8_4_ = 0;
    do {
      cVar2 = __sparc32_atomic_locks[28];
      __sparc32_atomic_locks[28] = -1;
    } while (cVar2 != '\0');
    __sparc32_atomic_locks[28] = '\0';
    _stdio_openlist_del_lock._0_4_ = 0;
    if (1 < iVar5) {
      sw_trap(0x10);
      __stream = (FILE *)_stdio_openlist_del_lock;
    }
  }
  iVar5 = _stdio_openlist_add_lock._8_4_;
  if (_stdio_openlist_add_lock._8_4_ != unaff_g7) {
    do {
      cVar2 = __sparc32_atomic_locks[27];
      __sparc32_atomic_locks[27] = -1;
    } while (cVar2 != '\0');
    if (_stdio_openlist_add_lock._0_4_ == 0) {
      _stdio_openlist_add_lock._0_4_ = 1;
    }
    __sparc32_atomic_locks[27] = '\0';
    iVar5 = unaff_g7;
    if (iVar4 != 0) {
      __stream = (FILE *)__lll_lock_wait_private(_stdio_openlist_add_lock);
      iVar5 = unaff_g7;
    }
  }
  _stdio_openlist_add_lock._8_4_ = iVar5;
  iVar5 = _stdio_openlist_add_lock._0_4_;
  puVar7 = _stdio_openlist;
  if (_stdio_openlist_add_lock._4_4_ == 0) {
    _stdio_openlist_add_lock._8_4_ = 0;
    do {
      cVar2 = __sparc32_atomic_locks[27];
      __sparc32_atomic_locks[27] = -1;
    } while (cVar2 != '\0');
    __sparc32_atomic_locks[27] = '\0';
    _stdio_openlist_add_lock._0_4_ = 0;
    iVar4 = 0;
    if (iVar5 < 2) goto LAB_0001a3fc;
    sw_trap(0x10);
    __stream = (FILE *)_stdio_openlist_add_lock;
  }
  iVar4 = 0;
LAB_0001a3fc:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          if (puVar7 == (ushort *)0x0) {
            _stdio_openlist_dec_use(__stream);
            return iVar4;
          }
          if ((*puVar7 & 0x40) != 0) break;
          puVar7 = *(ushort **)(puVar7 + 0x10);
        }
        if (_stdio_user_locking == 2) {
          uVar1 = *puVar7;
        }
        else {
          if (*(int *)(puVar7 + 0x18) != unaff_g7) {
            __stream = (FILE *)(puVar7 + 0x14);
            uVar3 = ((int)__stream >> 2 ^ (int)__stream >> 0xc) & 0x3f;
            do {
              cVar2 = __sparc32_atomic_locks[uVar3];
              __sparc32_atomic_locks[uVar3] = -1;
            } while (cVar2 != '\0');
            iVar5 = *(int *)(puVar7 + 0x14);
            if (iVar5 == 0) {
              *(undefined4 *)(puVar7 + 0x14) = 1;
            }
            __sparc32_atomic_locks[uVar3] = 0;
            if (iVar5 == 0) {
              *(int *)(puVar7 + 0x18) = unaff_g7;
            }
            else {
              __stream = (FILE *)__lll_lock_wait_private();
              *(int *)(puVar7 + 0x18) = unaff_g7;
            }
          }
          *(int *)(puVar7 + 0x16) = *(int *)(puVar7 + 0x16) + 1;
          uVar1 = *puVar7;
        }
        if ((((uVar1 | uVar6) ^ 0x140) & 0x340) == 0) {
          __stream = (FILE *)__stdio_wcommit(puVar7);
          if (__stream == (FILE *)0x0) {
            *(undefined4 *)(puVar7 + 0xe) = *(undefined4 *)(puVar7 + 4);
            *puVar7 = *puVar7 & 0xffbf;
          }
          else {
            iVar4 = -1;
          }
        }
        if (_stdio_user_locking != 2) break;
        puVar7 = *(ushort **)(puVar7 + 0x10);
      }
      iVar5 = *(int *)(puVar7 + 0x16);
      *(int *)(puVar7 + 0x16) = iVar5 + -1;
      if (iVar5 + -1 == 0) break;
LAB_0001a58c:
      puVar7 = *(ushort **)(puVar7 + 0x10);
    }
    __stream = (FILE *)(puVar7 + 0x14);
    *(undefined4 *)(puVar7 + 0x18) = 0;
    uVar3 = ((int)__stream >> 2 ^ (int)__stream >> 0xc) & 0x3f;
    do {
      cVar2 = __sparc32_atomic_locks[uVar3];
      __sparc32_atomic_locks[uVar3] = -1;
    } while (cVar2 != '\0');
    iVar5 = *(int *)(puVar7 + 0x14);
    *(undefined4 *)(puVar7 + 0x14) = 0;
    __sparc32_atomic_locks[uVar3] = 0;
    if (1 < iVar5) {
      sw_trap(0x10);
      goto LAB_0001a58c;
    }
    puVar7 = *(ushort **)(puVar7 + 0x10);
  } while( true );
}


void * memchr(void *__s,int __c,size_t __n)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = __c & 0xff;
  uVar4 = uVar7 | uVar7 << 8;
  puVar5 = (uint *)__s;
  uVar8 = __n;
  if (((uint)__s & 3) != 0) {
    if (__n == 0) {
      return (void *)0x0;
    }
    puVar5 = (uint *)((int)__s + 1);
    if ((uint)*(byte *)__s == uVar7) {
LAB_0001a614:
      return (void *)((int)puVar5 + -1);
    }
    if (__n - 1 == 0) {
      return (void *)0x0;
    }
    uVar8 = __n - 1;
    if (((uint)puVar5 & 3) != 0) {
      bVar1 = *(byte *)puVar5;
      puVar5 = (uint *)((int)__s + 2);
      if ((uint)bVar1 == uVar7) goto LAB_0001a614;
      if (__n - 2 == 0) {
        return (void *)0x0;
      }
      uVar8 = __n - 2;
      if (((uint)puVar5 & 3) != 0) {
        bVar1 = *(byte *)puVar5;
        puVar5 = (uint *)((int)__s + 3);
        if ((uint)bVar1 == uVar7) goto LAB_0001a614;
        uVar8 = __n - 3;
        if (__n - 3 == 0) {
          return (void *)0x0;
        }
      }
    }
  }
  uVar2 = uVar8 & 3;
  uVar8 = uVar8 & 0xfffffffc;
  if (uVar8 != 0) {
    uVar3 = *puVar5;
    while( true ) {
      while( true ) {
        puVar6 = puVar5 + 1;
        uVar8 = uVar8 - 4;
        if (((uVar3 ^ (uVar4 << 0x10 | uVar4)) + 0xfefefeff & 0x80808080) != 0) break;
        puVar5 = puVar6;
        if (uVar8 == 0) goto LAB_0001a67c;
        uVar3 = *puVar6;
      }
      if (uVar3 >> 0x18 == uVar7) goto LAB_0001a72c;
      if ((uVar3 >> 0x10 & 0xff) == uVar7) goto LAB_0001a724;
      if ((uVar3 >> 8 & 0xff) == uVar7) goto LAB_0001a71c;
      if ((uVar3 & 0xff) == uVar7) {
        return (byte *)((int)puVar5 + 3);
      }
      puVar5 = puVar6;
      if (uVar8 == 0) break;
      uVar3 = *puVar6;
    }
  }
LAB_0001a67c:
  puVar6 = puVar5 + 1;
  if (uVar2 != 0) {
    if ((uint)*(byte *)puVar5 == uVar7) {
LAB_0001a72c:
      return puVar6 + -1;
    }
    if (uVar2 != 1) {
      if ((uint)*(byte *)((int)puVar5 + 1) == uVar7) {
LAB_0001a724:
        return (byte *)((int)puVar6 + -3);
      }
      if ((uVar2 != 2) && ((uint)*(byte *)((int)puVar5 + 2) == uVar7)) {
LAB_0001a71c:
        return (byte *)((int)puVar6 + -2);
      }
    }
  }
  return (void *)0x0;
}


/* WARNING: Instruction at (ram,0x0001a88c) overlaps instruction at (ram,0x0001a888)
    */

char * strcat(char *__dest,char *__src)

{
  ushort uVar1;
  char cVar3;
  uint uVar2;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  bool bVar10;
  
  puVar5 = (uint *)__dest;
  if ((((uint)__dest & 3) == 0) ||
     ((puVar5 = (uint *)(__dest + 1), *__dest != '\0' &&
      ((((uint)puVar5 & 3) == 0 ||
       ((cVar3 = *(char *)puVar5, puVar5 = (uint *)(__dest + 2), cVar3 != '\0' &&
        ((((uint)puVar5 & 3) == 0 ||
         (cVar3 = *(char *)puVar5, puVar5 = (uint *)(__dest + 3), cVar3 != '\0')))))))))) {
    do {
      uVar7 = *puVar5;
      puVar4 = puVar5;
      while (puVar5 = puVar4 + 1, (uVar7 + 0xfefefeff & 0x80808080) != 0) {
        puVar5 = puVar4;
        if (((uVar7 >> 0x18 == 0) ||
            (puVar5 = (uint *)((int)puVar4 + 1), (uVar7 >> 0x10 & 0xff) == 0)) ||
           (puVar5 = (uint *)((int)puVar4 + 2), (uVar7 >> 8 & 0xff) == 0)) goto LAB_0001a87c;
        if ((uVar7 & 0xff) == 0) {
          puVar5 = (uint *)((int)puVar4 + 3);
          goto LAB_0001a87c;
        }
        uVar7 = puVar4[1];
        puVar4 = puVar4 + 1;
      }
    } while( true );
  }
  puVar5 = (uint *)((int)puVar5 + -1);
LAB_0001a87c:
  uVar7 = (uint)__src & 3;
  if (uVar7 != 0) {
    if (uVar7 != 2) {
      cVar3 = *__src;
      __src = __src + 1;
      *(char *)puVar5 = cVar3;
      if (uVar7 == 3) {
        puVar5 = (uint *)((int)puVar5 + 1);
        if (cVar3 == '\0') {
          return __dest;
        }
        goto code_r0x0001a888;
      }
      puVar5 = (uint *)((int)puVar5 + 1);
      if (cVar3 == '\0') {
        return __dest;
      }
    }
    uVar1 = *(ushort *)__src;
    __src = (char *)((int)__src + 2);
    *(char *)puVar5 = (char)(uVar1 >> 8);
    if (uVar1 >> 8 == 0) {
      return __dest;
    }
    *(char *)((int)puVar5 + 1) = (char)uVar1;
    puVar5 = (uint *)((int)puVar5 + 2);
    if ((uVar1 & 0xff) == 0) {
      return __dest;
    }
  }
code_r0x0001a888:
  uVar7 = (uint)puVar5 & 3;
  uVar8 = *(uint *)__src;
  if (uVar7 == 0) {
    do {
      __src = (char *)((uint *)__src + 1);
      if ((uVar8 + 0xfefefeff & 0x80808080) == 0) {
        *puVar5 = uVar8;
      }
      else {
        if (uVar8 >> 0x18 == 0) {
          *(char *)puVar5 = '\0';
          return __dest;
        }
        uVar9 = (undefined2)(uVar8 >> 0x10);
        if ((uVar8 >> 0x10 & 0xff) == 0) {
          *(undefined2 *)puVar5 = uVar9;
          return __dest;
        }
        if ((uVar8 >> 8 & 0xff) == 0) {
          *(undefined2 *)puVar5 = uVar9;
          *(char *)((int)puVar5 + 2) = '\0';
          return __dest;
        }
        *puVar5 = uVar8;
        if ((uVar8 & 0xff) == 0) {
          return __dest;
        }
      }
      uVar8 = *(uint *)__src;
      puVar5 = puVar5 + 1;
    } while( true );
  }
  puVar4 = (uint *)__src + 1;
  if (uVar7 == 2) {
    uVar9 = (undefined2)(uVar8 >> 0x10);
    if ((uVar8 + 0xfefefeff & 0x80808080) == 0) {
      *(undefined2 *)puVar5 = uVar9;
      puVar6 = (uint *)((int)puVar5 + -2);
      goto LAB_0001aa2c;
    }
    if (uVar8 >> 0x18 != 0) {
      *(undefined2 *)puVar5 = uVar9;
      puVar6 = (uint *)((int)puVar5 + -2);
      if ((uVar8 >> 0x10 & 0xff) == 0) {
        return __dest;
      }
      while ((uVar8 >> 8 & 0xff) != 0) {
        puVar6 = puVar6 + 1;
        uVar7 = uVar8;
        if ((uVar8 & 0xff) == 0) {
          *(short *)puVar6 = (short)uVar8;
          return __dest;
        }
        while( true ) {
          uVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          uVar2 = uVar8 >> 0x10 | uVar7 << 0x10;
          if ((uVar8 + 0xfefefeff & 0x80808080) != 0) break;
          *puVar6 = uVar2;
LAB_0001aa2c:
          puVar6 = puVar6 + 1;
          uVar7 = uVar8;
        }
        if (uVar8 >> 0x18 == 0) {
          *(short *)puVar6 = (short)uVar7;
          *(char *)((int)puVar6 + 2) = '\0';
          return __dest;
        }
        *puVar6 = uVar2;
        if ((uVar8 >> 0x10 & 0xff) == 0) {
          return __dest;
        }
      }
LAB_0001aaa8:
      *(char *)(puVar6 + 1) = '\0';
      return __dest;
    }
  }
  else {
    bVar10 = (uVar8 + 0xfefefeff & 0x80808080) != 0;
    cVar3 = (char)(uVar8 >> 0x18);
    if (uVar7 == 3) {
      if (bVar10) {
        *(char *)puVar5 = cVar3;
        puVar6 = (uint *)((int)puVar5 + -3);
        if (uVar8 >> 0x18 != 0) goto LAB_0001ab28;
        return __dest;
      }
      *(char *)puVar5 = cVar3;
      puVar5 = (uint *)((int)puVar5 + -3);
      do {
        puVar5 = puVar5 + 1;
        while( true ) {
          uVar7 = uVar8 << 8;
          uVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar5 = uVar8 >> 0x18 | uVar7;
          if ((uVar8 + 0xfefefeff & 0x80808080) == 0) break;
          puVar6 = puVar5;
          if (uVar8 >> 0x18 == 0) {
            return __dest;
          }
LAB_0001ab28:
          if ((uVar8 >> 0x10 & 0xff) == 0) goto LAB_0001aaa8;
          uVar9 = (undefined2)(uVar8 >> 8);
          if ((uVar8 >> 8 & 0xff) == 0) {
            *(undefined2 *)(puVar6 + 1) = uVar9;
            return __dest;
          }
          puVar5 = puVar6 + 1;
          if ((uVar8 & 0xff) == 0) {
            *(undefined2 *)puVar5 = uVar9;
            *(char *)((int)puVar6 + 6) = '\0';
            return __dest;
          }
        }
      } while( true );
    }
    uVar9 = (undefined2)(uVar8 >> 8);
    if (!bVar10) {
      *(char *)puVar5 = cVar3;
      *(undefined2 *)((int)puVar5 + 1) = uVar9;
      puVar5 = (uint *)((int)puVar5 + -1);
      goto LAB_0001a944;
    }
    if (uVar8 >> 0x18 != 0) {
      if ((uVar8 >> 0x10 & 0xff) == 0) {
        *(char *)puVar5 = cVar3;
        *(char *)((int)puVar5 + 1) = '\0';
        return __dest;
      }
      *(char *)puVar5 = cVar3;
      *(undefined2 *)((int)puVar5 + 1) = uVar9;
      puVar5 = (uint *)((int)puVar5 + -1);
      if ((uVar8 >> 8 & 0xff) == 0) {
        return __dest;
      }
      while (puVar5 = puVar5 + 1, (uVar8 & 0xff) != 0) {
        while( true ) {
          uVar7 = uVar8 << 0x18;
          uVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          uVar7 = uVar8 >> 8 | uVar7;
          if ((uVar8 + 0xfefefeff & 0x80808080) != 0) break;
          *puVar5 = uVar7;
LAB_0001a944:
          puVar5 = puVar5 + 1;
        }
        uVar9 = (undefined2)(uVar7 >> 0x10);
        if (uVar8 >> 0x18 == 0) {
          *(undefined2 *)puVar5 = uVar9;
          return __dest;
        }
        if ((uVar8 >> 0x10 & 0xff) == 0) {
          *(undefined2 *)puVar5 = uVar9;
          *(char *)((int)puVar5 + 2) = '\0';
          return __dest;
        }
        *puVar5 = uVar7;
        if ((uVar8 >> 8 & 0xff) == 0) {
          return __dest;
        }
      }
    }
  }
  *(char *)puVar5 = '\0';
  return __dest;
}


char * strchr(char *__s,int __c)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  
  uVar7 = __c & 0xff;
  if (uVar7 == 0) {
    puVar6 = (uint *)__s;
    if ((((uint)__s & 3) != 0) &&
       ((puVar6 = (uint *)(__s + 1), *__s == '\0' ||
        ((((uint)puVar6 & 3) != 0 &&
         ((cVar2 = *(char *)puVar6, puVar6 = (uint *)(__s + 2), cVar2 == '\0' ||
          ((((uint)puVar6 & 3) != 0 &&
           (cVar2 = *(char *)puVar6, puVar6 = (uint *)(__s + 3), cVar2 == '\0')))))))))) {
      return (char *)((int)puVar6 + -1);
    }
    do {
      uVar7 = *puVar6;
      puVar5 = puVar6;
      while (puVar6 = puVar5 + 1, (uVar7 + 0xfefefeff & 0x80808080) != 0) {
        puVar9 = puVar5;
        if (((uVar7 >> 0x18 == 0) ||
            (puVar9 = (uint *)((int)puVar5 + 1), (uVar7 >> 0x10 & 0xff) == 0)) ||
           (puVar9 = (uint *)((int)puVar5 + 2), (uVar7 >> 8 & 0xff) == 0)) {
          return (char *)puVar9;
        }
        if ((uVar7 & 0xff) == 0) {
          return (char *)((int)puVar5 + 3);
        }
        uVar7 = *puVar6;
        puVar5 = puVar6;
      }
    } while( true );
  }
  uVar8 = uVar7 | uVar7 << 8;
  puVar6 = (uint *)__s;
  if (((uint)__s & 3) == 0) goto LAB_0001ac2c;
  puVar5 = (uint *)(__s + 1);
  if ((uint)(byte)*__s != uVar7) {
    if (*__s != 0) {
      puVar6 = puVar5;
      if (((uint)puVar5 & 3) == 0) goto LAB_0001ac2c;
      bVar1 = *(byte *)puVar5;
      puVar5 = (uint *)(__s + 2);
      if ((uint)bVar1 == uVar7) goto LAB_0001abf4;
      if (bVar1 != 0) {
        puVar6 = puVar5;
        if (((uint)puVar5 & 3) == 0) goto LAB_0001ac2c;
        bVar1 = *(byte *)puVar5;
        puVar5 = (uint *)(__s + 3);
        if ((uint)bVar1 == uVar7) goto LAB_0001abf4;
        if (bVar1 != 0) {
          uVar3 = *puVar5;
          while( true ) {
            while (puVar6 = puVar5 + 1,
                  (((uVar3 ^ (uVar8 << 0x10 | uVar8)) + 0xfefefeff | uVar3 + 0xfefefeff) &
                  0x80808080) == 0) {
LAB_0001ac2c:
              uVar3 = *puVar6;
              puVar5 = puVar6;
            }
            if (uVar3 >> 0x18 == 0) {
              return (char *)0x0;
            }
            if (uVar3 >> 0x18 == uVar7) {
              return (char *)puVar5;
            }
            uVar4 = uVar3 >> 0x10 & 0xff;
            if (uVar4 == 0) {
              return (char *)0x0;
            }
            if (uVar4 == uVar7) {
              return (char *)((int)puVar5 + 1);
            }
            uVar4 = uVar3 >> 8 & 0xff;
            if (uVar4 == 0) {
              return (char *)0x0;
            }
            if (uVar4 == uVar7) {
              return (char *)((int)puVar5 + 2);
            }
            if ((uVar3 & 0xff) == 0) break;
            if ((uVar3 & 0xff) == uVar7) {
              return (char *)((int)puVar5 + 3);
            }
            uVar3 = *puVar6;
            puVar5 = puVar6;
          }
          return (char *)0x0;
        }
      }
    }
    return (char *)0x0;
  }
LAB_0001abf4:
  return (char *)((int)puVar5 + -1);
}


char * rindex(char *__s,int __c)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  
  uVar7 = __c & 0xff;
  if (uVar7 == 0) {
    puVar4 = (uint *)__s;
    if ((((uint)__s & 3) != 0) &&
       ((puVar4 = (uint *)(__s + 1), *__s == '\0' ||
        ((((uint)puVar4 & 3) != 0 &&
         ((cVar1 = *(char *)puVar4, puVar4 = (uint *)(__s + 2), cVar1 == '\0' ||
          ((((uint)puVar4 & 3) != 0 &&
           (cVar1 = *(char *)puVar4, puVar4 = (uint *)(__s + 3), cVar1 == '\0')))))))))) {
      return (char *)((int)puVar4 + -1);
    }
    do {
      uVar7 = *puVar4;
      puVar5 = puVar4;
      while (puVar4 = puVar5 + 1, (uVar7 + 0xfefefeff & 0x80808080) != 0) {
        puVar9 = puVar5;
        if (((uVar7 >> 0x18 == 0) ||
            (puVar9 = (uint *)((int)puVar5 + 1), (uVar7 >> 0x10 & 0xff) == 0)) ||
           (puVar9 = (uint *)((int)puVar5 + 2), (uVar7 >> 8 & 0xff) == 0)) {
          return (char *)puVar9;
        }
        if ((uVar7 & 0xff) == 0) {
          return (char *)((int)puVar5 + 3);
        }
        uVar7 = *puVar4;
        puVar5 = puVar4;
      }
    } while( true );
  }
  uVar8 = uVar7 | uVar7 << 8;
  puVar4 = (uint *)__s;
  puVar5 = (uint *)0x0;
  if (((uint)__s & 3) != 0) {
    puVar4 = (uint *)(__s + 1);
    puVar5 = (uint *)__s;
    if (((uint)(byte)*__s != uVar7) && (puVar5 = (uint *)0x0, *__s == 0)) {
      return (char *)0x0;
    }
    if (((uint)puVar4 & 3) != 0) {
      puVar9 = (uint *)(__s + 2);
      if ((uint)*(byte *)puVar4 == uVar7) {
        puVar5 = (uint *)(__s + 1);
      }
      else {
        if (*(byte *)puVar4 == 0) {
          return (char *)puVar5;
        }
      }
      puVar4 = puVar9;
      if (((uint)puVar9 & 3) != 0) {
        puVar6 = (uint *)(__s + 3);
        if ((uint)*(byte *)puVar9 == uVar7) {
          puVar5 = (uint *)(__s + 2);
        }
        else {
          if (*(byte *)puVar9 == 0) {
            return (char *)puVar5;
          }
        }
        uVar2 = *puVar6;
        goto LAB_0001ae40;
      }
    }
  }
  do {
    uVar2 = *puVar4;
    puVar6 = puVar4;
LAB_0001ae40:
    while (puVar4 = puVar6 + 1,
          (((uVar2 ^ (uVar8 << 0x10 | uVar8)) + 0xfefefeff | uVar2 + 0xfefefeff) & 0x80808080) != 0)
    {
      if (uVar2 >> 0x18 == 0) {
        return (char *)puVar5;
      }
      if (uVar2 >> 0x18 == uVar7) {
        puVar5 = puVar6;
      }
      uVar3 = uVar2 >> 0x10 & 0xff;
      if (uVar3 == 0) {
        return (char *)puVar5;
      }
      if (uVar3 == uVar7) {
        puVar5 = (uint *)((int)puVar6 + 1);
      }
      uVar3 = uVar2 >> 8 & 0xff;
      if (uVar3 == 0) {
        return (char *)puVar5;
      }
      if (uVar3 == uVar7) {
        puVar5 = (uint *)((int)puVar6 + 2);
      }
      if ((uVar2 & 0xff) == 0) {
        return (char *)puVar5;
      }
      if ((uVar2 & 0xff) == uVar7) {
        puVar5 = (uint *)((int)puVar6 + 3);
      }
      uVar2 = *puVar4;
      puVar6 = puVar4;
    }
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x0001b034) */
/* WARNING: Removing unreachable block (ram,0x0001b0b0) */
/* WARNING: Removing unreachable block (ram,0x0001b17c) */
/* WARNING: Removing unreachable block (ram,0x0001b138) */
/* WARNING: Removing unreachable block (ram,0x0001b098) */
/* WARNING: Removing unreachable block (ram,0x0001b1dc) */
/* WARNING: Type propagation algorithm not settling */

int strcmp(char *__s1,char *__s2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  
  puVar7 = (uint *)__s1;
  puVar8 = (uint *)__s2;
  if (((uint)__s1 & 3) != 0) {
    puVar7 = (uint *)(__s1 + 1);
    iVar3 = (uint)(byte)*__s1 - (uint)(byte)*__s2;
    if (*__s1 == 0) {
      return iVar3;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
    puVar8 = (uint *)(__s2 + 1);
    if (((uint)puVar7 & 3) != 0) {
      puVar6 = (uint *)(__s1 + 2);
      iVar3 = (uint)*(byte *)puVar7 - (uint)(byte)__s2[1];
      if (*(byte *)puVar7 == 0) {
        return iVar3;
      }
      if (iVar3 != 0) {
        return iVar3;
      }
      puVar7 = puVar6;
      puVar8 = (uint *)(__s2 + 2);
      if (((uint)puVar6 & 3) != 0) {
        puVar7 = (uint *)(__s1 + 3);
        puVar8 = (uint *)(__s2 + 3);
        iVar3 = (uint)*(byte *)puVar6 - (uint)(byte)__s2[2];
        if (*(byte *)puVar6 == 0) {
          return iVar3;
        }
        uVar1 = (uint)puVar8 & 3;
        if (iVar3 != 0) {
          return iVar3;
        }
        if (uVar1 == 0) {
          uVar1 = *puVar7;
          goto LAB_0001af80;
        }
        goto LAB_0001b034;
      }
    }
  }
  uVar1 = (uint)puVar8 & 3;
  if (uVar1 == 0) {
    do {
      uVar1 = *puVar7;
LAB_0001af80:
      while( true ) {
        uVar9 = *puVar8;
        puVar7 = puVar7 + 1;
        if (uVar1 != uVar9) {
          iVar3 = (uVar1 >> 0x18) - (uVar9 >> 0x18);
          if ((uVar1 >> 0x18 != 0) && (iVar3 == 0)) {
            iVar3 = (uVar1 >> 0x10) - (uVar9 >> 0x10);
            if (((uVar1 >> 0x10 & 0xff) != 0) && (iVar3 == 0)) {
              iVar3 = (uVar1 >> 8) - (uVar9 >> 8);
              if (((uVar1 >> 8 & 0xff) != 0) && (iVar3 == 0)) {
                return uVar1 - uVar9;
              }
            }
          }
          return iVar3;
        }
        puVar8 = puVar8 + 1;
        if ((uVar1 + 0xfefefeff & 0x80808080) == 0) break;
        if ((((uVar1 >> 0x18 == 0) || ((uVar1 >> 0x10 & 0xff) == 0)) || ((uVar1 >> 8 & 0xff) == 0))
           || ((uVar1 & 0xff) == 0)) {
          return 0;
        }
        uVar1 = *puVar7;
      }
    } while( true );
  }
LAB_0001b034:
  uVar10 = *puVar7;
  bVar2 = (char)uVar1 * '\b';
  uVar9 = *(uint *)((uint)puVar8 & 0xfffffffc);
  puVar8 = (uint *)((uint)puVar8 & 0xfffffffc) + 1;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar5 = uVar9 << (bVar2 & 0x1f);
          if ((uVar10 + 0xfefefeff & 0x80808080) != 0) break;
          puVar7 = puVar7 + 1;
          if (uVar5 != (uVar10 & -1 << (bVar2 & 0x1f))) {
            return (uVar10 >> (bVar2 & 0x1f)) - ((uVar9 << (bVar2 & 0x1f)) >> (bVar2 & 0x1f));
          }
          uVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          uVar5 = uVar9 >> ((char)uVar1 * -8 + 0x20U & 0x1f) | uVar5;
          if (uVar5 != uVar10) {
            return uVar10 - uVar5;
          }
          uVar10 = *puVar7;
        }
        iVar3 = (uVar10 >> 0x18) - (uVar5 >> 0x18);
        if ((uVar10 >> 0x18 == 0) || (iVar3 != 0)) {
          return iVar3;
        }
        uVar4 = uVar10 >> 0x10;
        if (uVar1 != 3) break;
        uVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
        iVar3 = (uVar4 & 0xff) - (uVar9 >> 0x18);
        if ((uVar4 & 0xff) == 0) {
          return iVar3;
        }
        if (iVar3 != 0) {
          return iVar3;
        }
        uVar5 = uVar10 >> 8 & 0xff;
        iVar3 = uVar5 - (uVar9 >> 0x10 & 0xff);
        if (uVar5 == 0) {
          return iVar3;
        }
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = (uVar10 & 0xff) - (uVar9 >> 8 & 0xff);
        if ((uVar10 & 0xff) == 0) {
          return iVar3;
        }
        if (iVar3 != 0) {
          return iVar3;
        }
        uVar10 = *puVar7;
      }
      iVar3 = uVar4 - (uVar5 >> 0x10);
      if ((uVar4 & 0xff) == 0) {
        return iVar3;
      }
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar4 = uVar10 >> 8;
      if (uVar1 == 2) break;
      iVar3 = uVar4 - (uVar5 >> 8);
      if ((uVar4 & 0xff) == 0) {
        return iVar3;
      }
      puVar7 = puVar7 + 1;
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      iVar3 = (uVar10 & 0xff) - (uVar9 >> 0x18);
      if ((uVar10 & 0xff) == 0) {
        return iVar3;
      }
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar10 = *puVar7;
    }
    uVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
    iVar3 = (uVar4 & 0xff) - (uVar9 >> 0x18);
    if ((uVar4 & 0xff) == 0) {
      return iVar3;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = (uVar10 & 0xff) - (uVar9 >> 0x10 & 0xff);
    if ((uVar10 & 0xff) == 0) {
      return iVar3;
    }
    if (iVar3 != 0) break;
    uVar10 = *puVar7;
  }
  return iVar3;
}


char * strcpy(char *__dest,char *__src)

{
  uint uVar1;
  char cVar3;
  uint uVar2;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined2 uVar8;
  uint uVar7;
  bool bVar9;
  
  puVar4 = (uint *)__dest;
  puVar6 = (uint *)__src;
  if (((uint)__src & 3) != 0) {
    cVar3 = *__src;
    *__dest = cVar3;
    puVar6 = (uint *)(__src + 1);
    if (cVar3 == '\0') {
      return __dest;
    }
    puVar4 = (uint *)(__dest + 1);
    if (((uint)puVar6 & 3) != 0) {
      cVar3 = *(char *)puVar6;
      __dest[1] = cVar3;
      puVar6 = (uint *)(__src + 2);
      if (cVar3 == '\0') {
        return __dest;
      }
      puVar4 = (uint *)(__dest + 2);
      if (((uint)puVar6 & 3) != 0) {
        cVar3 = *(char *)puVar6;
        __dest[2] = cVar3;
        puVar4 = (uint *)(__dest + 3);
        puVar6 = (uint *)(__src + 3);
        if (cVar3 == '\0') {
          return __dest;
        }
      }
    }
  }
  uVar1 = (uint)puVar4 & 3;
  if (uVar1 == 0) {
    while( true ) {
      while( true ) {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        if ((uVar1 + 0xfefefeff & 0x80808080) != 0) break;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (uVar1 >> 0x18 == 0) {
        *(char *)puVar4 = '\0';
        return __dest;
      }
      uVar8 = (undefined2)(uVar1 >> 0x10);
      if ((uVar1 >> 0x10 & 0xff) == 0) {
        *(undefined2 *)puVar4 = uVar8;
        return __dest;
      }
      if ((uVar1 >> 8 & 0xff) == 0) break;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
      if ((uVar1 & 0xff) == 0) {
        return __dest;
      }
    }
    *(undefined2 *)puVar4 = uVar8;
    *(char *)((int)puVar4 + 2) = '\0';
    return __dest;
  }
  uVar7 = *puVar6;
  puVar6 = puVar6 + 1;
  if (uVar1 == 2) {
    uVar8 = (undefined2)(uVar7 >> 0x10);
    if ((uVar7 + 0xfefefeff & 0x80808080) == 0) {
      *(undefined2 *)puVar4 = uVar8;
      puVar5 = (uint *)((int)puVar4 + -2);
      goto LAB_0001b414;
    }
    if (uVar7 >> 0x18 != 0) {
      *(undefined2 *)puVar4 = uVar8;
      puVar5 = (uint *)((int)puVar4 + -2);
      if ((uVar7 >> 0x10 & 0xff) == 0) {
        return __dest;
      }
      while ((uVar7 >> 8 & 0xff) != 0) {
        puVar5 = puVar5 + 1;
        uVar1 = uVar7;
        if ((uVar7 & 0xff) == 0) {
          *(short *)puVar5 = (short)uVar7;
          return __dest;
        }
        while( true ) {
          uVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          uVar2 = uVar7 >> 0x10 | uVar1 << 0x10;
          if ((uVar7 + 0xfefefeff & 0x80808080) != 0) break;
          *puVar5 = uVar2;
LAB_0001b414:
          puVar5 = puVar5 + 1;
          uVar1 = uVar7;
        }
        if (uVar7 >> 0x18 == 0) {
          *(short *)puVar5 = (short)uVar1;
          *(char *)((int)puVar5 + 2) = '\0';
          return __dest;
        }
        *puVar5 = uVar2;
        if ((uVar7 >> 0x10 & 0xff) == 0) {
          return __dest;
        }
      }
LAB_0001b490:
      *(char *)(puVar5 + 1) = '\0';
      return __dest;
    }
  }
  else {
    bVar9 = (uVar7 + 0xfefefeff & 0x80808080) != 0;
    cVar3 = (char)(uVar7 >> 0x18);
    if (uVar1 == 3) {
      if (bVar9) {
        *(char *)puVar4 = cVar3;
        puVar5 = (uint *)((int)puVar4 + -3);
        if (uVar7 >> 0x18 != 0) goto LAB_0001b510;
        return __dest;
      }
      *(char *)puVar4 = cVar3;
      puVar4 = (uint *)((int)puVar4 + -3);
      do {
        puVar4 = puVar4 + 1;
        while( true ) {
          uVar1 = uVar7 << 8;
          uVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          *puVar4 = uVar7 >> 0x18 | uVar1;
          if ((uVar7 + 0xfefefeff & 0x80808080) == 0) break;
          puVar5 = puVar4;
          if (uVar7 >> 0x18 == 0) {
            return __dest;
          }
LAB_0001b510:
          if ((uVar7 >> 0x10 & 0xff) == 0) goto LAB_0001b490;
          uVar8 = (undefined2)(uVar7 >> 8);
          if ((uVar7 >> 8 & 0xff) == 0) {
            *(undefined2 *)(puVar5 + 1) = uVar8;
            return __dest;
          }
          puVar4 = puVar5 + 1;
          if ((uVar7 & 0xff) == 0) {
            *(undefined2 *)puVar4 = uVar8;
            *(char *)((int)puVar5 + 6) = '\0';
            return __dest;
          }
        }
      } while( true );
    }
    uVar8 = (undefined2)(uVar7 >> 8);
    if (!bVar9) {
      *(char *)puVar4 = cVar3;
      *(undefined2 *)((int)puVar4 + 1) = uVar8;
      puVar4 = (uint *)((int)puVar4 + -1);
      goto LAB_0001b32c;
    }
    if (uVar7 >> 0x18 != 0) {
      if ((uVar7 >> 0x10 & 0xff) == 0) {
        *(char *)puVar4 = cVar3;
        *(char *)((int)puVar4 + 1) = '\0';
        return __dest;
      }
      *(char *)puVar4 = cVar3;
      *(undefined2 *)((int)puVar4 + 1) = uVar8;
      puVar4 = (uint *)((int)puVar4 + -1);
      if ((uVar7 >> 8 & 0xff) == 0) {
        return __dest;
      }
      while (puVar4 = puVar4 + 1, (uVar7 & 0xff) != 0) {
        while( true ) {
          uVar1 = uVar7 << 0x18;
          uVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          uVar1 = uVar7 >> 8 | uVar1;
          if ((uVar7 + 0xfefefeff & 0x80808080) != 0) break;
          *puVar4 = uVar1;
LAB_0001b32c:
          puVar4 = puVar4 + 1;
        }
        uVar8 = (undefined2)(uVar1 >> 0x10);
        if (uVar7 >> 0x18 == 0) {
          *(undefined2 *)puVar4 = uVar8;
          return __dest;
        }
        if ((uVar7 >> 0x10 & 0xff) == 0) {
          *(undefined2 *)puVar4 = uVar8;
          *(char *)((int)puVar4 + 2) = '\0';
          return __dest;
        }
        *puVar4 = uVar1;
        if ((uVar7 >> 8 & 0xff) == 0) {
          return __dest;
        }
      }
    }
  }
  *(char *)puVar4 = '\0';
  return __dest;
}


/* WARNING: Removing unreachable block (ram,0x0001b570) */
/* WARNING: Removing unreachable block (ram,0x0001b5b4) */
/* WARNING: Removing unreachable block (ram,0x0001b594) */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  sbyte sVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  
  puVar13 = (uint *)__s1;
  if (0xf < __n) {
    while (uVar17 = (int)__s1 + (__n - (int)puVar13), ((uint)__s2 & 3) != 0) {
      bVar10 = *(byte *)puVar13;
      bVar1 = *(byte *)__s2;
      puVar13 = (uint *)((int)puVar13 + 1);
      __s2 = (void *)((int)__s2 + 1);
      if ((uint)bVar10 - (uint)bVar1 != 0) {
        return (uint)bVar10 - (uint)bVar1;
      }
    }
    uVar3 = uVar17 >> 2;
    uVar12 = *(uint *)__s2;
    uVar8 = uVar3 & 3;
    if (((uint)puVar13 & 3) == 0) {
      uVar6 = *puVar13;
      if (uVar8 == 1) {
        puVar14 = puVar13 + 1;
        puVar15 = (uint *)__s2 + 1;
        uVar3 = uVar3 - 1;
        uVar8 = uVar6;
        goto LAB_0001b694;
      }
      puVar14 = puVar13;
      puVar15 = (uint *)__s2;
      if (uVar8 == 0) goto LAB_0001b6b8;
      if (uVar8 != 3) {
        puVar14 = puVar13 + -2;
        puVar15 = (uint *)__s2 + -2;
        uVar3 = uVar3 + 2;
        goto LAB_0001b610;
      }
      puVar14 = puVar13 + -1;
      puVar15 = (uint *)__s2 + -1;
      uVar3 = uVar3 + 1;
      uVar8 = uVar6;
      do {
        uVar6 = puVar14[2];
        bVar19 = uVar8 < uVar12;
        bVar18 = uVar8 == uVar12;
        uVar12 = puVar15[2];
        if (!bVar18) break;
LAB_0001b610:
        uVar8 = puVar14[3];
        bVar19 = uVar6 < uVar12;
        bVar18 = uVar6 == uVar12;
        uVar12 = puVar15[3];
        if (!bVar18) break;
        uVar3 = uVar3 - 4;
        puVar14 = puVar14 + 4;
        puVar15 = puVar15 + 4;
        if (uVar3 == 0) {
          bVar19 = uVar8 < uVar12;
          bVar18 = uVar8 == uVar12;
          iVar4 = 0;
          if (bVar18) goto LAB_0001b640;
          break;
        }
LAB_0001b694:
        uVar6 = *puVar14;
        bVar19 = uVar8 < uVar12;
        bVar18 = uVar8 == uVar12;
        uVar12 = *puVar15;
        if (!bVar18) break;
LAB_0001b6b8:
        uVar8 = puVar14[1];
        bVar19 = uVar6 < uVar12;
        bVar18 = uVar6 == uVar12;
        uVar12 = puVar15[1];
      } while (bVar18);
    }
    else {
      puVar14 = (uint *)((uint)puVar13 & 0xfffffffc);
      cVar2 = (char)((uint)puVar13 & 3);
      sVar11 = cVar2 * '\b';
      uVar6 = *puVar14;
      bVar10 = cVar2 * -8 + 0x20;
      puVar15 = puVar14 + 1;
      uVar7 = puVar14[1];
      if (uVar8 == 1) {
        puVar15 = puVar14 + 2;
        puVar16 = (uint *)__s2 + 1;
        uVar3 = uVar3 - 1;
        goto LAB_0001b7c4;
      }
      uVar9 = uVar7;
      puVar16 = (uint *)__s2;
      if (uVar8 == 0) goto LAB_0001b794;
      if (uVar8 == 3) {
        puVar16 = (uint *)__s2 + -1;
        uVar3 = uVar3 + 1;
        goto LAB_0001b760;
      }
      puVar14 = puVar14 + -1;
      puVar16 = (uint *)__s2 + -2;
      uVar3 = uVar3 + 2;
      uVar8 = uVar7;
      uVar7 = uVar6;
      do {
        uVar6 = uVar7 << sVar11;
        uVar7 = puVar14[3];
        uVar6 = uVar6 | uVar8 >> (bVar10 & 0x1f);
        bVar19 = uVar6 < uVar12;
        bVar18 = uVar6 == uVar12;
        uVar12 = puVar16[3];
        if (!bVar18) break;
        uVar3 = uVar3 - 4;
        if (uVar3 == 0) {
          uVar3 = uVar8 << sVar11 | uVar7 >> (bVar10 & 0x1f);
          iVar4 = 0;
          if ((uVar12 != uVar3) && (iVar4 = -1, uVar12 < uVar3)) {
            iVar4 = 1;
          }
          goto LAB_0001b640;
        }
        puVar15 = puVar14 + 4;
        puVar16 = puVar16 + 4;
        uVar6 = uVar8;
LAB_0001b7c4:
        uVar8 = uVar6 << sVar11 | uVar7 >> (bVar10 & 0x1f);
        bVar19 = uVar8 < uVar12;
        bVar18 = uVar8 == uVar12;
        uVar12 = *puVar16;
        uVar6 = uVar7;
        uVar9 = *puVar15;
        if (!bVar18) break;
LAB_0001b794:
        uVar7 = puVar15[1];
        uVar8 = uVar6 << sVar11 | uVar9 >> (bVar10 & 0x1f);
        bVar19 = uVar8 < uVar12;
        bVar18 = uVar8 == uVar12;
        uVar12 = puVar16[1];
        uVar6 = uVar9;
        puVar14 = puVar15;
        if (!bVar18) break;
LAB_0001b760:
        uVar8 = puVar14[2];
        uVar6 = uVar6 << sVar11 | uVar7 >> (bVar10 & 0x1f);
        bVar19 = uVar6 < uVar12;
        bVar18 = uVar6 == uVar12;
        uVar12 = puVar16[2];
      } while (bVar18);
    }
    iVar4 = -1;
    if (!bVar19 && !bVar18) {
      iVar4 = 1;
    }
LAB_0001b640:
    if (iVar4 != 0) {
      return iVar4;
    }
    __n = uVar17 & 3;
    __s1 = (void *)((uVar17 & 0xfffffffc) + (int)puVar13);
    __s2 = (void *)((uVar17 & 0xfffffffc) + (int)__s2);
  }
  sVar5 = 0;
  do {
    if (__n == sVar5) {
      return 0;
    }
    iVar4 = (uint)*(byte *)((int)__s1 + sVar5) - (uint)*(byte *)((int)__s2 + sVar5);
    sVar5 = sVar5 + 1;
  } while (iVar4 == 0);
  return iVar4;
}


/* WARNING: Removing unreachable block (ram,0x0001b820) */
/* WARNING: Removing unreachable block (ram,0x0001b830) */

void * mempcpy(void *__dest,void *__src,size_t __n)

{
  memcpy(__dest,__src,__n);
  return (void *)((int)__dest + __n);
}


/* WARNING: Removing unreachable block (ram,0x0001b840) */
/* WARNING: Removing unreachable block (ram,0x0001b8b4) */
/* WARNING: Removing unreachable block (ram,0x0001b914) */
/* WARNING: Removing unreachable block (ram,0x0001b928) */
/* WARNING: Removing unreachable block (ram,0x0001b958) */
/* WARNING: Removing unreachable block (ram,0x0001b900) */

void * memrchr(void *__s,int __c,size_t __n)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  pbVar1 = (byte *)((int)__s + __n);
  while ((__n != 0 && (((uint)pbVar1 & 3) != 0))) {
    pbVar1 = pbVar1 + -1;
    __n = __n - 1;
    if ((uint)*pbVar1 == (__c & 0xffU)) {
      return pbVar1;
    }
  }
  uVar3 = (__c & 0xffU) << 8 | __c & 0xffU;
  uVar6 = __c & 0xff;
  do {
    if (__n < 4) {
      pbVar4 = pbVar1 + -__n;
      pbVar2 = pbVar1 + -(int)pbVar4;
      do {
        if (pbVar2 == (byte *)0x0) {
          return (void *)0x0;
        }
        pbVar1 = pbVar1 + -1;
        pbVar2 = pbVar1 + -(int)pbVar4;
      } while ((uint)*pbVar1 != (__c & 0xffU));
      return pbVar1;
    }
    uVar5 = (uVar3 << 0x10 | uVar3) ^ *(uint *)(pbVar1 + -4);
    pbVar2 = pbVar1 + -4;
    if ((uVar5 + 0x7efefeff ^ uVar5 | 0x7efefeff) != 0xffffffff) {
      if ((uint)pbVar1[-1] == uVar6) {
        return pbVar1 + -1;
      }
      if ((uint)pbVar1[-2] == uVar6) {
        return pbVar1 + -2;
      }
      if ((uint)pbVar1[-3] == uVar6) {
        return pbVar1 + -3;
      }
      if ((uint)*pbVar2 == uVar6) {
        return pbVar2;
      }
    }
    __n = __n - 4;
    pbVar1 = pbVar2;
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x0001b984) */
/* WARNING: Removing unreachable block (ram,0x0001b960) */
/* WARNING: Removing unreachable block (ram,0x0001b970) */
/* WARNING: Removing unreachable block (ram,0x0001b964) */

char * strdup(char *__s)

{
  size_t sVar1;
  char *__dest;
  
  sVar1 = strlen(__s);
  __dest = (char *)malloc(sVar1 + 1);
  if (__dest != (char *)0x0) {
    memcpy(__dest,__s,sVar1 + 1);
  }
  return __dest;
}


/* WARNING: Removing unreachable block (ram,0x0001b994) */
/* WARNING: Removing unreachable block (ram,0x0001b9ac) */

undefined4 __sigjmp_save(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    iVar1 = sigprocmask(1,(sigset_t *)0x0,(sigset_t *)(param_1 + 0x10));
    *(uint *)(param_1 + 0xc) = (uint)(iVar1 == 0);
  }
  return 0;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001ba14) */
/* WARNING: Removing unreachable block (ram,0x0001b9c8) */
/* WARNING: Removing unreachable block (ram,0x0001b9f4) */
/* WARNING: Removing unreachable block (ram,0x0001b9d0) */

char * getenv(char *__name)

{
  size_t __n;
  int iVar1;
  char **ppcVar2;
  char **__s2;
  
  ppcVar2 = environ;
  __s2 = environ;
  if (environ != (char **)0x0) {
    __n = strlen(__name);
    while (__s2 = (char **)*ppcVar2, __s2 != (char **)0x0) {
      iVar1 = memcmp(__name,__s2,__n);
      if (iVar1 == 0) {
        if (*(char *)((int)__s2 + __n) == '=') {
          return (char *)((int)__s2 + __n + 1);
        }
        ppcVar2 = ppcVar2 + 1;
      }
      else {
        ppcVar2 = ppcVar2 + 1;
      }
    }
  }
  return (char *)__s2;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001ba70) */
/* WARNING: Removing unreachable block (ram,0x0001ba48) */
/* WARNING: Removing unreachable block (ram,0x0001ba58) */

int * allocate_dtv(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = _dl_tls_max_dtv_idx + 0xe;
  piVar1 = (int *)calloc(_dl_tls_max_dtv_idx + 0x10,8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar2;
    *(int **)(param_1 + 1) = piVar1 + 2;
    piVar1 = param_1;
  }
  return piVar1;
}


/* WARNING: Removing unreachable block (ram,0x0001ba9c) */
/* WARNING: Removing unreachable block (ram,0x0001baa0) */

void _dl_memalign(undefined4 param_1,size_t param_2)

{
  malloc(param_2);
  return;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001baf0) */
/* WARNING: Removing unreachable block (ram,0x0001baa8) */
/* WARNING: Removing unreachable block (ram,0x0001bab0) */
/* WARNING: Removing unreachable block (ram,0x0001bb9c) */

int _dl_allocate_static_tls(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  if (uVar3 <= _dl_tls_static_align) {
    uVar2 = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x1c);
    uVar1 = (_dl_tls_static_size + -0x450) - _dl_tls_static_used;
    if (uVar2 <= uVar1) {
      _dl_tls_static_used =
           ((_dl_tls_static_size + -0x450) - *(int *)(param_1 + 0x24)) -
           ((uVar1 - uVar2) / uVar3) * uVar3;
      *(int *)(param_1 + 0x28) = _dl_tls_static_used;
      if ((*(ushort *)(param_1 + 0x4e) & 1) == 0) {
        *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 0x80;
        return param_1;
      }
      (*_dl_init_static_tls)(param_1);
      return param_1;
    }
  }
  fprintf(stderr,"cannot allocate memory in static TLS block");
                    /* WARNING: Subroutine does not return */
  exit(0x1e);
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001bba4) */
/* WARNING: Removing unreachable block (ram,0x0001bbb4) */
/* WARNING: Removing unreachable block (ram,0x0001bc4c) */

uint _dl_next_tls_modid(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  if (_dl_tls_dtv_gaps != '\0') {
    uVar3 = _dl_tls_static_nelem + 1;
    if (_dl_tls_max_dtv_idx < uVar3) {
      _dl_tls_dtv_gaps = '\0';
    }
    else {
      iVar4 = 0;
      puVar2 = _dl_tls_dtv_slotinfo_list;
      do {
        while( true ) {
          uVar1 = *puVar2;
          if (uVar1 <= uVar3 - iVar4) break;
          if (puVar2[(uVar3 - iVar4) * 3 + 4] == 0) goto LAB_0001bc38;
          uVar3 = uVar3 + 1;
        }
        puVar2 = (uint *)puVar2[1];
        iVar4 = iVar4 + uVar1;
      } while (puVar2 != (uint *)0x0);
LAB_0001bc38:
      if (uVar3 <= _dl_tls_max_dtv_idx) {
        return uVar3;
      }
      _dl_tls_dtv_gaps = '\0';
    }
  }
  _dl_tls_max_dtv_idx = _dl_tls_max_dtv_idx + 1;
  return _dl_tls_max_dtv_idx;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001bc78) */
/* WARNING: Removing unreachable block (ram,0x0001bc80) */
/* WARNING: Removing unreachable block (ram,0x0001bcb0) */

undefined4 * _dl_get_tls_static_info(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = _dl_tls_static_size;
  *param_2 = _dl_tls_static_align;
  return param_1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001bd10) */
/* WARNING: Removing unreachable block (ram,0x0001bd2c) */
/* WARNING: Removing unreachable block (ram,0x0001bcb8) */
/* WARNING: Removing unreachable block (ram,0x0001bd18) */
/* WARNING: Removing unreachable block (ram,0x0001bcec) */
/* WARNING: Removing unreachable block (ram,0x0001bcc0) */

int _dl_allocate_tls_storage(void)

{
  int iVar1;
  void *__ptr;
  int iVar2;
  void *__s;
  
  iVar1 = _dl_tls_static_size;
  iVar2 = 0;
  __ptr = (void *)_dl_memalign(_dl_tls_static_align,_dl_tls_static_size);
  if (__ptr != (void *)0x0) {
    __s = (void *)((int)__ptr + iVar1 + -0x450);
    memset(__s,0,0x450);
    iVar2 = allocate_dtv(__s);
    if (iVar2 == 0) {
      free(__ptr);
    }
  }
  return iVar2;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001be40) */
/* WARNING: Removing unreachable block (ram,0x0001bd3c) */
/* WARNING: Removing unreachable block (ram,0x0001be2c) */
/* WARNING: Removing unreachable block (ram,0x0001bd44) */

int _dl_allocate_tls_init(int param_1)

{
  uint uVar1;
  int iVar2;
  void *__dest;
  void *__src;
  size_t __n;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  
  if (param_1 != 0) {
    puVar6 = *(uint **)(param_1 + 4);
    uVar3 = 0;
    uVar4 = 0;
    puVar5 = _dl_tls_dtv_slotinfo_list;
    while( true ) {
      uVar7 = (uint)(uVar4 == 0);
      puVar8 = puVar5 + uVar7 * 3;
      while (uVar1 = uVar4 + uVar7, uVar7 < *puVar5) {
        if (_dl_tls_max_dtv_idx < uVar1) {
          *puVar6 = uVar3;
          return param_1;
        }
        uVar1 = puVar8[4];
        if (uVar1 != 0) {
          if (uVar3 < puVar8[2]) {
            uVar3 = puVar8[2];
          }
          iVar2 = *(int *)(uVar1 + 0x2c);
          if (*(int *)(uVar1 + 0x28) == 0) {
            puVar6[iVar2 * 2] = 0xffffffff;
            *(undefined *)(puVar6 + iVar2 * 2 + 1) = 0;
          }
          else {
            __dest = (void *)(param_1 - *(int *)(uVar1 + 0x28));
            *(void **)(puVar6 + iVar2 * 2) = __dest;
            __n = *(size_t *)(uVar1 + 0x18);
            __src = *(void **)(uVar1 + 0x14);
            *(undefined *)(puVar6 + iVar2 * 2 + 1) = 1;
            __dest = mempcpy(__dest,__src,__n);
            memset(__dest,0,*(int *)(uVar1 + 0x1c) - *(int *)(uVar1 + 0x18));
          }
        }
        uVar7 = uVar7 + 1;
        puVar8 = puVar8 + 3;
      }
      if (_dl_tls_max_dtv_idx <= uVar1) break;
      puVar5 = (uint *)puVar5[1];
      uVar4 = uVar1;
    }
    *puVar6 = uVar3;
  }
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x0001be6c) */
/* WARNING: Removing unreachable block (ram,0x0001be5c) */
/* WARNING: Removing unreachable block (ram,0x0001be7c) */

void _dl_allocate_tls(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = _dl_allocate_tls_storage();
  }
  else {
    uVar1 = allocate_dtv(param_1);
  }
  _dl_allocate_tls_init(uVar1,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001bf18) */
/* WARNING: Removing unreachable block (ram,0x0001be88) */
/* WARNING: Removing unreachable block (ram,0x0001bed0) */
/* WARNING: Removing unreachable block (ram,0x0001be90) */

void * _dl_deallocate_tls(int param_1,int param_2)

{
  void *__ptr;
  uint uVar1;
  void **ppvVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar1 = 0;
  ppvVar2 = (void **)(iVar3 + 8);
  do {
    while( true ) {
      if (*(uint *)(iVar3 + -8) <= uVar1) {
        if ((undefined1 *)(iVar3 + -8) != static_dtv) {
          free((undefined1 *)(iVar3 + -8));
        }
        if (param_2 == 0) {
          return (void *)param_1;
        }
        __ptr = (void *)((param_1 - _dl_tls_static_size) + 0x450);
        free(__ptr);
        return __ptr;
      }
      uVar1 = uVar1 + 1;
      if (*(char *)(ppvVar2 + 1) == '\0') break;
LAB_0001bf20:
      ppvVar2 = ppvVar2 + 2;
    }
    if (*ppvVar2 != (void *)0xffffffff) {
      free(*ppvVar2);
      goto LAB_0001bf20;
    }
    ppvVar2 = ppvVar2 + 2;
  } while( true );
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001bf78) */
/* WARNING: Removing unreachable block (ram,0x0001bfe8) */
/* WARNING: Removing unreachable block (ram,0x0001bf30) */
/* WARNING: Removing unreachable block (ram,0x0001bfc0) */
/* WARNING: Removing unreachable block (ram,0x0001bf38) */

uint _dl_add_to_slotinfo(uint param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = *(uint *)(param_1 + 0x2c);
  puVar2 = _dl_tls_dtv_slotinfo_list;
  do {
    puVar4 = puVar2;
    if (uVar3 < *puVar4) goto LAB_0001bff4;
    uVar3 = uVar3 - *puVar4;
    puVar2 = (uint *)puVar4[1];
  } while ((uint *)puVar4[1] != (uint *)0x0);
  puVar2 = (uint *)malloc(0x2f0);
  *(uint **)(puVar4 + 1) = puVar2;
  if (puVar2 == (uint *)0x0) {
    _dl_tls_generation = _dl_tls_generation + 1;
    fprintf(stderr,"cannot create TLS data structures: ABORT\n");
                    /* WARNING: Subroutine does not return */
    exit(0x7f);
  }
  puVar2[1] = 0;
  *puVar2 = 0x3e;
  memset(puVar2 + 2,0,0x2e8);
  puVar4 = puVar2;
LAB_0001bff4:
  iVar1 = _dl_tls_generation;
  (puVar4 + uVar3 * 3)[4] = param_1;
  (puVar4 + uVar3 * 3)[2] = iVar1 + 1;
  return param_1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001c05c) */
/* WARNING: Removing unreachable block (ram,0x0001c024) */
/* WARNING: Removing unreachable block (ram,0x0001c030) */
/* WARNING: Removing unreachable block (ram,0x0001c074) */

int brk(void *__addr)

{
  sw_trap(0x10);
  __curbrk = __addr;
  return 0;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001c07c) */
/* WARNING: Removing unreachable block (ram,0x0001c084) */
/* WARNING: Removing unreachable block (ram,0x0001c0cc) */

uint __write_nocancel(uint param_1)

{
  int unaff_g7;
  bool in_i_cf;
  
  sw_trap(0x10);
  if (in_i_cf) {
    param_1 = -param_1;
  }
  if (0xfffff000 < param_1) {
    *(int *)(unaff_g7 + -8) = -param_1;
    param_1 = 0xffffffff;
  }
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x0001c110) */
/* WARNING: Removing unreachable block (ram,0x0001c0d4) */
/* WARNING: Removing unreachable block (ram,0x0001c104) */
/* WARNING: Removing unreachable block (ram,0x0001c0f0) */
/* WARNING: Removing unreachable block (ram,0x0001c0e8) */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  int unaff_g7;
  ssize_t sVar1;
  undefined4 uVar2;
  undefined4 in_o3;
  undefined4 in_o4;
  undefined4 in_o5;
  
  if (*(int *)(unaff_g7 + 0xc) == 0) {
    sVar1 = __write_nocancel(__fd,__buf,__n,in_o3,in_o4,in_o5);
    return sVar1;
  }
  uVar2 = __libc_enable_asynccancel(__fd,__buf,__n);
  sVar1 = __write_nocancel(__fd,__buf,__n);
  __libc_disable_asynccancel(uVar2);
  return sVar1;
}


/* WARNING: Removing unreachable block (ram,0x0001c120) */
/* WARNING: Removing unreachable block (ram,0x0001c130) */

int fseek(FILE *__stream,__off_t __off,int __whence)

{
  int iVar1;
  __off64_t in_stack_0000005c;
  
  iVar1 = fseeko64(__stream,in_stack_0000005c,__off >> 0x1f);
  return iVar1;
}


/* WARNING: Removing unreachable block (ram,0x0001c138) */
/* WARNING: Removing unreachable block (ram,0x0001c158) */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  undefined4 in_o2;
  undefined4 in_o3;
  undefined4 in_o4;
  undefined4 in_o5;
  undefined4 local_res4c;
  undefined4 local_res50;
  undefined4 local_res54;
  undefined4 local_res58;
  
  local_res4c = in_o2;
  local_res50 = in_o3;
  local_res54 = in_o4;
  local_res58 = in_o5;
  iVar1 = vfprintf(__stream,__format,&local_res4c);
  return iVar1;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001c2c0) */
/* WARNING: Removing unreachable block (ram,0x0001c36c) */
/* WARNING: Removing unreachable block (ram,0x0001c168) */
/* WARNING: Removing unreachable block (ram,0x0001c254) */
/* WARNING: Removing unreachable block (ram,0x0001c220) */
/* WARNING: Removing unreachable block (ram,0x0001c17c) */
/* WARNING: Removing unreachable block (ram,0x0001c1a4) */

int fseeko64(FILE *__stream,__off64_t __off,int __whence)

{
  ushort uVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  _IO_marker *unaff_g7;
  int iVar5;
  undefined4 in_o2;
  uint in_o3;
  int iVar6;
  char *pcVar7;
  undefined8 local_8;
  
  local_8 = CONCAT44(__whence,in_o2);
  if (2 < in_o3) {
    unaff_g7[-1]._sbuf = (_IO_FILE *)0x16;
    return -1;
  }
  pcVar7 = __stream->_IO_save_base;
  if (pcVar7 == (char *)0x0) {
    if (__stream->_markers != unaff_g7) {
      uVar4 = ((int)&__stream->_IO_backup_base >> 2 ^ (int)&__stream->_IO_backup_base >> 0xc) & 0x3f
      ;
      do {
        cVar2 = __sparc32_atomic_locks[uVar4];
        __sparc32_atomic_locks[uVar4] = -1;
      } while (cVar2 != '\0');
      pcVar3 = __stream->_IO_backup_base;
      if (pcVar3 == (char *)0x0) {
        __stream->_IO_backup_base = (char *)0x1;
      }
      __sparc32_atomic_locks[uVar4] = 0;
      if (pcVar3 == (char *)0x0) {
        __stream->_markers = unaff_g7;
      }
      else {
        __lll_lock_wait_private();
        __stream->_markers = unaff_g7;
      }
    }
    __stream->_IO_save_end = __stream->_IO_save_end + 1;
    uVar1 = *(ushort *)&__stream->_flags;
  }
  else {
    uVar1 = *(ushort *)&__stream->_flags;
  }
  if (((uVar1 & 0x40) == 0) || (iVar5 = __stdio_wcommit(__stream), iVar5 == 0)) {
    if (in_o3 == 1) {
      iVar5 = __stdio_adjust_position(__stream,&local_8);
      iVar6 = -1;
      if (iVar5 < 0) goto LAB_0001c2d8;
      pcVar3 = __stream->_IO_read_ptr;
    }
    else {
      pcVar3 = __stream->_IO_read_ptr;
    }
    if (pcVar3 == (char *)0xfffffffe) {
      if ((code *)__stream->_old_offset == (code *)0x0) goto LAB_0001c2d4;
      iVar5 = (*(code *)__stream->_old_offset)(__stream->_chain,&local_8);
    }
    else {
      iVar5 = __stdio_seek(__stream,&local_8,in_o3);
    }
    iVar6 = 0;
    if (-1 < iVar5) {
      *(ushort *)&__stream->_flags = *(ushort *)&__stream->_flags & 0xffb8;
      pcVar3 = __stream->_IO_read_end;
      __stream->_IO_write_base = pcVar3;
      __stream->_IO_write_ptr = pcVar3;
      __stream->_IO_write_end = pcVar3;
      __stream->_IO_buf_base = pcVar3;
      goto LAB_0001c2d8;
    }
  }
LAB_0001c2d4:
  iVar6 = -1;
LAB_0001c2d8:
  if ((pcVar7 == (char *)0x0) &&
     (pcVar7 = __stream->_IO_save_end, __stream->_IO_save_end = pcVar7 + -1,
     pcVar7 + -1 == (char *)0x0)) {
    __stream->_markers = (_IO_marker *)0x0;
    uVar4 = ((int)&__stream->_IO_backup_base >> 2 ^ (int)&__stream->_IO_backup_base >> 0xc) & 0x3f;
    do {
      cVar2 = __sparc32_atomic_locks[uVar4];
      __sparc32_atomic_locks[uVar4] = -1;
    } while (cVar2 != '\0');
    pcVar7 = __stream->_IO_backup_base;
    __stream->_IO_backup_base = (char *)0x0;
    __sparc32_atomic_locks[uVar4] = 0;
    if (1 < (int)pcVar7) {
      sw_trap(0x10);
    }
  }
  return iVar6;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001c37c) */
/* WARNING: Removing unreachable block (ram,0x0001c384) */
/* WARNING: Removing unreachable block (ram,0x0001c40c) */

uint __stdio_adjust_position(ushort *param_1,undefined8 *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_g7;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar1 = *param_1;
  iVar3 = 0;
  if ((uVar1 & 3) != 0) {
    iVar3 = ((uint)uVar1 & 3) - 1;
  }
  if ((uVar1 & 0x40) == 0) {
    iVar2 = *(int *)(param_1 + 10);
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
  }
  uVar5 = (iVar2 - *(int *)(param_1 + 8)) + iVar3;
  uVar4 = (uint)*param_2;
  iVar3 = (int)((ulonglong)*param_2 >> 0x20);
  iVar2 = (iVar3 - ((int)uVar5 >> 0x1f)) - (uint)(uVar4 < uVar5);
  *param_2 = CONCAT44(iVar2,uVar4 - uVar5);
  if ((iVar3 < iVar2) ||
     ((bVar7 = (int)uVar5 < 0, uVar6 = uVar5, iVar2 == iVar3 &&
      (bVar7 = (int)uVar5 < 0, uVar4 < uVar4 - uVar5)))) {
    uVar6 = -uVar5;
    bVar7 = 0 < (int)uVar5;
  }
  if (bVar7) {
    *(undefined4 *)(unaff_g7 + -8) = 0x5c;
  }
  return uVar6;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001c4c4) */
/* WARNING: Removing unreachable block (ram,0x0001c4d4) */
/* WARNING: Removing unreachable block (ram,0x0001c514) */
/* WARNING: Removing unreachable block (ram,0x0001c44c) */
/* WARNING: Removing unreachable block (ram,0x0001c508) */
/* WARNING: Removing unreachable block (ram,0x0001c4cc) */
/* WARNING: Removing unreachable block (ram,0x0001c454) */
/* WARNING: Removing unreachable block (ram,0x0001c49c) */

void * calloc(size_t __nmemb,size_t __size)

{
  int unaff_g7;
  undefined4 *__s;
  size_t __n;
  undefined auStack16 [16];
  
  if ((__nmemb != 0) && ((__nmemb * __size) / __nmemb != __size)) {
    *(undefined4 *)(unaff_g7 + -8) = 0xc;
    return (void *)0x0;
  }
  _pthread_cleanup_push_defer(auStack16,__pthread_mutex_trylock,__malloc_lock);
  __pthread_mutex_trylock(__malloc_lock);
  __s = (undefined4 *)malloc(__nmemb * __size);
  if ((__s != (undefined4 *)0x0) && ((__s[-1] & 2) == 0)) {
    __n = (__s[-1] & 0xfffffffc) - 4;
    if (__n < 0x28) {
      *__s = 0;
      __s[1] = 0;
      __s[2] = 0;
      if (0x13 < __n) {
        __s[3] = 0;
        __s[4] = 0;
        if (0x1b < __n) {
          __s[5] = 0;
          __s[6] = 0;
          if (0x23 < __n) {
            __s[7] = 0;
            __s[8] = 0;
          }
        }
      }
    }
    else {
      memset(__s,0,__n);
    }
  }
  _pthread_cleanup_pop_restore(auStack16,1);
  return __s;
}


/* WARNING: Inlined function: __sparc_get_pc_thunk.l7 */
/* WARNING: Removing unreachable block (ram,0x0001c560) */
/* WARNING: Removing unreachable block (ram,0x0001c568) */
/* WARNING: Removing unreachable block (ram,0x0001c5cc) */

uint __lseek64_nocancel(uint param_1)

{
  int unaff_g7;
  uint uVar1;
  bool in_i_cf;
  undefined8 local_8;
  
  sw_trap(0x10);
  if (in_i_cf) {
    param_1 = -param_1;
  }
  if (0xfffff000 < param_1) {
    *(int *)(unaff_g7 + -8) = -param_1;
    param_1 = 0xffffffff;
  }
  uVar1 = (int)param_1 >> 0x1f;
  if ((uVar1 | param_1) == 0) {
    uVar1 = (uint)((ulonglong)local_8 >> 0x20);
  }
  return uVar1;
}


/* WARNING: Removing unreachable block (ram,0x0001c618) */
/* WARNING: Removing unreachable block (ram,0x0001c5d4) */
/* WARNING: Removing unreachable block (ram,0x0001c608) */
/* WARNING: Removing unreachable block (ram,0x0001c5f0) */
/* WARNING: Removing unreachable block (ram,0x0001c5e8) */

__off64_t * lseek64(__off64_t *__return_storage_ptr__,int __fd,__off64_t __offset,int __whence)

{
  int unaff_g7;
  undefined4 uVar1;
  __off64_t *p_Var2;
  undefined4 in_o3;
  undefined4 in_o4;
  undefined4 in_o5;
  
  if (*(int *)(unaff_g7 + 0xc) == 0) {
    p_Var2 = (__off64_t *)__lseek64_nocancel(__return_storage_ptr__,__fd,__whence,in_o3,in_o4,in_o5)
    ;
    return p_Var2;
  }
  uVar1 = __libc_enable_asynccancel(__return_storage_ptr__,__fd,__whence);
  p_Var2 = (__off64_t *)__lseek64_nocancel(__return_storage_ptr__,__fd,__whence,in_o3);
  __libc_disable_asynccancel(uVar1);
  return p_Var2;
}


/* WARNING: Removing unreachable block (ram,0x0001c628) */

undefined4 __do_global_ctors_aux(undefined4 param_1)

{
  code *pcVar1;
  code **ppcVar2;
  
  ppcVar2 = (code **)&__CTOR_LIST__;
  pcVar1 = __CTOR_LIST__;
  while (pcVar1 != (code *)0xffffffff) {
    ppcVar2 = ppcVar2 + -1;
    (*pcVar1)();
    pcVar1 = *ppcVar2;
  }
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x0001c65c) */
/* WARNING: Removing unreachable block (ram,0x0001c660) */

undefined4 call___do_global_ctors_aux(undefined4 param_1)

{
  return param_1;
}


/* WARNING: Removing unreachable block (ram,0x0001c668) */
/* WARNING: Removing unreachable block (ram,0x0001c66c) */

undefined4 _fini(undefined4 param_1)

{
  __do_global_dtors_aux();
  return param_1;
}

