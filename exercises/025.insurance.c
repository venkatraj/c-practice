#include<stdio.h>
#include<stdlib.h>

int main() {
  char health, sex, origin;
  int age;

  puts("Enter health condition (E)xcellent or (P)oor");
  scanf("%c", &health);
  puts("Enter your sex: (M)ale or (F)emale ");
  getchar();
  scanf("%c", &sex);
  puts("Enter whether you live in (C)ity or (V)illage: ");
  getchar();
  scanf("%c", &origin);
  puts("Enter your age: ");
  getchar();
  scanf("%d", &age);

  if (health == 'E' && origin == 'C' && age >= 25 && age <= 35) {
    if (sex == 'M' ) {
      puts("You can be insured");
      puts("Your premium about is Rs.4 per 1000 rupees");
      puts("Your maximum insurance amount is 2 lakhs");
    } else {
      puts("You can be insured");
      puts("Your premium about is Rs. 3 per 1000 rupees");
      puts("Your maximum insurance amount is 1 lakh");
    }
  } else if (health == 'P' && origin == 'V' && sex == 'M' && age >= 25 && age <= 35) {
    puts("You can be insured");
    puts("Your premium about is Rs. 6 per 1000 rupees");
    puts("Your maximum insurance amount is 10,000 rupees");
  } else {
    puts("You can not be insured");
  }

  return 0;
}