#include <stdio.h>

/* Lesson 13: Implicit and Explicit Type Conversion */
int main(void) {
    int total = 7;
    int count = 2;
    double implicit_result = total / count;
    double explicit_result = (double)total / count;

    printf("Implicit conversion: %.1f\n", implicit_result);
    printf("Explicit conversion: %.1f\n", explicit_result);
    return 0;
}
