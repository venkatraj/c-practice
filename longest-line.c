#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int getline(char line[], int limit);
void copy(char to[], char from[]);

int main() {
  int length; // current line length
  int max;  // current maximum length
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while((length = getline(line, MAXLINE)) > 0) {
    if (length > max) {
      max = length;
      copy(longest, line);
    }
    if (max > 0) {
      printf("%s", longest);
    }
  }
  return 0;
}

int getline(char line[], int limit) {
  int c, i;
  for(i = 0; i < limit-1 && (c=getchar()) != EOF && c != '\n'; i++) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    i++;
  }
  line[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i = 0;
  while ((to[i] = from[i]) != '\0') {
    i++;
  }
}