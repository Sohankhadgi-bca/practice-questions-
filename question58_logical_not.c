#include <stdio.h>
int main(void) { int number; printf("Enter an integer: "); if (scanf("%d", &number) != 1) return 1; printf("Logical NOT of (number != 0) is %d\n", !(number != 0)); return 0; }
