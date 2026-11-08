#include <stdio.h>
int main(void) { double a, b; printf("Enter dividend and divisor: "); if (scanf("%lf%lf", &a, &b) != 2) return 1; if (b == 0.0) { fprintf(stderr, "Cannot divide by zero.\n"); return 1; } printf("Quotient = %.2f\n", a / b); return 0; }
