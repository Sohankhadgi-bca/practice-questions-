#include <stdio.h>
int main(void) { int a, b; printf("Enter two integers: "); if (scanf("%d%d", &a, &b) != 2) return 1; printf("%s\n", a != b ? "The numbers are different." : "The numbers are the same."); return 0; }
