#include <stdio.h>

/* Lesson 16: The Conditional Operator */
int main(void) {
    int a = 12, b = 25;
    int maximum = a > b ? a : b;
    const char *description = a % 2 == 0 ? "even" : "odd";

    printf("Maximum: %d\n", maximum);
    printf("a is %s.\n", description);
    return 0;
}
