#include<stdio.h>

int main() {
  float radius;

  puts("Enter Radius: ");
  scanf("%f", &radius);

  printf("Area of circle is %f\n", 3.141592 * radius * radius);
  printf("Circumference of cicle is %f\n", 2 * 3.141592 * radius);
  return 0;
}