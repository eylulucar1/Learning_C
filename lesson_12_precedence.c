#include <stdio.h>

/* Lesson 12: Operator Precedence and Parentheses */
int main(void) {
    int result1 = 2 + 3 * 4;
    int result2 = (2 + 3) * 4;
    int result3 = 20 / 5 * 2;

    printf("2 + 3 * 4 = %d\n", result1);
    printf("(2 + 3) * 4 = %d\n", result2);
    printf("20 / 5 * 2 = %d\n", result3);
    return 0;
}
