#include <stdio.h>
int main(void) { int a, b; printf("Enter two integers: "); if (scanf("%d%d", &a, &b) != 2) return 1; printf("%d and %d are %s.\n", a, b, a == b ? "equal" : "not equal"); return 0; }
