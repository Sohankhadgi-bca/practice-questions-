#include <stdio.h>
int main(void) { double km; printf("Enter distance in kilometers: "); if (scanf("%lf", &km) != 1 || km < 0) return 1; printf("Meters = %.2f\n", km * 1000.0); return 0; }
