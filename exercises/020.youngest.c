#include<stdio.h>

int main() {
  int p1_age, p2_age, p3_age;
  puts("Enter ages of 3 persons: ");
  scanf("%d %d %d", &p1_age, &p2_age, &p3_age);

  if (p1_age <= p2_age && p1_age <= p3_age) {
    puts("Person 1 is the youngest person");
  } else if (p2_age <= p1_age && p2_age <= p3_age) {
    puts("Person 2 is the youngest person");
  } else {
    puts("Person 3 is the youngest person");
  }
  return 0;
}