#include<stdio.h>

int main() {
  int angle1, angle2, angle3, total_angle;
  puts("Enter 3 angles of the triangle: ");
  scanf("%d %d %d", &angle1, &angle2, &angle3);
  total_angle = angle1 + angle2 + angle3;
  if (total_angle == 180) {
    puts("You entered a valid triangle");
  } else {
    puts("You entered a invalid triangle");
  }
  return 0;
}