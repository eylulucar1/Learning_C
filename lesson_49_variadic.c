#include <stdarg.h>
#include <stdio.h>

/* Lesson 49: Variadic Functions */
int add_many(int count, ...) {
    va_list arguments;
    int sum = 0;
    va_start(arguments, count);

    for (int i = 0; i < count; ++i) {
        sum += va_arg(arguments, int);
    }
    va_end(arguments);
    return sum;
}

int main(void) {
    printf("Sum: %d\n", add_many(4, 1, 2, 3, 4));
    return 0;
}
