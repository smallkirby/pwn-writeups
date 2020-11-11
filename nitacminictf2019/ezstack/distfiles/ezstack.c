#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

#define BANNER_SIZE 0x500
#define STACK_SIZE  0x100

typedef struct {
  long sp;
  char stack[STACK_SIZE];
} STACK;

char banner[BANNER_SIZE];

void setup(STACK *stack)
{
  setbuf(stdin, NULL);
  setbuf(stdout, NULL);
  setbuf(stderr, NULL);
  alarm(60);

  stack->sp = 0;
  memset(stack->stack, 0, STACK_SIZE);
}

long readline(char *buf, int size)//VULN!! 改行しなければNULL終端無しで行ける
{
  long readSize;
  readSize = read(0, buf, size);
  if (readSize == 0) exit(1);
  if (buf[readSize - 1] == '\n') {
    readSize--;
    buf[readSize] = 0;
  }
  return readSize;
}

int readint(void)
{
  char s[32];
  readline(s, 31);
  return atol(s);
}

void push(STACK *stack)
{
  printf("data: ");
  stack->sp += readline(&stack->stack[stack->sp], STACK_SIZE - stack->sp);
}

void pop(STACK *stack)
{
  int size;
  
  printf("size: ");
  size = readint();

  if (stack->sp < size) {
    puts("[-] Size too large");
    return;
  }

  stack->sp -= size;
  printf("[+] %s\n", &stack->stack[stack->sp]);
  stack->stack[stack->sp] = 0;
}

int menu(void)
{
  puts("1. PUSH");
  puts("2. POP");
  printf("> ");
  return readint();
}

void ezstack(void)
{
  STACK stack;
  setup(&stack);

  int lp = 1;
  while(lp) {
    switch(menu()) {
    case 1: push(&stack); break;
    case 2: pop(&stack); break;
    default: lp = 0; break;
    }
  }
}

int main(void)
{
  FILE *fp = fopen("banner.txt", "r");
  if (fp) {
    memset(banner, 0, BANNER_SIZE);
    fread(banner, 1, BANNER_SIZE, fp);
    puts(banner);
    fclose(fp);
  }
  
  ezstack();
  return 0;
}
