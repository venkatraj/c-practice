#include<stdio.h>

int main() {
  float c;
  float f;

  puts("Enter temperature in celcius: ");
  scanf("%f", &c);

  f = (c  * 9 / 5) + 32;
  printf("Temperature in Fahrenheit = %f", f);
  return 0;
}