#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int max;  // current maximum length
char line[MAXLINE];
char longest[MAXLINE];

int getline(void);
void copy(void);


int main() {
  int length; // current line length
  extern int max;
  extern char longest[];

  max = 0;
  while((length = getline()) > 0) {
    if (length > max) {
      max = length;
      copy();
    }
    if (max > 0) {
      printf("%s", longest);
    }
  }
  return 0;
}

int getline(void) {
  int c, i;
  extern char line[];

  for(i = 0; i < MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; i++) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    i++;
  }
  line[i] = '\0';
  return i;
}

void copy(void) {
  int i = 0;
  extern char longest[];
  extern char line[];

  while ((longest[i] = line[i]) != '\0') {
    i++;
  }
}