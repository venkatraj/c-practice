#include <stdio.h>

int main() {
  int a;
  int b;
  int temp;
  puts("Enter two integer values: ");
  scanf("%d %d", &a, &b);
  puts("Before swapping...");
  printf("a = %d and b = %d\n", a, b);
  temp = a;
  a = b;
  b = temp;
  puts("After swapping...");
  printf("a = %d and b = %d\n", a, b);
  puts("Swapping without 3rd variable");
  b = b + a;
  a = b - a;
  b = b - a;
  printf("a = %d and b = %d\n", a, b);
  return 0;
}