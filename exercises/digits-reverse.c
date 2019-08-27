#include <stdio.h>

int main() {
  int num;
  int d1, d2, d3, d4, d5;
  int reverse;
  puts("Enter 5 digit number: ");
  scanf("%d", &num);
  d1 = num / 10000;
  num = num % 10000;
  d2 = num / 1000;
  num = num % 1000;
  d3 = num / 100;
  num = num % 100;
  d4 = num / 10;
  d5 = num % 10;
  reverse = (d5 * 10000) + (d4 * 1000) + (d3 * 100) + (d2 * 10) + d1;
  printf("Reversed digits = %d", reverse);
  return 0;
}