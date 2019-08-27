#include<stdio.h>

int main() {
  float c;
  float f;

  puts("Enter temperature in fahrenheit: ");
  scanf("%f", &f);

  f = (f - 32) * 5 / 9;
  printf("Temperature in Celcius = %f", f);
  return 0;
}