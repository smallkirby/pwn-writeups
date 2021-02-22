
void _DT_INIT(void)

{
  if (PTR___gmon_start___00301fd8 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___00301fd8)();
  }
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00301f70)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00301f78)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int RSA_private_encrypt(int flen,uchar *from,uchar *to,RSA *rsa,int padding)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_RSA_private_encrypt_00301f80)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00301f88)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

BIO * BIO_new_mem_buf(void *buf,int len)

{
  BIO *pBVar1;
  
  pBVar1 = (BIO *)(*(code *)PTR_BIO_new_mem_buf_00301f90)();
  return pBVar1;
}


void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00301f98)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void BIO_free_all(BIO *a)

{
  (*(code *)PTR_BIO_free_all_00301fa0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00301fa8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void EVP_PKEY_free(EVP_PKEY *pkey)

{
  (*(code *)PTR_EVP_PKEY_free_00301fb0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

EVP_PKEY * d2i_PrivateKey_bio(BIO *bp,EVP_PKEY **a)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)(*(code *)PTR_d2i_PrivateKey_bio_00301fb8)();
  return pEVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void RSA_free(RSA *r)

{
  (*(code *)PTR_RSA_free_00301fc0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

rsa_st * EVP_PKEY_get1_RSA(EVP_PKEY *pkey)

{
  rsa_st *prVar1;
  
  prVar1 = (rsa_st *)(*(code *)PTR_EVP_PKEY_get1_RSA_00301fc8)();
  return prVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00301fd0)();
  return pvVar1;
}


void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00301ff8)();
  return;
}


void entry(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  (*(code *)PTR___libc_start_main_00301fe0)
            (FUN_00100a6a,in_stack_00000000,&stack0x00000008,&LAB_00101020,&DAT_00101090,param_3,
             auStack8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x001009a7) */
/* WARNING: Removing unreachable block (ram,0x001009b3) */

void FUN_00100990(void)

{
  return;
}


void _FINI_0(void)

{
  if (DAT_00302010 == '\0') {
    if (PTR___cxa_finalize_00301ff8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00302008);
    }
    FUN_00100990();
    DAT_00302010 = 1;
    return;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x001009f8) */
/* WARNING: Removing unreachable block (ram,0x00100a04) */

void _INIT_0(void)

{
  return;
}


undefined8 FUN_00100a6a(int param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  EVP_PKEY *local_b10;
  rsa_st *local_b08;
  BIO *local_b00;
  undefined local_af8;
  undefined local_af7;
  undefined local_af6;
  undefined local_af5;
  undefined local_af4;
  undefined local_af3;
  undefined local_af2;
  undefined local_af1;
  undefined local_af0;
  undefined local_aef;
  undefined local_aee;
  undefined local_aed;
  undefined local_aec;
  undefined local_aeb;
  undefined local_aea;
  undefined local_ae9;
  undefined local_ae8;
  undefined local_ae7;
  undefined local_ae6;
  undefined local_ae5;
  undefined local_ae4;
  undefined local_ae3;
  undefined local_ae2;
  undefined local_ae1;
  undefined local_ae0;
  undefined local_adf;
  undefined local_ade;
  undefined local_add;
  undefined local_adc;
  undefined local_adb;
  undefined local_ada;
  undefined local_ad9;
  undefined local_ad8;
  undefined local_ad7;
  undefined local_ad6;
  undefined local_ad5;
  undefined local_ad4;
  undefined local_ad3;
  undefined local_ad2;
  undefined local_ad1;
  undefined local_ad0;
  undefined local_acf;
  undefined local_ace;
  undefined local_acd;
  undefined local_acc;
  undefined local_acb;
  undefined local_aca;
  undefined local_ac9;
  undefined local_ac8;
  undefined local_ac7;
  undefined local_ac6;
  undefined local_ac5;
  undefined local_ac4;
  undefined local_ac3;
  undefined local_ac2;
  undefined local_ac1;
  undefined local_ac0;
  undefined local_abf;
  undefined local_abe;
  undefined local_abd;
  undefined local_abc;
  undefined local_abb;
  undefined local_aba;
  undefined local_ab9;
  undefined local_ab8;
  undefined local_ab7;
  undefined local_ab6;
  undefined local_ab5;
  undefined local_ab4;
  undefined local_ab3;
  undefined local_ab2;
  undefined local_ab1;
  undefined local_ab0;
  undefined local_aaf;
  undefined local_aae;
  undefined local_aad;
  undefined local_aac;
  undefined local_aab;
  undefined local_aaa;
  undefined local_aa9;
  undefined local_aa8;
  undefined local_aa7;
  undefined local_aa6;
  undefined local_aa5;
  undefined local_aa4;
  undefined local_aa3;
  undefined local_aa2;
  undefined local_aa1;
  undefined local_aa0;
  undefined local_a9f;
  undefined local_a9e;
  undefined local_a9d;
  undefined local_a9c;
  undefined local_a9b;
  undefined local_a9a;
  undefined local_a99;
  undefined local_a98;
  undefined local_a97;
  undefined local_a96;
  undefined local_a95;
  undefined local_a94;
  undefined local_a93;
  undefined local_a92;
  undefined local_a91;
  undefined local_a90;
  undefined local_a8f;
  undefined local_a8e;
  undefined local_a8d;
  undefined local_a8c;
  undefined local_a8b;
  undefined local_a8a;
  undefined local_a89;
  undefined local_a88;
  undefined local_a87;
  undefined local_a86;
  undefined local_a85;
  undefined local_a84;
  undefined local_a83;
  undefined local_a82;
  undefined local_a81;
  undefined local_a80;
  undefined local_a7f;
  undefined local_a7e;
  undefined local_a7d;
  undefined local_a7c;
  undefined local_a7b;
  undefined local_a7a;
  undefined local_a79;
  undefined8 local_a78 [76];
  uchar local_818 [1024];
  uchar local_418 [1032];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_af8 = 0x6f;
  local_af7 = 0x86;
  local_af6 = 0xe4;
  local_af5 = 0x96;
  local_af4 = 0x29;
  local_af3 = 0xbe;
  local_af2 = 0x8a;
  local_af1 = 0x5e;
  local_af0 = 0x21;
  local_aef = 0xe2;
  local_aee = 0xc0;
  local_aed = 0xda;
  local_aec = 0x25;
  local_aeb = 0xb7;
  local_aea = 0x95;
  local_ae9 = 0xe0;
  local_ae8 = 0x5f;
  local_ae7 = 10;
  local_ae6 = 0x6c;
  local_ae5 = 0xe9;
  local_ae4 = 0x44;
  local_ae3 = 0xdb;
  local_ae2 = 0x12;
  local_ae1 = 0x4c;
  local_ae0 = 0x3a;
  local_adf = 0x6c;
  local_ade = 0x14;
  local_add = 0x87;
  local_adc = 0xc6;
  local_adb = 0x36;
  local_ada = 0x6b;
  local_ad9 = 0x6d;
  local_ad8 = 0x95;
  local_ad7 = 6;
  local_ad6 = 0x1c;
  local_ad5 = 0x2d;
  local_ad4 = 0x11;
  local_ad3 = 0x9e;
  local_ad2 = 0xf8;
  local_ad1 = 0x72;
  local_ad0 = 0xcc;
  local_acf = 0x9b;
  local_ace = 0x74;
  local_acd = 0x87;
  local_acc = 0x73;
  local_acb = 0xa7;
  local_aca = 0x52;
  local_ac9 = 0x72;
  local_ac8 = 0xc;
  local_ac7 = 0x5b;
  local_ac6 = 0x92;
  local_ac5 = 0x8d;
  local_ac4 = 0x7c;
  local_ac3 = 0xa9;
  local_ac2 = 0x35;
  local_ac1 = 0xeb;
  local_ac0 = 0xc5;
  local_abf = 0xd6;
  local_abe = 0x1e;
  local_abd = 0x1c;
  local_abc = 0x9e;
  local_abb = 0x7e;
  local_aba = 0xd3;
  local_ab9 = 0x6e;
  local_ab8 = 0x43;
  local_ab7 = 0x35;
  local_ab6 = 0x93;
  local_ab5 = 0xd0;
  local_ab4 = 0x6c;
  local_ab3 = 0x26;
  local_ab2 = 0xb4;
  local_ab1 = 0x95;
  local_ab0 = 0xe5;
  local_aaf = 0x99;
  local_aae = 0x28;
  local_aad = 99;
  local_aac = 0x5e;
  local_aab = 0xeb;
  local_aaa = 0xad;
  local_aa9 = 0x40;
  local_aa8 = 0xce;
  local_aa7 = 0x26;
  local_aa6 = 0x67;
  local_aa5 = 0xf7;
  local_aa4 = 0x32;
  local_aa3 = 0xb2;
  local_aa2 = 3;
  local_aa1 = 0xd;
  local_aa0 = 0x30;
  local_a9f = 0x24;
  local_a9e = 0x93;
  local_a9d = 0x84;
  local_a9c = 0x3a;
  local_a9b = 0x19;
  local_a9a = 0xac;
  local_a99 = 0x6f;
  local_a98 = 0x11;
  local_a97 = 0xbb;
  local_a96 = 0xb;
  local_a95 = 0x5b;
  local_a94 = 0x41;
  local_a93 = 0x8d;
  local_a92 = 0x9d;
  local_a91 = 0x49;
  local_a90 = 0x1a;
  local_a8f = 0xb1;
  local_a8e = 0x21;
  local_a8d = 0xd9;
  local_a8c = 0x79;
  local_a8b = 0x43;
  local_a8a = 0xbc;
  local_a89 = 0x83;
  local_a88 = 0x1c;
  local_a87 = 0x36;
  local_a86 = 0x98;
  local_a85 = 0xb9;
  local_a84 = 0x5a;
  local_a83 = 0x53;
  local_a82 = 0xd9;
  local_a81 = 0xf4;
  local_a80 = 0xa3;
  local_a7f = 0x99;
  local_a7e = 0x34;
  local_a7d = 0x67;
  local_a7c = 0xa2;
  local_a7b = 0x8b;
  local_a7a = 0xce;
  local_a79 = 6;
  lVar4 = 0x4c;
  puVar5 = &DAT_00101100;
  puVar6 = local_a78;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (param_1 == 2) {
    sVar3 = strlen(*(char **)(param_2 + 8));
    memcpy(local_418,*(void **)(param_2 + 8),(long)(int)sVar3);
    local_b08 = (rsa_st *)0x0;
    local_b10 = (EVP_PKEY *)0x0;
    local_b00 = (BIO *)0x0;
    local_b00 = BIO_new_mem_buf(local_a78,0x260);
    if (local_b00 == (BIO *)0x0) {
      uVar2 = 1;
    }
    else {
      local_b10 = d2i_PrivateKey_bio(local_b00,&local_b10);
      if (local_b10 == (EVP_PKEY *)0x0) {
        uVar2 = 1;
      }
      else {
        local_b08 = EVP_PKEY_get1_RSA(local_b10);
        if (local_b08 == (rsa_st *)0x0) {
          uVar2 = 1;
        }
        else {
          iVar1 = RSA_private_encrypt((int)sVar3,local_418,local_818,(RSA *)local_b08,1);
          if (iVar1 < 0) {
            uVar2 = 1;
          }
          else {
            iVar1 = memcmp(local_818,&local_af8,(long)iVar1);
            if (iVar1 == 0) {
              puts("Correct!");
            }
            else {
              puts("Incorrect!");
            }
            RSA_free((RSA *)local_b08);
            EVP_PKEY_free(local_b10);
            BIO_free_all(local_b00);
            uVar2 = 0;
          }
        }
      }
    }
  }
  else {
    printf("./rsa TWCTF{*****************************}");
    uVar2 = 1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


void _DT_FINI(void)

{
  return;
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

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
/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int RSA_private_encrypt(int flen,uchar *from,uchar *to,RSA *rsa,int padding)

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

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t strlen(char *__s)

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

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

BIO * BIO_new_mem_buf(void *buf,int len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void BIO_free_all(BIO *a)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void EVP_PKEY_free(EVP_PKEY *pkey)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

EVP_PKEY * d2i_PrivateKey_bio(BIO *bp,EVP_PKEY **a)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void RSA_free(RSA *r)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

rsa_st * EVP_PKEY_get1_RSA(EVP_PKEY *pkey)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

