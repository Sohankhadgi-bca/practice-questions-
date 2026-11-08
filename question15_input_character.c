#include <stdio.h>
int main(void) { char ch; printf("Enter a character: "); if (scanf(" %c", &ch) != 1) return 1; printf("You entered '%c'\n", ch); return 0; }
