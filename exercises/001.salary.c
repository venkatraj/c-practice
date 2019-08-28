#include<stdio.h>

int main() {
  int bs;
  int da = 30;
  int hra = 20;
  int ta = 10;
  int gs;
  puts("Enter basic salary: ");
  scanf("%d", &bs);
  gs = bs + bs * da / 100 + bs * hra / 100 + bs * ta / 100;
  printf("Gross salary = %d", gs);
  return 0;
}