#include <stdio.h>
int main(void) { int left_to_right = 20 / 5 * 2; int right_associative = 20 - 5 - 2; int assignment; assignment = 4; assignment *= 3; printf("20 / 5 * 2 = %d (left-to-right)\n", left_to_right); printf("20 - 5 - 2 = %d (left-to-right)\n", right_associative); printf("assignment after *= 3: %d (assignment is right-associative)\n", assignment); return 0; }
