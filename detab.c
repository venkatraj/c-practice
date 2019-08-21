#include <stdio.h>

#define TAB "    "

int main() {
  int c;
  while((c = getchar()) != EOF) {
    if (c == '\t') {
      printf("%s", TAB);
    } else {
      printf("%c", c);
    }
  }
  return 0;
}

