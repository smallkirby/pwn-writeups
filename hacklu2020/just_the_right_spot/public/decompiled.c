
/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int _init(EVP_PKEY_CTX *ctx)

{
  undefined *puVar1;
  
  puVar1 = PTR___gmon_start___00015ff4;
  if (PTR___gmon_start___00015ff4 != (undefined *)0x0) {
    puVar1 = (undefined *)(*(code *)PTR___gmon_start___00015ff4)();
  }
  return (int)puVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void close(void)

{
  (*(code *)PTR_close_00015f58)();
  return;
}


void __thiscall _basic_ifstream(basic_ifstream_char_std__char_traits_char__ *this)

{
  (*(code *)PTR__basic_ifstream_00015f5c)();
  return;
}


void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_00015f64)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00015f68)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void __throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00015f6c)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_00015f70)();
  return iVar1;
}


void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00015f74)();
  return;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00015f78)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

basic_ostream * operator___std__char_traits_char__(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator___std__char_traits_char___00015f7c)();
  return pbVar1;
}


void __thiscall operator__(basic_ostream_char_std__char_traits_char__ *this,FuncDef0 *param_1)

{
  (*(code *)PTR_operator___00015f80)();
  return;
}


void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00015f84)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void get(void)

{
  (*(code *)PTR_get_00015f88)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

basic_ostream *
__ostream_insert_char_std__char_traits_char__(basic_ostream *param_1,char *param_2,int param_3)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR___ostream_insert_char_std__char_traits_char___00015f8c)();
  return pbVar1;
}


void __thiscall Init(Init *this)

{
  (*(code *)PTR_Init_00015f90)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void read(char *param_1,int param_2)

{
  (*(code *)PTR_read_00015f94)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00015f98)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_00015f9c)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00015fa4)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void good(void)

{
  (*(code *)PTR_good_00015fa8)();
  return;
}


void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_00015fac)();
  return;
}


void __thiscall operator__(basic_ostream_char_std__char_traits_char__ *this,int param_1)

{
  (*(code *)PTR_operator___00015fb0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00015fb8)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void basic_ifstream(char *param_1,_Ios_Openmode param_2)

{
  (*(code *)PTR_basic_ifstream_00015fbc)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap_00015fc0)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int mprotect(void *__addr,size_t __len,int __prot)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mprotect_00015fc4)();
  return iVar1;
}


/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _start(void)

{
  __libc_start_main(PTR_main_00015fcc);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}


/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}


/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001126b) */
/* WARNING: Removing unreachable block (ram,0x00011275) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000112be) */
/* WARNING: Removing unreachable block (ram,0x000112c8) */

void register_tm_clones(void)

{
  return;
}


/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    if (PTR___cxa_finalize_00015fc8 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00015fc8)(__dso_handle);
    }
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}


void frame_dummy(void)

{
  register_tm_clones();
  return;
}


/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}


/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Could not reconcile some variable overlaps */

int install_syscall_filter(void)

{
  int iVar1;
  undefined4 *puVar2;
  sock_filter *psVar3;
  int in_GS_OFFSET;
  sock_fprog prog;
  sock_filter filter [25];
  int local_20;
  
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  iVar1 = 0x32;
  puVar2 = &DAT_00013060;
  psVar3 = filter;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *(undefined4 *)psVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    psVar3 = (sock_filter *)&psVar3->k;
  }
  prog._0_4_ = 0x19;
  prog.filter = filter;
  iVar1 = prctl(0x26,1,0,0,0);
  if ((iVar1 == 0) && (iVar1 = prctl(0x16,2,&prog), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}


int main(int argc)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int *extraout_ECX;
  int unaff_ESI;
  int unaff_EDI;
  int in_GS_OFFSET;
  basic_ifstream_char_std__char_traits_char__ local_13c [280];
  int local_24;
  int *local_18;
  
  local_18 = &argc;
  __x86_get_pc_thunk_si();
  local_24 = *(int *)(in_GS_OFFSET + 0x14);
  if (*extraout_ECX == 2) {
    iVar2 = atoi(*(char **)(extraout_ECX[1] + 4));
    *(int *)(unaff_ESI + 0x5bdf) = iVar2;
  }
  else {
    basic_ifstream((char *)local_13c,unaff_ESI + 0x1d07);
    uVar3 = get();
    *(undefined4 *)(unaff_ESI + 0x5bdf) = uVar3;
    cVar1 = good();
    if (cVar1 == '\x01') {
      close();
    }
    else {
      unaff_EDI = 2;
    }
    _basic_ifstream(local_13c);
    if (cVar1 != '\x01') goto LAB_00011630;
  }
  *(uint *)(unaff_ESI + 0x5be3) = *(int *)(unaff_ESI + 0x5bdf) >> 1 & 0xf;
  iVar2 = munmap((void *)(unaff_ESI + 0x8bdf),0x2000000);
  if (iVar2 == 0) {
    iVar2 = mprotect((void *)(unaff_ESI + 0x5bdf),0x1000,4);
    if (iVar2 == 0) {
      pvVar4 = mmap((void *)((unaff_ESI - 0x1cU & 0xffc00000) + 0x800000 +
                            (*(uint *)(unaff_ESI + 0x5bdf) & 1) * 0x400000),0x800000,3,0x32,-1,0);
      if (pvVar4 == (void *)((unaff_ESI - 0x1cU & 0xffc00000) + 0x800000 +
                            (*(uint *)(unaff_ESI + 0x5bdf) & 1) * 0x400000)) {
        iVar2 = install_syscall_filter();
        if (iVar2 == 0) {
          unserialize((Parser *)(unaff_ESI + 0x7bdf),*(istream **)(unaff_ESI + 0x4bcf));
          dump((Parser *)(unaff_ESI + 0x7bdf));
          unaff_EDI = 1;
        }
        else {
          unaff_EDI = 6;
        }
      }
      else {
        unaff_EDI = 5;
      }
    }
    else {
      unaff_EDI = 4;
    }
  }
  else {
    unaff_EDI = 3;
  }
LAB_00011630:
  if (local_24 != *(int *)(in_GS_OFFSET + 0x14)) {
    unaff_EDI = __stack_chk_fail_local();
  }
  return unaff_EDI;
}


