#include <stdio.h>

/* Lesson 18: Nested Loops */
int main(void) {
    for (int row = 1; row <= 4; ++row) {
        for (int column = 1; column <= row; ++column) {
            printf("*");
        }
        putchar('\n');
    }
    return 0;
}
