#include <stdio.h>

/* Lesson 19: goto - Example of a Simple Exit Label */
int main(void) {
    int value;
    for (value = 1; value <= 5; ++value) {
        if (value == 4) {
            goto finished;
        }
    }

finished:
    printf("Loop stopped at %d; goto should generally be avoided.\n", value);
    return 0;
}
