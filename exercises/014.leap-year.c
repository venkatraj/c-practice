#include<stdio.h>

int main() {
  int year;
  puts("Enter a year: ");
  scanf("%d", &year);

  if (year % 4) {
    puts("It is a common year");
  } else if (year % 100) {
    puts("It is a leap year");
  } else if (year % 400) {
    puts("It is a common year");
  } else {
    puts("It is a leap year");
  }
  return 0;
}