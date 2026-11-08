#include <stdio.h>
int main(void) { double hours; printf("Enter time in hours: "); if (scanf("%lf", &hours) != 1 || hours < 0) return 1; printf("Minutes = %.2f\n", hours * 60.0); return 0; }
