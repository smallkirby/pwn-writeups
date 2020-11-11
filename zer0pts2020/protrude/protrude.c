#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

long n;

long read_long() {
  char buf[32];
  int readByte;
  memset(buf, 0, sizeof(buf));
  readByte = read(0, buf, sizeof(buf));
  if (readByte == 0) {
    puts("[ERROR] read failed");
    exit(1);
  }
  return atol(buf);
}

void setup() {
  setbuf(stdin, NULL);
  setbuf(stdout, NULL);
  setbuf(stderr, NULL);
}

void calc_sum(void) {
  long i;
  long *array;
  long result;
  
  array = (long*)alloca(n * 4);

  for(i = 0; 0 <= i && i < n; i++) {
    printf("num[%ld] = ", i + 1);
    array[i] = read_long();
  }

  for(result = 0, i = 0; i < n; i++) {
    result += array[i];
  }

  printf("SUM = %ld\n", result);
}

int main() {
  setup();
    
  printf("n = ");
  n = read_long();
  if (n <= 0x00 || n > 22) {
    puts("Invalid input");
  } else {
    //1 - 21
    calc_sum();
  }
  return 0;
}
