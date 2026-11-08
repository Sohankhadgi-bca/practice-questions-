#include <stdio.h>
int main(void) { int age; printf("Enter your age: "); if (scanf("%d", &age) != 1) return 1; if (age >= 18 && age <= 60) puts("Age is between 18 and 60 (inclusive)."); else puts("Age is outside the range."); return 0; }
