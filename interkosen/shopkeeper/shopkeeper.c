#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define LEN_NAME 0x20

struct _item {
  void (*event)(void);
  int price;
  char name[LEN_NAME];
  struct _item *next;
};
typedef struct _item item_t;

item_t *item = NULL;

void dputs(char *msg)
{
  char *ptr;
  
  for(ptr = msg; *ptr != 0; ++ptr) {
    putchar(*ptr);
    usleep(50000);
  }
  
  putchar('\n');
}

void readline(char *buf)
{
  char *ptr;
  
  for(ptr = buf; ; ++ptr) {
    if (read(0, ptr, 1) == 0) break;
    if (*ptr == '\n') {
      *ptr = 0x00;
      break;
    }
  }
}

item_t* purchase(char *name)
{
  item_t *p;
  for(p = item; p != 0; p = p->next) {
    if (strcmp(p->name, name) == 0) {
      return p;
    }
  }
  return NULL;
}

void item_Biscle(void)
{
  dputs("* You consume the Biscle...");
  dputs("* Your HP was maxed out.");
}

void item_CinnamonBunny(void)
{
  dputs("* You consume the Cinnamon Bunny...");
  dputs("* Your HP was maxed out.");
}

void item_ToughGlove(void)
{
  dputs("* You equipped the Tough Glove...");
  dputs("* But nothing special happened.");
}

void item_ManlyBandanna(void)
{
  dputs("* You equipped the Manly Bandanna...");
  dputs("* But nothing special happened.");
}

void item_YourGoal(void)
{
  dputs("* You consume the Hopes.");
  dputs("* You got the shell!");
  system("/bin/sh");
}

void add_item(char *name, int price, void *f)
{
  item_t *next = item;
  
  /* Insert an item */
  item = (item_t*)malloc(sizeof(item_t));
  item->event = f;
  item->price = price;
  strncpy(item->name, name, LEN_NAME);
  item->next = next;
}

void setup(void)
{
  setbuf(stdin, NULL);
  setbuf(stdout, NULL);
  setbuf(stderr, NULL);

  /* Set up a shop */
  add_item("Hopes", 9999, item_YourGoal);
  add_item("Tough Glove", 50, item_ToughGlove);
  add_item("Manly Bandanna", 50, item_ManlyBandanna);
  add_item("Biscle", 15, item_Biscle);
  add_item("Cinnamon Bun", 25, item_CinnamonBunny);
}

void welcome(void)
{
  dputs("* Hello, traveller.");
  dputs("* What would you like to buy?");
}

void shop(item_t *inventory)
{
  char buf[LEN_NAME];
  item_t *p, *t;
  int money = 100;

  /* Show and ask */
  for(p = item; p != 0; p = p->next) {
    printf(" $%d - %s\n", p->price, p->name);
  }
  printf("> ");
  readline(buf);
    
  /* Purchase */
  t = purchase(buf);
  if (t == NULL) {
    
    dputs("* Just looking?");
    
  } else if (money >= t->price) {
    
    money -= t->price;
    memcpy(inventory, t, sizeof(item_t));
    dputs("* Thanks for your purchase.");
    
  } else {
    
    dputs("* That's not enough money.");
  
  }
}

void use(item_t *inventory)
{
  char buf[0x10];
  
  /* Use the item */
  if (*inventory->name != 0) {
    
    dputs("* Wanna use it now?");
    printf("[Y/N] > ");
    readline(buf);
    
    if (*buf == 'Y') {
      (*inventory->event)();
    }
    
  }
}

int main(void)
{
  item_t inventory = {NULL};
  
  setup();
  welcome();
  
  shop(&inventory);
  use(&inventory);
  
  dputs("* Have a nice day.");
  return 0;
}
