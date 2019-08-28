#include<stdio.h>

int main() {
  long num;
  puts("Enter a number: ");
  scanf("%ld", &num);

  if (num % 2) {
    puts("You entered odd number");
  } else {
    puts("You entered even number");
  }
  return 0;
}