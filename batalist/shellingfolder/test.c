#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int d;
  //scanf("%d",&d);
  int num = 7;

  void* tmp[100];
  for(int ix=0;ix!=num;++ix){
    tmp[ix] = malloc(500);
  }
  void *p = malloc(500);
  void *non = malloc(500);
  for(int ix=0;ix!=num;++ix){
    printf("%d: %p\n",ix,tmp[ix]);
    free(tmp[ix]);
  }
  for(int ix=0;ix!=num;++ix){
    printf("%d: %p\n",ix,*(long*)tmp[ix]);
  }
  printf("p: %p\n",p);
  free(p);
  void *q = *(long*)p;
  printf("q: %p\nprintf: %p\n",q,printf);
  return 0;
}