/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
  if ((__initialize_p == 1) && (__priority == 0xffff)) {
    Init(&__ioinit);
    __cxa_atexit(PTR__Init_00015ffc,&__ioinit,&__dso_handle);
    Parser(&cfg,(ostream *)PTR_cout_00015fe4);
    __cxa_atexit(_Parser,&cfg,&__dso_handle);
  }
  return;
}


void _GLOBAL__sub_I_region_seed(void)

{
  __x86_get_pc_thunk_ax();
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}


bool is_constant_evaluated(void)

{
  __x86_get_pc_thunk_ax();
  return false;
}


void __thiscall exception(exception *this)

{
  int iVar1;
  
  iVar1 = __x86_get_pc_thunk_ax();
  *(int *)this = *(int *)(iVar1 + 0x4882) + 8;
  return;
}


/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __thiscall bad_alloc(bad_alloc *this)

{
  exception((exception *)this);
  *(undefined **)this = PTR_vtable_00015fdc + 8;
  return;
}


uint __size_to_integer(uint __n)

{
  __x86_get_pc_thunk_ax();
  return __n;
}


void assign(char_type *__c1,char_type *__c2)

{
  __x86_get_pc_thunk_ax();
  *__c1 = *__c2;
  return;
}


/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

char_type * move(char_type *__s1,char_type *__s2,size_t __n)

{
  bool bVar1;
  
  if (__n != 0) {
    bVar1 = is_constant_evaluated();
    if (bVar1 == false) {
      __s1 = (char_type *)memmove(__s1,__s2,__n);
    }
    else {
      __s1 = move(__s1,__s2,__n);
    }
  }
  return __s1;
}


/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

char_type * copy(char_type *__s1,char_type *__s2,size_t __n)

{
  bool bVar1;
  
  if (__n != 0) {
    bVar1 = is_constant_evaluated();
    if (bVar1 == false) {
      __s1 = (char_type *)memcpy(__s1,__s2,__n);
    }
    else {
      __s1 = copy(__s1,__s2,__n);
    }
  }
  return __s1;
}


/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

char_type * assign(char_type *__s,size_t __n,char_type __a)

{
  bool bVar1;
  
  if (__n != 0) {
    bVar1 = is_constant_evaluated();
    if (bVar1 == false) {
      __s = (char_type *)memset(__s,(int)__a,__n);
    }
    else {
      __s = assign(__s,__n,__a);
    }
  }
  return __s;
}


void __thiscall Parser(Parser *this,ostream *output)

{
  basic_string_char_std__char_traits_char__Alloc_char__ *this_00;
  int iVar1;
  
  __x86_get_pc_thunk_ax();
  this_00 = (basic_string_char_std__char_traits_char__Alloc_char__ *)this->descriptions;
  iVar1 = 4;
  while (-1 < iVar1) {
    basic_string(this_00);
    this_00 = this_00 + 1;
    iVar1 = iVar1 + -1;
  }
  this->os = output;
  return;
}


/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __thiscall dump(Parser *this)

{
  basic_ostream *this_00;
  basic_ostream_char_std__char_traits_char__ *this_01;
  int i;
  
  i = 0;
  while (i < 5) {
    this_00 = operator___std__char_traits_char__((basic_ostream *)this->os,"[");
    this_00 = (basic_ostream *)operator__((basic_ostream_char_std__char_traits_char__ *)this_00,i);
    this_00 = operator___std__char_traits_char__(this_00,"] ");
    this_01 = operator___char_std__char_traits_char__Alloc_char__
                        ((basic_ostream_char_std__char_traits_char__ *)this_00,
                         (basic_string_char_std__char_traits_char__Alloc_char__ *)
                         (this->descriptions + i));
    operator__(this_01,(FuncDef0 *)PTR_endl_char_std__char_traits_char___00015fd0);
    i = i + 1;
  }
  return;
}


void __thiscall unserialize(Parser *this,istream *input)

