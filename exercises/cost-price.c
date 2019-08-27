#include <stdio.h>

int main() {
  int items = 16;
  double tsp; // Total selling price
  double tp; // Total profit earned
  double cp; // cost price
  puts("Enter total selling price: ");
  scanf("%lf", &tsp);
  puts("Enter total profit earned: ");
  scanf("%lf", &tp);
  cp = (tsp - tp) / items;
  printf("Cost price of one item = %g", cp);
  return 0;
}