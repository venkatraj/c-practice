#include<stdio.h>

int main() {
  float length;
  float breadth;

  puts("Enter Length and Breadth: ");
  scanf("%f %f", &length, &breadth);

  printf("Area of rectangle is %f\n", length * breadth);
  printf("Perimeter of rectangle is %f\n", 2 * (length + breadth));
  return 0;
}