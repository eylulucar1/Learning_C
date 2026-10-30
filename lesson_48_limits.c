#include <stdio.h>
#include <limits.h>
#include <float.h>

/* Lesson 48: Numeric Limits and Ranges */
int main(void) {
    printf("int range: %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int maximum: %u\n", UINT_MAX);
    printf("char minimum: %d\n", CHAR_MIN);
    printf("char maximum: %d\n", CHAR_MAX);
    printf("double precision: %d decimal digits\n", DBL_DIG);
    return 0;
}
