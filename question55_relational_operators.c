#include <stdio.h>
int main(void) { double a, b; printf("Enter two numbers: "); if (scanf("%lf%lf", &a, &b) != 2) return 1; printf("a == b: %d\na != b: %d\na > b: %d\na < b: %d\na >= b: %d\na <= b: %d\n", a == b, a != b, a > b, a < b, a >= b, a <= b); return 0; }
