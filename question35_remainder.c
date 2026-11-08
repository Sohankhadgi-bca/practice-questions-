#include <stdio.h>
int main(void) { int a, b; printf("Enter two integers: "); if (scanf("%d%d", &a, &b) != 2) return 1; if (b == 0) { fprintf(stderr, "Cannot find a remainder with divisor zero.\n"); return 1; } printf("Remainder = %d\n", a % b); return 0; }
