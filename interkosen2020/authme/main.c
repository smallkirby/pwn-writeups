#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int auth = 1;
char username[0x20];
char password[0x20];

void init(void) {
  FILE *fp;

  /* read secret username */
  if ((fp = fopen("./username", "r")) == NULL) {
    puts("[-] Please report this bug to the admin");
    exit(1);
  }
  fread(username, sizeof(char), 0x20, fp);
  fclose(fp);

  /* read secret password */
  if ((fp = fopen("./password", "r")) == NULL) {
    puts("[-] Please report this bug to the admin");
    exit(1);
  }
  fread(password, sizeof(char), 0x20, fp);
  fclose(fp);
}

int main() {
  char buf[0x20];

  init();

  puts("                _   _     __  __ ______ ");
  puts("     /\\        | | | |   |  \\/  |  ____|");
  puts("    /  \\  _   _| |_| |__ | \\  / | |__   ");
  puts("   / /\\ \\| | | | __| '_ \\| |\\/| |  __|  ");
  puts("  / ____ \\ |_| | |_| | | | |  | | |____ ");
  puts(" /_/    \\_\\__,_|\\__|_| |_|_|  |_|______|\n");

  printf("Username: ");
  if (fgets(buf, 0x40, stdin) == NULL) return 1;
  if (strcmp(buf, username) != 0) auth = 0;

  printf("Password: ");
  if (fgets(buf, 0x40, stdin) == NULL) return 1;
  if (strcmp(buf, password) != 0) auth = 0;

  if (auth == 1) {
    puts("[+] OK!");
    system("/bin/sh");
    exit(0);
  } else {
    puts("[-] NG!");
    exit(1);
  }
}

__attribute__((constructor))
void setup(void) {
  setvbuf(stdin, NULL, _IONBF, 0);
  setvbuf(stdout, NULL, _IONBF, 0);
  alarm(60);
}
