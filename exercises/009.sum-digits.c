#include <stdio.h>

int main() {
  int num;
  int d1, d2, d3, d4, d5;
  int sum;
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
  sum = d1 + d2 + d3 + d4 + d5;
  printf("Sum of digits = %d", sum);
  return 0;
}