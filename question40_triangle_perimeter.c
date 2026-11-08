#include <stdio.h>
int main(void) { double a, b, c; printf("Enter the three side lengths: "); if (scanf("%lf%lf%lf", &a, &b, &c) != 3 || a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) { fprintf(stderr, "Enter valid triangle side lengths.\n"); return 1; } printf("Perimeter = %.2f\n", a + b + c); return 0; }
