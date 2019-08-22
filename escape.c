#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

void escape(char s[], char t[]);

int main() {
  char s[MAXLINE] = "Hello\t\t World\n!";
  char t[MAXLINE];
  escape(s, t);
  printf("Original: %s\nTransformed: %s\n", s, t);
  return 0;
}

void escape(char s[], char t[]) {
  int i, j;
  for (i = j = 0; s[i] != '\0'; i++)  {
    switch (s[i]) {
      case '\n':
        t[j++] = '\\';
        t[j++] = 'n';
        break;
      case '\t':
        t[j++] = '\\';
        t[j++] = 't';
        break;
      default:
        t[j++] = s[i];
    }
  }
  t[j] = '\0';
}
