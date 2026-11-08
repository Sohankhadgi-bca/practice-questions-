#include <stdio.h>
int main(void) { double f; printf("Enter temperature in Fahrenheit: "); if (scanf("%lf", &f) != 1) return 1; printf("Celsius = %.2f\n", (f - 32.0) * 5.0 / 9.0); return 0; }
