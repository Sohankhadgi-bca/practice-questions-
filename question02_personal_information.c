#include <stdio.h>
int main(void) {
    char name[100], address[200]; int age;
    printf("Name: "); if (!fgets(name, sizeof name, stdin)) return 1;
    printf("Age: "); if (scanf("%d", &age) != 1) return 1;
    getchar(); printf("Address: "); if (!fgets(address, sizeof address, stdin)) return 1;
    printf("Name: %sAge: %d\nAddress: %s", name, age, address); return 0;
}
