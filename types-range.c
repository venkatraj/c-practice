#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("Signed Ranges: \n");
  printf("Max. Char Value = %d\n", UCHAR_MAX);
  printf("Max. Short Int Value = %d\n", USHRT_MAX);
  printf("Max. Int Value = %d\n", UINT_MAX);
  printf("Max. Long Value = %d\n", ULONG_MAX);

  printf("Max. Float Value = %d\n", FLT_MAX);
  printf("Max. Double Value = %d\n", DBL_MAX);
  printf("Max. Long Double Value = %d\n", LDBL_MAX);
  printf("Min. Float Value = %d\n", FLT_MIN);
  printf("Min. Double Value = %d\n", DBL_MIN);
  printf("Min. Long Double Value = %d\n", LDBL_MIN);

  printf("Unsigned Ranges: \n");
  printf("Max. Char Value = %d\n", CHAR_MAX);
  printf("Min. Char Value = %d\n", CHAR_MIN);

  printf("Max. Short Int Value = %d\n", SHRT_MAX);
  printf("Min. Short Int Value = %d\n", SHRT_MIN);

  printf("Max. Int Value = %d\n", INT_MAX);
  printf("Min. Int Value = %d\n", INT_MIN);

  printf("Max. Long Value = %d\n", LONG_MAX);
  printf("Min. Long Value = %d\n", LONG_MIN);

  return 0;
}