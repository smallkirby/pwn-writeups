#include <stdio.h>

int main(void) {
  char name[0x100];
  puts("What's your team name?");
  gets(name);
  printf("Hi, %s. Welcome to zer0pts CTF 2020!\n", name);
  return 0;
}
