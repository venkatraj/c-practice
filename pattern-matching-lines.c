#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

int main() {
  char line[MAXLINE];
  int found = 0;
  while(getline(line, MAXLINE) > 0) {
    if (strindex(line, pattern) != -1) {
      printf("%s\n", line);
      found++;
    }
  }
  return found;
}

int getline(char line[], int max) {
  int c, i;
  i = 0;
  while(--max > 0 && (c = getchar()) != EOF && c != '\n') {
    line[i++] = c;    
  }
  if (c == '\n') {
    line[i++] = c;
  }
  line[i] = '\0';
  return i;
}

int strindex(char line[], char searchfor[]) {
  int i, j, k;

  for (i = 0; line[i] != '\0'; i++) {
    for (j = i, k = 0; searchfor[k] != '\0' && line[j] == searchfor[k]; j++, k++);
    if (k > 0 && searchfor[k] == '\0') return i;
  }
  return -1;
}