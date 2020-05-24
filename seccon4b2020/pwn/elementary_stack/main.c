#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define X_NUMBER 8

__attribute__((constructor))
void setup(void) {
  setbuf(stdout, NULL);
  alarm(30);
}

__attribute__((noreturn))
void fatal(const char *msg) {
  printf("[FATAL] %s\n", msg);
  exit(0);
}

long readlong(const char *msg, char *buf, int size) {
  printf("%s", msg);

  if (read(0, buf, size) <= 0)
    fatal("I/O error");
  buf[size - 1] = 0;

  return atol(buf);
}

int main(void) {
  int i;
  long v;
  char *buffer;
  unsigned long x[X_NUMBER];

  if ((buffer = malloc(0x20)) == NULL)
    fatal("Memory error");

  while(1) {
    i = (int)readlong("index: ", buffer, 0x20);
    v = readlong("value: ", buffer, 0x20);

    printf("x[%d] = %ld\n", i, v);
    x[i] = v;
  }
  return 0;
}
