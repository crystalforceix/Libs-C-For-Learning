#include "stdio.h"
#include "math.h"
#include "../lib/conio/conio.h"
#include "../lib/conio/conio.c"

void main() {
  float lk2, bl, n, lk1;
  printf("Nhap lan luot so lieu vao day: (bl, n, lk1) --> ");
  scanf("%f%f%f", &bl, &n, &lk1);
  lk2 = bl * n / 26;
  lk2 = lk2 - lk1;
  printf("lk = %f", lk2);
}