{
  int iVar1;
  char cVar2;
  reference pvVar3;
  int unaff_ESI;
  int in_GS_OFFSET;
  int *piVar4;
  undefined4 uVar5;
  int x;
  int y;
  size_t size;
  size_t i;
  size_t read_ind;
  bad_alloc *e_1;
  length_error *e;
  
  __x86_get_pc_thunk_si();
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  x = 0;
  y = 0;
  read((char *)input,(int)&x);
  uVar5 = 4;
  piVar4 = &y;
  read((char *)input,(int)piVar4);
  cVar2 = good();
  if (cVar2 == '\x01') {
    if (5 < y * x) {
      piVar4 = (int *)__cxa_allocate_exception(4,piVar4,uVar5);
      *piVar4 = unaff_ESI + 0x160e;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(piVar4,*(undefined4 *)(unaff_ESI + 0x45b5),0);
    }
    i = 0;
    while (i < (uint)(y * x)) {
      read((char *)input,(int)&size);
      cVar2 = good();
      if (cVar2 != '\x01') break;
      if (size != 0) {
        resize((basic_string_char_std__char_traits_char__Alloc_char__ *)(this->descriptions + i),
               size);
        pvVar3 = operator__((basic_string_char_std__char_traits_char__Alloc_char__ *)
                            (this->descriptions + i),0);
        read((char *)input,(int)pvVar3);
        cVar2 = good();
        if (cVar2 != '\x01') break;
      }
      i = i + 1;
    }
  }
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}


/* Original name: copy_backward<char const*, char*> */

char * copy_backward_charconst__char__(char *__first,char *__last,char *__result)

{
  char *__last_00;
  char *__first_00;
  
  __x86_get_pc_thunk_ax();
  __last_00 = __miter_base_charconst__(__last);
  __first_00 = __miter_base_charconst__(__first);
  __last_00 = __copy_move_backward_a_false_charconst__char__(__first_00,__last_00,__result);
  return __last_00;
}


/* Original name: copy<char const*, char*> */

char * copy_charconst__char__(char *__first,char *__last,char *__result)

{
  char *__last_00;
  char *__first_00;
  
  __x86_get_pc_thunk_ax();
  __last_00 = __miter_base_charconst__(__last);
  __first_00 = __miter_base_charconst__(__first);
  __last_00 = __copy_move_a_false_charconst__char__(__first_00,__last_00,__result);
  return __last_00;
}


/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

char_type * move(char_type *__s1,char_type *__s2,size_t __n)

{
  bool bVar1;
  
  if (__n != 0) {
    bVar1 = is_constant_evaluated();
    if (bVar1 == false) {
      __s1 = (char_type *)memmove(__s1,__s2,__n);
    }
    else {
      if ((__s2 < __s1) && (__s1 < __s2 + __n)) {
        copy_backward_charconst__char__(__s2,__s2 + __n,__s1);
      }
      else {
        copy_charconst__char__(__s2,__s2 + __n,__s1);
      }
    }
  }
  return __s1;
}


char_type * copy(char_type *__s1,char_type *__s2,size_t __n)

{
  __x86_get_pc_thunk_ax();
  copy_charconst__char__(__s2,__s2 + __n,__s1);
  return __s1;
}


/* Original name: fill_n<char*, unsigned int, char> */

char * fill_n_char__unsignedint_char_(char *__first,uint __n,char *__value)

{
  uint __n_00;
  char *pcVar1;
  random_access_iterator_tag unaff_BL;
  int in_GS_OFFSET;
  undefined local_25;
  char *local_24;
  char *local_20;
  int local_10;
  
  __x86_get_pc_thunk_ax();
  local_20 = __first;
  local_24 = __value;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  __iterator_category_char__((char **)&local_25);
  __n_00 = __size_to_integer(__n);
  pcVar1 = __fill_n_a_char__unsignedint_char_(local_20,__n_00,local_24,unaff_BL);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    pcVar1 = (char *)__stack_chk_fail_local();
  }
  return pcVar1;
}


char_type * assign(char_type *__s,size_t __n,char_type __a)

{
  char local_10 [12];
  
  __x86_get_pc_thunk_ax();
  local_10[0] = __a;
  fill_n_char__unsignedint_char_(__s,__n,local_10);
  return __s;
}


void __thiscall __Alloc_hider(_Alloc_hider *this)

{
  __x86_get_pc_thunk_ax();
  _Alloc((Alloc_char_ *)this);
  return;
}


void __thiscall basic_string(basic_string_char_std__char_traits_char__Alloc_char__ *this)

{
  pointer __dat;
  int in_GS_OFFSET;
  Alloc_char_ local_11;
  int local_10;
  
  __x86_get_pc_thunk_si();
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  Alloc(&local_11);
  __dat = _M_local_data(this);
  _Alloc_hider((_Alloc_hider *)this,__dat,&local_11);
  _Alloc(&local_11);
  _M_set_length(this,0);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}


void __thiscall _basic_string(basic_string_char_std__char_traits_char__Alloc_char__ *this)

{
  __x86_get_pc_thunk_ax();
  _M_dispose(this);
  __Alloc_hider((_Alloc_hider *)this);
  return;
}


/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Original name: operator<<<char, std::char_traits<char>, Alloc<char>> */

basic_ostream_char_std__char_traits_char__ *
operator___char_std__char_traits_char__Alloc_char__
          (basic_ostream_char_std__char_traits_char__ *__os,
          basic_string_char_std__char_traits_char__Alloc_char__ *__str)

{
  size_type sVar1;
  char *pcVar2;
  basic_ostream *pbVar3;
  
  sVar1 = size(__str);
  pcVar2 = data(__str);
  pbVar3 = __ostream_insert_char_std__char_traits_char__((basic_ostream *)__os,pcVar2,sVar1);
  return (basic_ostream_char_std__char_traits_char__ *)pbVar3;
}


