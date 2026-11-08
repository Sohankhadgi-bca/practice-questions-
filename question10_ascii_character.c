#include <stdio.h>
int main(void) { int value; printf("Enter an ASCII value (0-127): "); if (scanf("%d", &value) != 1 || value < 0 || value > 127) { fprintf(stderr, "Enter a value from 0 to 127.\n"); return 1; } printf("Character: '%c'\n", (char)value); return 0; }
