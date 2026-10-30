#include <stdio.h>

/*
Lesson 24: Functions, Scope, and Recursion

A function declaration describes a function before definition. Parameters
receive copies of arguments (pass by value). Static data has file scope.
*/

int add(int left, int right);
long factorial(unsigned int n);

static int file_counter = 0;

int add(int left, int right) {
    ++file_counter;
    return left + right;
}

long factorial(unsigned int n) {
    if (n <= 1) {
        return 1;
    }
    return (long)n * factorial(n - 1);
}

int main(void) {
    printf("Lesson 24: Functions\n");

    int x = 4;
    int y = 7;
    printf("%d + %d = %d\n", x, y, add(x, y));
    printf("factorial(6) = %ld\n", factorial(6));
    printf("Add was called %d time(s)\n", file_counter);
    return 0;
}