void __thiscall resize(basic_string_char_std__char_traits_char__Alloc_char__ *this,size_type __n)

{
  __x86_get_pc_thunk_ax();
  resize(this,__n,'\0');
  return;
}


reference __thiscall
operator__(basic_string_char_std__char_traits_char__Alloc_char__ *this,size_type __pos)

{
  pointer pvVar1;
  
  __x86_get_pc_thunk_ax();
  pvVar1 = _M_data(this);
  return pvVar1 + __pos;
}


/* Original name: __miter_base<char const*> */

char * __miter_base_charconst__(char *__it)

{
  __x86_get_pc_thunk_ax();
  return __it;
}


/* Original name: __copy_move_backward_a<false, char const*, char*> */

char * __copy_move_backward_a_false_charconst__char__(char *__first,char *__last,char *__result)

{
  char *__result_00;
  char *__last_00;
  char *__first_00;
  
  __x86_get_pc_thunk_ax();
  __result_00 = __niter_base_char__(__result);
  __last_00 = __niter_base_charconst__(__last);
  __first_00 = __niter_base_charconst__(__first);
  __result_00 = __copy_move_backward_a1_false_charconst__char__(__first_00,__last_00,__result_00);
  __result_00 = __niter_wrap_char__(&__result,__result_00);
  return __result_00;
}


/* Original name: __copy_move_a<false, char const*, char*> */

char * __copy_move_a_false_charconst__char__(char *__first,char *__last,char *__result)

{
  char *__result_00;
  char *__last_00;
  char *__first_00;
  
  __x86_get_pc_thunk_ax();
  __result_00 = __niter_base_char__(__result);
  __last_00 = __niter_base_charconst__(__last);
  __first_00 = __niter_base_charconst__(__first);
  __result_00 = __copy_move_a1_false_charconst__char__(__first_00,__last_00,__result_00);
  __result_00 = __niter_wrap_char__(&__result,__result_00);
  return __result_00;
}


iterator_category __iterator_category_char__(char **param_1)

{
  __x86_get_pc_thunk_ax();
  return SUB41(param_1,0);
}


/* Original name: __fill_n_a<char*, unsigned int, char> */

char * __fill_n_a_char__unsignedint_char_
                 (char *__first,uint __n,char *__value,random_access_iterator_tag param_4)

{
  __x86_get_pc_thunk_ax();
  if (__n != 0) {
    __fill_a_char__char_(__first,__first + __n,__value);
    __first = __first + __n;
  }
  return __first;
}


pointer __thiscall _M_local_data(basic_string_char_std__char_traits_char__Alloc_char__ *this)

{
  pointer pcVar1;
  
  __x86_get_pc_thunk_ax();
  pcVar1 = pointer_to((__make_not_void *)this->field_2);
  return pcVar1;
}


void __thiscall Alloc(Alloc_char_ *this)

{
  __x86_get_pc_thunk_ax();
  return;
}


void __thiscall _Alloc(Alloc_char_ *this)

{
  __x86_get_pc_thunk_ax();
  return;
}


void __thiscall _Alloc_hider(_Alloc_hider *this,pointer __dat,Alloc_char_ *__a)

{
  type *ptVar1;
  
  __x86_get_pc_thunk_ax();
  ptVar1 = move_Alloc_char___(__a);
  Alloc((Alloc_char_ *)this,(Alloc_char_ *)ptVar1);
  this->_M_p = __dat;
  return;
}


void __thiscall
_M_set_length(basic_string_char_std__char_traits_char__Alloc_char__ *this,size_type __n)

{
  pointer pvVar1;
  int in_GS_OFFSET;
  char_type local_11;
  int local_10;
  
  __x86_get_pc_thunk_ax();
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  _M_length(this,__n);
  local_11 = '\0';
  pvVar1 = _M_data(this);
  assign(pvVar1 + __n,&local_11);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}


void __thiscall _M_dispose(basic_string_char_std__char_traits_char__Alloc_char__ *this)

{
  bool bVar1;
  
  __x86_get_pc_thunk_ax();
  bVar1 = _M_is_local(this);
  if (bVar1 != true) {
    _M_destroy(this,*(size_type *)this->field_2);
  }
  return;
}


char * __thiscall data(basic_string_char_std__char_traits_char__Alloc_char__ *this)

{
  pointer pvVar1;
  
  __x86_get_pc_thunk_ax();
  pvVar1 = _M_data(this);
  return pvVar1;
}


size_type __thiscall size(basic_string_char_std__char_traits_char__Alloc_char__ *this)

{
  __x86_get_pc_thunk_ax();
  return this->_M_string_length;
}


void __thiscall
resize(basic_string_char_std__char_traits_char__Alloc_char__ *this,size_type __n,char __c)

{
  size_type sVar1;
  size_type __size;
  
  __x86_get_pc_thunk_ax();
  sVar1 = size(this);
  if (sVar1 < __n) {
    append(this,__n - sVar1,__c);
  }
  else {
    if (__n < sVar1) {
      _M_set_length(this,__n);
    }
  }
  return;
}


pointer __thiscall _M_data(basic_string_char_std__char_traits_char__Alloc_char__ *this)

