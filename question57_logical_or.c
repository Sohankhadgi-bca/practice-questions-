#include <stdio.h>
int main(void) { char ch; printf("Enter a vowel: "); if (scanf(" %c", &ch) != 1) return 1; if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') puts("The character is a vowel."); else puts("The character is not a vowel."); return 0; }
