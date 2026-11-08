#include <stdio.h>
int main(void) { int result = 2 + 3 * 4; int grouped = (2 + 3) * 4; printf("2 + 3 * 4 = %d (multiplication first)\n", result); printf("(2 + 3) * 4 = %d (parentheses first)\n", grouped); return 0; }
