#include <stdio.h>
int main(void) { double meters; printf("Enter distance in meters: "); if (scanf("%lf", &meters) != 1 || meters < 0) return 1; printf("Centimeters = %.2f\n", meters * 100.0); return 0; }
