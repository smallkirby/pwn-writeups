#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  void *p = malloc(0x80);
  printf("%p\n",p);
  return 0;
}
