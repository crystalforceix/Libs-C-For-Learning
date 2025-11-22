#include "stdio.h"
#include "math.h"
#include "../lib/conio/conio.h"
#include "../lib/conio/conio.c"

int main() {
  enum {T0, T1, T2};
  enum day {cn, thu2, thu3, thu4, thu5, thu6, thu7} n1;
  enum day n2;
  int i, j = 2000, k = T2;
  clrscr();
  i = thu7;
  n1 = -1000;
  n2 = j;
  printf("\n n1 = %d  n2 = %d i = %d", n1, n2, i);
  printf("\n k = %d T1 = %d", k, T1);
  getch();
}