{
  __x86_get_pc_thunk_ax();
  return (this->_M_dataplus)._M_p;
}


/* Original name: __niter_base<char const*> */

char * __niter_base_charconst__(char *__it)

{
  __x86_get_pc_thunk_ax();
  return __it;
}


char * __niter_base_char__(char *__it)

{
  __x86_get_pc_thunk_ax();
  return __it;
}


/* Original name: __copy_move_backward_a1<false, char const*, char*> */

char * __copy_move_backward_a1_false_charconst__char__(char *__first,char *__last,char *__result)

{
  char *pcVar1;
  
  __x86_get_pc_thunk_ax();
  pcVar1 = __copy_move_backward_a2_false_charconst__char__(__first,__last,__result);
  return pcVar1;
}


char * __niter_wrap_char__(char **param_1,char *__res)

{
  __x86_get_pc_thunk_ax();
  return __res;
}


/* Original name: __copy_move_a1<false, char const*, char*> */

char * __copy_move_a1_false_charconst__char__(char *__first,char *__last,char *__result)

{
  char *pcVar1;
  
  __x86_get_pc_thunk_ax();
  pcVar1 = __copy_move_a2_false_charconst__char__(__first,__last,__result);
  return pcVar1;
}


/* Original name: __fill_a<char*, char> */

void __fill_a_char__char_(char *__first,char *__last,char *__value)

{
  __x86_get_pc_thunk_ax();
  __fill_a1_char_(__first,__last,__value);
  return;
}


pointer pointer_to(__make_not_void *__r)

{
  char *pcVar1;
  
  __x86_get_pc_thunk_ax();
  pcVar1 = addressof_char_(__r);
  return pcVar1;
}


type * move_Alloc_char___(Alloc_char_ *__t)

{
  __x86_get_pc_thunk_ax();
  return (type *)__t;
}


void __thiscall Alloc(Alloc_char_ *this,Alloc_char_ *param_1)

{
  __x86_get_pc_thunk_ax();
  return;
}


void __thiscall
_M_length(basic_string_char_std__char_traits_char__Alloc_char__ *this,size_type __length)

{
  __x86_get_pc_thunk_ax();
  this->_M_string_length = __length;
  return;
}


bool __thiscall _M_is_local(basic_string_char_std__char_traits_char__Alloc_char__ *this)

{
  pointer pvVar1;
  const_pointer pvVar2;
  
  __x86_get_pc_thunk_ax();
  pvVar1 = _M_data(this);
  pvVar2 = _M_local_data(this);
  return pvVar1 == pvVar2;
}


void __thiscall
_M_destroy(basic_string_char_std__char_traits_char__Alloc_char__ *this,size_type __size)

{
  pointer __p;
  allocator_type *__a;
  
  __x86_get_pc_thunk_ax();
  __p = _M_data(this);
  __a = _M_get_allocator(this);
  deallocate((Alloc_char_ *)__a,__p,__size + 1);
  return;
}


basic_string_char_std__char_traits_char__Alloc_char__ * __thiscall
append(basic_string_char_std__char_traits_char__Alloc_char__ *this,size_type __n,char __c)

{
  size_type __pos1;
  basic_string_char_std__char_traits_char__Alloc_char__ *pbVar1;
  
  __x86_get_pc_thunk_ax();
  __pos1 = size(this);
  pbVar1 = _M_replace_aux(this,__pos1,0,__n,__c);
  return pbVar1;
}


/* Original name: __copy_move_backward_a2<false, char const*, char*> */

char * __copy_move_backward_a2_false_charconst__char__(char *__first,char *__last,char *__result)

{
  bool bVar1;
  char *pcVar2;
  
  __x86_get_pc_thunk_ax();
  bVar1 = is_constant_evaluated();
  if (bVar1 == false) {
    pcVar2 = __copy_move_b_char_(__first,__last,__result);
  }
  else {
    pcVar2 = __copy_move_b_charconst__char__(__first,__last,__result);
  }
  return pcVar2;
}


/* Original name: __copy_move_a2<false, char const*, char*> */

char * __copy_move_a2_false_charconst__char__(char *__first,char *__last,char *__result)

{
  bool bVar1;
  char *pcVar2;
  
  __x86_get_pc_thunk_ax();
  bVar1 = is_constant_evaluated();
  if (bVar1 == false) {
    pcVar2 = __copy_m_char_(__first,__last,__result);
  }
  else {
    pcVar2 = __copy_m_charconst__char__(__first,__last,__result);
  }
  return pcVar2;
}


void __fill_a1_char_(char *__first,char *__last,char *__c)

{
  char __tmp;
  size_t __len;
  
  __x86_get_pc_thunk_ax();
  if (__last + -(int)__first != (char *)0x0) {
    memset(__first,(uint)(byte)*__c,(size_t)(__last + -(int)__first));
  }
  return;
}


char * addressof_char_(char *__r)

{
  char *pcVar1;
  
  __x86_get_pc_thunk_ax();
  pcVar1 = __addressof_char_(__r);
  return pcVar1;
}


pointer pointer_to(__make_not_void *__r)

{
  char *pcVar1;
  
  __x86_get_pc_thunk_ax();
  pcVar1 = addressof_charconst_(__r);
  return pcVar1;
}


const_pointer __thiscall _M_local_data(basic_string_char_std__char_traits_char__Alloc_char__ *this)

