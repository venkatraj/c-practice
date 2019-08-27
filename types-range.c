#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("Signed Ranges: \n");
  printf("Max. Char Value = %d\n", UCHAR_MAX);
  printf("Max. Short Int Value = %d\n", USHRT_MAX);
  printf("Max. Int Value = %u\n", UINT_MAX);
  printf("Max. Long Value = %u\n", ULONG_MAX);

  printf("Max. Float Value = %f\n", FLT_MAX);
  printf("Max. Double Value = %g\n", DBL_MAX);
  printf("Max. Long Double Value = %g\n", LDBL_MAX);
  printf("Min. Float Value = %f\n", FLT_MIN);
  printf("Min. Double Value = %g\n", DBL_MIN);
  printf("Min. Long Double Value = %g\n", LDBL_MIN);

  printf("Unsigned Ranges: \n");
  printf("Max. Char Value = %d\n", CHAR_MAX);
  printf("Min. Char Value = %d\n", CHAR_MIN);

  printf("Max. Short Int Value = %d\n", SHRT_MAX);
  printf("Min. Short Int Value = %d\n", SHRT_MIN);

  printf("Max. Int Value = %d\n", INT_MAX);
  printf("Min. Int Value = %d\n", INT_MIN);

  printf("Max. Long Value = %u\n", LONG_MAX);
  printf("Min. Long Value = %u\n", LONG_MIN);

  return 0;
}