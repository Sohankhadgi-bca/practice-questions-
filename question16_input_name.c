#include <stdio.h>
int main(void) { char name[100]; printf("Enter your name: "); if (!fgets(name, sizeof name, stdin)) return 1; printf("Hello, %s", name); return 0; }
