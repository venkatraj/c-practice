#include <stdio.h>

int main() {
  int amount;
  int hundreds = 0;
  int fifties = 0;
  int tens = 0;
  puts("Enter amount to withdraw: ");
  scanf("%d", &amount);
  hundreds = amount / 100;
  amount = amount % 100;
  fifties = amount / 50;
  amount %= 50;
  tens = amount / 10;
  printf("Hundreds = %d\n", hundreds);
  printf("Fifties = %d\n", fifties);
  printf("Tens = %d\n", tens);
  return 0;
}