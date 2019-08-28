#include<stdio.h>

int main() {
  double cost_price;
  double sold_price;
  puts("Enter cost price of the item: ");
  scanf("%lf", &cost_price);
  puts("Enter selling price of the item: ");
  scanf("%lf", &sold_price);
  if (sold_price > cost_price) {
    printf("Seller made profit of %g rupees\n", sold_price - cost_price);
  } else {
      printf("Seller incurred loss of %g rupees\n", cost_price - sold_price);
  }
  return 0;
}