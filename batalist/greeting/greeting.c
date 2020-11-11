// gcc -m32 -Wl,-z,norelro greeting.c -o greeting
#include <stdio.h>
#include <string.h>
#define BUF_SIZE 64

int getnline(char*, int);

__attribute__((constructor, section("tomori")))
void nao(void){
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    system("echo \"Hello, I'm nao\"!");
}

int main(void){
    char buf[BUF_SIZE], input[BUF_SIZE];

    printf("Please tell me your name... ");
    if(getnline(input, sizeof(input))){
        sprintf(buf, "Nice to meet you, %s :)\n", input);
        printf(buf);
    }
    else
        printf("Don't ignore me ;( \n");
}

int getnline(char *buf, int len){
    char *lf;

    fgets(buf, len, stdin);
    if(lf=strchr(buf, '\n'))
        *lf='\0';

    return strlen(buf);
}
