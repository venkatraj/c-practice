#include<stdio.h>

int main() {
  char ch;
  puts("Enter a character: ");
  ch = getchar();
  if (ch >= 65 && ch <= 90) {
    puts("It is a capital letter");
  } else if (ch >= 97 && ch <= 122) {
    puts("It is a small letter");
  } else if (ch >= 48 && ch <= 57) {
    puts("It is a number");
  } else {
    puts("It is a symbol");
  }
  return 0;
}