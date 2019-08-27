#include<stdio.h>

int main() {
  double d_km;
  double meters;
  double cms;
  double inches;
  double feets;  
  puts("Enter distance in KM: ");
  scanf("%lf", &d_km);
  meters = d_km * 1000;
  cms = meters * 100;
  inches = cms / 2.54;
  feets = inches / 12;
  printf("Distance in Meters = %g\n", meters);
  printf("Distance in Centimeters = %g\n", cms);
  printf("Distance in Inches = %g\n", inches);
  printf("Distance in Feets = %g\n", feets);

  return 0;
}