{
  pointer pcVar1;
  
  __x86_get_pc_thunk_ax();
  pcVar1 = pointer_to((__make_not_void *)this->field_2);
  return pcVar1;
}


void deallocate(Alloc_char_ *__a,pointer __p,size_type __n)

{
  __x86_get_pc_thunk_ax();
  deallocate(__a,__p,__n);
  return;
}


allocator_type * __thiscall
_M_get_allocator(basic_string_char_std__char_traits_char__Alloc_char__ *this)

{
  __x86_get_pc_thunk_ax();
  return (allocator_type *)this;
}


basic_string_char_std__char_traits_char__Alloc_char__ * __thiscall
_M_replace_aux(basic_string_char_std__char_traits_char__Alloc_char__ *this,size_type __pos1,
              size_type __n1,size_type __n2,char __c)

{
  int iVar1;
  size_type __n;
  uint __n_00;
  size_type sVar2;
  pointer pvVar3;
  size_type __old_size;
  size_type __new_size;
  pointer __p;
  size_type __how_much;
  
  iVar1 = __x86_get_pc_thunk_ax();
  _M_check_length(this,__n1,__n2,(char *)(iVar1 + 0xb0d));
  __n = size(this);
  __n_00 = (__n2 + __n) - __n1;
  sVar2 = capacity(this);
  if (sVar2 < __n_00) {
    _M_mutate(this,__pos1,__n1,(char *)0x0,__n2);
  }
  else {
    pvVar3 = _M_data(this);
    __n = (__n - __pos1) - __n1;
    if ((__n != 0) && (__n1 != __n2)) {
      _S_move(pvVar3 + __pos1 + __n2,pvVar3 + __pos1 + __n1,__n);
    }
  }
  if (__n2 != 0) {
    pvVar3 = _M_data(this);
    _S_assign(pvVar3 + __pos1,__n2,__c);
  }
  _M_set_length(this,__n_00);
  return this;
}


/* Original name: __copy_move_b<char const*, char*> */

char * __copy_move_b_charconst__char__(char *__first,char *__last,char *__result)

{
  difference_type __n;
  
  __x86_get_pc_thunk_ax();
  __n = (difference_type)(__last + -(int)__first);
  while (0 < __n) {
    __last = __last + -1;
    __result = __result + -1;
    *__result = *__last;
    __n = __n + -1;
  }
  return __result;
}


char * __copy_move_b_char_(char *__first,char *__last,char *__result)

{
  ptrdiff_t _Num;
  
  __x86_get_pc_thunk_ax();
  __last = __last + -(int)__first;
  if (__last != (char *)0x0) {
    memmove(__result + -(int)__last,__first,(size_t)__last);
  }
  return __result + -(int)__last;
}


/* Original name: __copy_m<char const*, char*> */

char * __copy_m_charconst__char__(char *__first,char *__last,char *__result)

{
  _Distance __n;
  
  __x86_get_pc_thunk_ax();
  __n = (_Distance)(__last + -(int)__first);
  while (0 < __n) {
    *__result = *__first;
    __first = __first + 1;
    __result = __result + 1;
    __n = __n + -1;
  }
  return __result;
}


char * __copy_m_char_(char *__first,char *__last,char *__result)

{
  ptrdiff_t _Num;
  
  __x86_get_pc_thunk_ax();
  __last = __last + -(int)__first;
  if (__last != (char *)0x0) {
    memmove(__result,__first,(size_t)__last);
  }
  return __result + (int)__last;
}


char * __addressof_char_(char *__r)

{
  __x86_get_pc_thunk_ax();
  return __r;
}


/* Original name: addressof<char const> */

char * addressof_charconst_(char *__r)

{
  char *pcVar1;
  
  __x86_get_pc_thunk_ax();
  pcVar1 = __addressof_charconst_(__r);
  return pcVar1;
}


void __thiscall deallocate(Alloc_char_ *this,pointer p,size_type cnt)

{
  __x86_get_pc_thunk_ax();
  return;
}


/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __thiscall
_M_check_length(basic_string_char_std__char_traits_char__Alloc_char__ *this,size_type __n1,
               size_type __n2,char *__s)

{
  size_type sVar1;
  size_type sVar2;
  
  sVar1 = max_size(this);
  sVar2 = size(this);
  if ((__n1 - sVar2) + sVar1 < __n2) {
    __throw_length_error(__s);
  }
  return;
}


size_type __thiscall capacity(basic_string_char_std__char_traits_char__Alloc_char__ *this)

{
  bool bVar1;
  size_type sVar2;
  
  __x86_get_pc_thunk_ax();
  bVar1 = _M_is_local(this);
  if (bVar1 == false) {
    sVar2 = *(size_type *)this->field_2;
  }
  else {
    sVar2 = 0xf;
  }
  return sVar2;
}


void _S_move(char *__d,char *__s,size_type __n)

{
  __x86_get_pc_thunk_ax();
  if (__n == 1) {
    assign(__d,__s);
  }
  else {
    move(__d,__s,__n);
  }
  return;
}


void __thiscall
_M_mutate(basic_string_char_std__char_traits_char__Alloc_char__ *this,size_type __pos,
         size_type __len1,char *__s,size_type __len2)

