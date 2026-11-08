#include <stdio.h>
int main(void) { double a, b; printf("Enter two numbers: "); if (scanf("%lf%lf", &a, &b) != 2) return 1; double maximum = a > b ? a : b; printf("Maximum = %.2f\n", maximum); return 0; }
