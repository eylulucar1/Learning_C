#include <stdio.h>

/* Lesson 20: Bitwise Operators */
int main(void) {
    unsigned int a = 6U;  /* 0110 */
    unsigned int b = 3U;  /* 0011 */

    printf("%u & %u = %u\n", a, b, a & b);
    printf("%u | %u = %u\n", a, b, a | b);
    printf("%u ^ %u = %u\n", a, b, a ^ b);
    printf("%u << 1 = %u\n", a, a << 1);
    printf("%u >> 1 = %u\n", a, a >> 1);
    printf("~%u = %u\n", 0U, ~0U);
    return 0;
}
