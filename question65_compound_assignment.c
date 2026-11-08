#include <stdio.h>
int main(void) { int n = 10; printf("Starting value: %d\n", n); n += 5; printf("After += 5: %d\n", n); n -= 3; printf("After -= 3: %d\n", n); n *= 2; printf("After *= 2: %d\n", n); n /= 4; printf("After /= 4: %d\n", n); n %= 3; printf("After %%= 3: %d\n", n); return 0; }
