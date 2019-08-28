#include<stdio.h>

int main() {
  double length, breadth;
  double area, perimeter;
  puts("Enter length and breadth of rectangle: ");
  scanf("%lf %lf", &length, &breadth);
  area = length * breadth;
  perimeter = 2 * (length + breadth);
  if (area > perimeter) {
    puts("Area is greater than perimeter");
  } else {
    puts("Perimeter is greater than area");
  }
  return 0;
}