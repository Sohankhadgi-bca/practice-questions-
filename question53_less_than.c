#include <stdio.h>
int main(void) { double a, b; printf("Enter two numbers: "); if (scanf("%lf%lf", &a, &b) != 2) return 1; printf("%s\n", a < b ? "The first number is less." : "The first number is not less."); return 0; }
