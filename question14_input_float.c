#include <stdio.h>
int main(void) { float number; printf("Enter a floating-point number: "); if (scanf("%f", &number) != 1) return 1; printf("You entered %.2f\n", number); return 0; }
