#include <stdio.h>
int main(void) { int n; printf("Enter an integer: "); if (scanf("%d", &n) != 1) return 1; puts(n % 3 == 0 && n % 5 == 0 ? "Divisible by both 3 and 5." : "Not divisible by both 3 and 5."); return 0; }
