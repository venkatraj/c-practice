#include<stdio.h>

int main() {
  int num;
  unsigned int a;
  puts("Enter a number: ");
  scanf("%d", &num);
  if (num < 0) {
    num *= -1;
  }
  printf("Absolute value is %d", num);
  return 0;
}