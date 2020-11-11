#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#define NOTE_NUM 8
#define SIZE_NOTE 0x90

char *noteList[NOTE_NUM];

__attribute__((constructor)) void setup(void) {
  int i;
  setbuf(stdin, NULL);
  setbuf(stdout, NULL);
  setbuf(stderr, NULL);
  alarm(60);
  for(i = 0; i < NOTE_NUM; i++) noteList[i] = NULL;
}

void readline(char *buf) {
  char *ptr;
  for(ptr = buf; ; ++ptr) {
    if (read(0, ptr, 1) <= 0) exit(0);
    if (*ptr == '\n') break;
  }
}

int read_int(void) {
  char buf[0x20];
  readline(buf); //overflow!
  return atoi(buf);
}

int menu() {
  puts("1. Create");
  puts("2. Show");
  puts("3. Delete");
  printf("> ");
  return read_int();
}

int find_free_note(void) {
  int i;
  for(i = 0; i < NOTE_NUM; i++) {
    if (noteList[i] == NULL) return i;
  }
  return -1;
}

void new_note(void) {
  int idx = find_free_note();
  if (idx == -1) {
    puts("Notebook is full");
  } else {
    noteList[idx] = (char*)malloc(SIZE_NOTE);
    printf("Contents: ");
    readline(noteList[idx]); //overflow!
    puts("Written!");
  }
}

void show_note(void) {
  int idx;
  printf("Index: ");
  idx = read_int();
  if (idx < 0 || idx >= NOTE_NUM) {
    puts("Invalid index");
  } else if (noteList[idx] == NULL) {
    puts("Note is empty");
  } else {
    printf("Contents: %s", noteList[idx]);
  }
}

void del_note(void) {
  int idx;
  printf("Index: ");
  idx = read_int();
  if (idx < 0 || idx >= NOTE_NUM) {
    puts("Invalid index");
  } else if (noteList[idx] == NULL) {
    puts("Note is empty");
  } else {
    puts("Deleted!");
    free(noteList[idx]);
    noteList[idx] = NULL;
  }
}

int main(void) {
  printf("HERE IS THE GIFT FOR YOU: %p\n", stdin);
  while(1) {
    switch(menu()) {
    case 1: new_note(); break;
    case 2: show_note(); break;
    case 3: del_note(); break;
    default: puts("Bye!"); return 0;
    }
  }
}
