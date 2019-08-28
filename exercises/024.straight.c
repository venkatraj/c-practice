#include<stdio.h>

int main() {
  int x1, y1;
  int x2, y2;
  int x3, y3;

  puts("Enter x1 and y1: ");
  scanf("%d %d", &x1, &y1);

  puts("Enter x2 and y2: ");
  scanf("%d %d", &x2, &y2);

  puts("Enter x3 and y3: ");
  scanf("%d %d", &x3, &y3);

  if ((x1 == x2 && x1 == x3) || (y1 == y2 && y1 == y3)) {
    puts("All 3 points are on a straight line");
  } else {
    puts("All 3 points are NOT on a straight line");
  }
  return 0;
}