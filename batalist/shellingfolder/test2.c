#include<stdio.h>
#include<stdlib.h>

int main(void){
  void *p[20];

  for(int ix=0;ix!=7;++ix){
    p[ix] = malloc(0x20);
    printf("%d: %p\n",ix,p[ix]);
  }

  void *q = malloc(0x20);

  for(int ix=0;ix!=7;++ix){
    free(p[ix]);
  }

  void *r = malloc(0x80);

  free(q);
}