{
  int iVar1;
  size_type __n;
  size_type __old_capacity;
  pointer __d;
  pointer __s_00;
  int in_GS_OFFSET;
  size_type __new_capacity;
  size_type __how_much;
  pointer __r;
  
  __x86_get_pc_thunk_ax();
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  __n = length(this);
  __n = (__n - __pos) - __len1;
  __old_capacity = length(this);
  __new_capacity = (__old_capacity + __len2) - __len1;
  __old_capacity = capacity(this);
  __d = _M_create(this,&__new_capacity,__old_capacity);
  if (__pos != 0) {
    __s_00 = _M_data(this);
    _S_copy(__d,__s_00,__pos);
  }
  if ((__s != (char *)0x0) && (__len2 != 0)) {
    _S_copy(__d + __pos,__s,__len2);
  }
  if (__n != 0) {
    __s_00 = _M_data(this);
    _S_copy(__d + __pos + __len2,__s_00 + __len1 + __pos,__n);
  }
  _M_dispose(this);
  _M_data(this,__d);
  _M_capacity(this,__new_capacity);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}


void _S_assign(char *__d,size_type __n,char __c)

{
  char_type local_10 [12];
  
  __x86_get_pc_thunk_ax();
  local_10[0] = __c;
  if (__n == 1) {
    assign(__d,local_10);
  }
  else {
    assign(__d,__n,__c);
  }
  return;
}


/* Original name: __addressof<char const> */

char * __addressof_charconst_(char *__r)

{
  __x86_get_pc_thunk_ax();
  return __r;
}


size_type __thiscall max_size(basic_string_char_std__char_traits_char__Alloc_char__ *this)

{
  allocator_type *__a;
  size_type sVar1;
  
  __x86_get_pc_thunk_ax();
  __a = _M_get_allocator(this);
  sVar1 = max_size((Alloc_char_ *)__a);
  return sVar1 - 1 >> 1;
}


size_type __thiscall length(basic_string_char_std__char_traits_char__Alloc_char__ *this)

{
  __x86_get_pc_thunk_ax();
  return this->_M_string_length;
}


/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

pointer __thiscall
_M_create(basic_string_char_std__char_traits_char__Alloc_char__ *this,size_type *__capacity,
         size_type __old_capacity)

{
  uint uVar1;
  size_type sVar2;
  allocator_type *paVar3;
  pointer pvVar4;
  undefined *puVar5;
  undefined4 uStack16;
  
  puVar5 = &stack0xfffffff4;
  uStack16 = 0x12b44;
  uVar1 = *__capacity;
  sVar2 = max_size(this);
  if (sVar2 < uVar1) {
    puVar5 = &stack0xffffffe4;
    __throw_length_error("basic_string::_M_create");
  }
  if ((__old_capacity < *__capacity) && (*__capacity < __old_capacity * 2)) {
    *__capacity = __old_capacity * 2;
    uVar1 = *__capacity;
    *(basic_string_char_std__char_traits_char__Alloc_char__ **)(puVar5 + -0x10) = this;
    *(undefined4 *)(puVar5 + -0x14) = 0x12ba8;
    sVar2 = max_size(*(basic_string_char_std__char_traits_char__Alloc_char__ **)(puVar5 + -0x10));
    if (sVar2 < uVar1) {
      *(basic_string_char_std__char_traits_char__Alloc_char__ **)(puVar5 + -0x10) = this;
      *(undefined4 *)(puVar5 + -0x14) = 0x12bbf;
      sVar2 = max_size(*(basic_string_char_std__char_traits_char__Alloc_char__ **)(puVar5 + -0x10));
      *__capacity = sVar2;
    }
  }
  sVar2 = *__capacity;
  *(basic_string_char_std__char_traits_char__Alloc_char__ **)(puVar5 + -0x10) = this;
  *(undefined4 *)(puVar5 + -0x14) = 0x12bda;
  paVar3 = _M_get_allocator(*(basic_string_char_std__char_traits_char__Alloc_char__ **)
                             (puVar5 + -0x10));
  *(size_type *)(puVar5 + -0xc) = sVar2 + 1;
  *(allocator_type **)(puVar5 + -0x10) = paVar3;
  *(undefined4 *)(puVar5 + -0x14) = 0x12be7;
  pvVar4 = allocate(*(Alloc_char_ **)(puVar5 + -0x10),*(size_type *)(puVar5 + -0xc));
  return pvVar4;
}


void _S_copy(char *__d,char *__s,size_type __n)

{
  __x86_get_pc_thunk_ax();
  if (__n == 1) {
    assign(__d,__s);
  }
  else {
    copy(__d,__s,__n);
  }
  return;
}


void __thiscall _M_data(basic_string_char_std__char_traits_char__Alloc_char__ *this,pointer __p)

{
  __x86_get_pc_thunk_ax();
  (this->_M_dataplus)._M_p = __p;
  return;
}


void __thiscall
_M_capacity(basic_string_char_std__char_traits_char__Alloc_char__ *this,size_type __capacity)

{
  __x86_get_pc_thunk_ax();
  *(size_type *)this->field_2 = __capacity;
  return;
}


size_type max_size(Alloc_char_ *__a)

{
  size_type sVar1;
  
  __x86_get_pc_thunk_ax();
  sVar1 = _S_max_size_constAlloc_char__(__a,0);
  return sVar1;
}


