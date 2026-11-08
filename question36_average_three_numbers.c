#include <stdio.h>
int main(void) { double a, b, c; printf("Enter three numbers: "); if (scanf("%lf%lf%lf", &a, &b, &c) != 3) return 1; printf("Average = %.2f\n", (a + b + c) / 3.0); return 0; }
