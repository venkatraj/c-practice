#include<stdio.h>

int main() {
  int year;
  int rdays;
  long tdays;

  puts("Enter the year: ");
  scanf("%d", &year);
  // Formula
  // http://mathforum.org/library/drmath/view/55837.html
  // N = d + 2m + [3(m+1)/5] + y + [y/4] - [y/100] + [y/400] + 2
  year -= 1;
  tdays = 1 + (2 * 13) + (3 * (13+1) / 5) + year + (year / 4) - (year / 100) + (year / 400) + 2;
  rdays = tdays % 7;
  if (rdays == 1) {
    puts("Sunday");
  } else if (rdays == 2) {
    puts("Monday");
  } else if (rdays == 3) {
    puts("Tuesday");
  } else if (rdays == 4) {
    puts("Wednesday");
  } else if (rdays == 5) {
    puts("Thursday");
  } else if (rdays == 6) {
    puts("Friday");
  } else if (rdays == 0) {
    puts("Saturday");
  } else {
    // just in case program error
    puts("Unknown day");
  }
  return 0;
}