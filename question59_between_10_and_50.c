#include <stdio.h>
int main(void) { double n; printf("Enter a number: "); if (scanf("%lf", &n) != 1) return 1; puts(n >= 10 && n <= 50 ? "The number is between 10 and 50 (inclusive)." : "The number is outside the range."); return 0; }
