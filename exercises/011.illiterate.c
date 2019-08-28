#include <stdio.h>

int main() {
  long population = 100;
  int men = 52;
  int women = 100 - 52;
  int literacy = 48;
  int literate_men = 35;
  int literate_women = literacy - literate_men;

  int illiterate_men = literate_men * men / population;
  int illiterate_women = literate_women * women / population;

  printf("Illiterate Men = %d, Women = %d", illiterate_men, illiterate_women);



  // 100
  // men 52
  // women 48
  // literacy 48
  // illiteracy = 52

  // literate men 35 (of total population)
  // literate women 48 - 35 = 13
  // illiterate men 35 * 52 / 100
  // illiterate women 13 * 48 / 100

  return 0;
}