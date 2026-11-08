#include <stdio.h>
int main(void) { const double PI = 3.141592653589793; double r; printf("Enter radius: "); if (scanf("%lf", &r) != 1 || r < 0) return 1; printf("Area = %.2f\nCircumference = %.2f\n", PI * r * r, 2 * PI * r); return 0; }
