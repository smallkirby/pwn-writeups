#include <stdio.h>
#include <stdlib.h>
//#define DEBUG
#ifdef DEBUG
#define dbg(...) fprintf(stderr, __VA_ARGS__)
#else
#define dbg(...)
#endif
int f(int x) {
    return x + 1;
}
typedef int (*g)(int);
int main(void) {
    printf("%d\n", ((g)((unsigned long long)f + 4))(1));
    return 0;
}
