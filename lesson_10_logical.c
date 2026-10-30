#include <stdio.h>

/* Lesson 10: Logical Operators and Short-circuit Evaluation */
int main(void) {
    int age = 21;
    int has_id = 1;

    if (age >= 18 && has_id) {
        puts("Access allowed.");
    }
    if (age < 18 || !has_id) {
        puts("Access denied.");
    }
    printf("False result can be written as %d.\n", 0 && puts("Not printed"));
    return 0;
}
