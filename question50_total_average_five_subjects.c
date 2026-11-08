#include <stdio.h>
int main(void) { double marks[5], total = 0; printf("Enter marks for five subjects: "); for (int i = 0; i < 5; ++i) { if (scanf("%lf", &marks[i]) != 1) return 1; total += marks[i]; } printf("Total = %.2f\nAverage = %.2f\n", total, total / 5.0); return 0; }
