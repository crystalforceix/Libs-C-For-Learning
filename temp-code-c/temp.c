/* Import libs */
#include "stdio.h"
#include "math.h"
#include "../lib/conio/conio.h"
#include "../lib/conio/conio.c"

/* Enum */
enum Weather {Sunny, Rain, Darkness, Lightness, Cold};

/* Main func */
int main() {
  printf("Hello world");
};

/* Some stupid func;v */
int Weather_check() {
  enum Weather today;
  today = Rain;
  if (today == Sunny) {
    printf("Today's sunny!");
    }
  else {
    printf("Idk xD");
  };
  return 0;
};
