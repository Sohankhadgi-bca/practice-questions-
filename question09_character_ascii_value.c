#include <stdio.h>
int main(void) { char ch; printf("Enter a character: "); if (scanf(" %c", &ch) != 1) return 1; printf("ASCII value of '%c' is %u\n", ch, (unsigned int)(unsigned char)ch); return 0; }
