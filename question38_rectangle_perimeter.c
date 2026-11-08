#include <stdio.h>
int main(void) { double length, width; printf("Enter length and width: "); if (scanf("%lf%lf", &length, &width) != 2 || length < 0 || width < 0) return 1; printf("Perimeter = %.2f\n", 2 * (length + width)); return 0; }
