#include <stdio.h>
int main(void) { double x; printf("Enter x to evaluate 2*x*x + 3*x - 4: "); if (scanf("%lf", &x) != 1) return 1; printf("Result = %.2f\n", 2 * x * x + 3 * x - 4); return 0; }
