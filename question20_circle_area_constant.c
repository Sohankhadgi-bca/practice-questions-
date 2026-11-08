#include <stdio.h>
int main(void) { const double PI = 3.141592653589793; double radius; printf("Enter circle radius: "); if (scanf("%lf", &radius) != 1 || radius < 0) { fprintf(stderr, "Radius must be non-negative.\n"); return 1; } printf("Area = %.2f\n", PI * radius * radius); return 0; }
