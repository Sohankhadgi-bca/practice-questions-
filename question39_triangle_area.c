#include <stdio.h>
int main(void) { double base, height; printf("Enter base and height: "); if (scanf("%lf%lf", &base, &height) != 2 || base < 0 || height < 0) return 1; printf("Area = %.2f\n", 0.5 * base * height); return 0; }
