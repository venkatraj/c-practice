#include <stdio.h>

int any(char s1[], char s2[]);

int main() {
  char s1[] = "Hello, World!";
  char s2[] = "o";
  char s3[] = "abcd";
  char s4[] = "abcfgi";
  printf("%d\n", any(s1, s2));
  printf("%d\n", any(s1, s3));
  printf("%d\n", any(s1, s4));
  return 0;
}

int any(char s1[], char s2[]) {
  int i, j, k;

  for(i = 0; s2[i] != '\0'; i++){
    for(j = 0; s1[j] != '\0'; j++) {
      if (s1[j] == s2[i]) return j;
    }
  }
  return -1;
}