allocator_type * __thiscall
_M_get_allocator(basic_string_char_std__char_traits_char__Alloc_char__ *this)

{
  __x86_get_pc_thunk_ax();
  return (allocator_type *)this;
}


pointer allocate(Alloc_char_ *__a,size_type __n)

{
  pointer pvVar1;
  
  __x86_get_pc_thunk_ax();
  pvVar1 = allocate(__a,__n);
  return pvVar1;
}


/* Original name: _S_max_size<const Alloc<char>> */

size_type _S_max_size_constAlloc_char__(Alloc_char_ *param_1,...)

{
  __x86_get_pc_thunk_ax();
  return 0xffffffff;
}


/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

pointer __thiscall allocate(Alloc_char_ *this,size_type cnt)

{
  bad_alloc *this_00;
  int iVar1;
  char *ptr;
  
  if ((cnt <= subregion_seed * -0x100 + 0x800000U) &&
     (cnt + inuse + subregion_seed * 0x100 < 0x800001)) {
    iVar1 = (region_seed & 1U) * 0x400000 + subregion_seed * 0x100 + inuse;
    inuse = cnt + inuse;
    return (pointer)(iVar1 + 0x800000);
  }
  this_00 = (bad_alloc *)__cxa_allocate_exception(4);
  bad_alloc(this_00);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,PTR_typeinfo_00015fe8,PTR__bad_alloc_00015fd8);
}


void __thiscall _Parser(Parser *this)

{
  Parser *this_00;
  
  __x86_get_pc_thunk_ax();
  if (this != (Parser *)0xfffffffc) {
    this_00 = this + 1;
    while (this_00 != (Parser *)this->descriptions) {
      this_00 = (Parser *)(this_00[-1].descriptions + 4);
      _basic_string((basic_string_char_std__char_traits_char__Alloc_char__ *)this_00);
    }
  }
  return;
}


undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 local_res0;
  
  return local_res0;
}


void __x86_get_pc_thunk_si(void)

{
  return;
}


void __libc_csu_init(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_EBP;
  int iVar1;
  EVP_PKEY_CTX *in_stack_ffffffe4;
  
  __x86_get_pc_thunk_bp();
  _init(in_stack_ffffffe4);
  iVar1 = 0;
  do {
    (**(code **)(unaff_EBP + 0x3026 + iVar1 * 4))(param_1,param_2,param_3);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 2);
  return;
}


void __libc_csu_fini(void)

{
  return;
}


void __x86_get_pc_thunk_bp(void)

{
  return;
}


/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  return;
}


/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_finalize@@GLIBC_2.1.3 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt14basic_ifstreamIcSt11char_traitsIcEE5closeEv@@GLIBCXX_3.4 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __thiscall _basic_ifstream(basic_ifstream_char_std__char_traits_char__ *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev@@GLIBCXX_3.4 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_begin_catch@@CXXABI_1.3 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

basic_ostream * endl_char_std__char_traits_char__(basic_ostream *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@@GLIBCXX_3.4 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_allocate_exception@@CXXABI_1.3 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* memcpy@@GLIBC_2.0 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void __throw_length_error(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt20__throw_length_errorPKc@@GLIBCXX_3.4 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* munmap@@GLIBC_2.0 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __thiscall _bad_alloc(bad_alloc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt9bad_allocD1Ev@@GLIBCXX_3.4 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_atexit@@GLIBC_2.1.3 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __libc_start_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __libc_start_main@@GLIBC_2.0 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

basic_ostream * operator___std__char_traits_char__(basic_ostream *param_1,char *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@@GLIBCXX_3.4 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __thiscall operator__(basic_ostream_char_std__char_traits_char__ *this,FuncDef0 *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSolsEPFRSoS_E@@GLIBCXX_3.4 */
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

void get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSi3getEv@@GLIBCXX_3.4 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

basic_ostream *
__ostream_insert_char_std__char_traits_char__(basic_ostream *param_1,char *param_2,int param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* 
                    _ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_i@@GLIBCXX_3.4.9
                        */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __thiscall Init(Init *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt8ios_base4InitC1Ev@@GLIBCXX_3.4 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void read(char *param_1,int param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSi4readEPci@@GLIBCXX_3.4 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* atoi@@GLIBC_2.0 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* prctl@@GLIBC_2.0 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_end_catch@@CXXABI_1.3 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* memset@@GLIBC_2.0 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __gxx_personality_v0@@CXXABI_1.3 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void good(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNKSt9basic_iosIcSt11char_traitsIcEE4goodEv@@GLIBCXX_3.4 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_throw@@CXXABI_1.3 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __thiscall operator__(basic_ostream_char_std__char_traits_char__ *this,int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSolsEi@@GLIBCXX_3.4 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void _Unwind_Resume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _Unwind_Resume@@GCC_3.0 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* memmove@@GLIBC_2.0 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void basic_ifstream(char *param_1,_Ios_Openmode param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* 
                    _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode@@GLIBCXX_3.4
                        */
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

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* mmap@@GLIBC_2.0 */
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

int mprotect(void *__addr,size_t __len,int __prot)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* mprotect@@GLIBC_2.0 */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __thiscall _Init(Init *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt8ios_base4InitD1Ev@@GLIBCXX_3.4 */
  halt_baddata();
}

