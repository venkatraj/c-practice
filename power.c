#include <stdio.h>

int power(int m, int n);

int main() {
  int result = power(2, 5);
  printf("2 to the power 5 = %d", result);
  return 0;
}

int power(int m, int n) {
  int result = 1;
  while(n > 0) {
    result *= m;
    n--;
  }
  return result;
}