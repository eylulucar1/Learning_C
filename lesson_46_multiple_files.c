#include <stdio.h>

/*
Lesson 46: Organizing Programs into Files

This example demonstrates the convention used by larger C programs:
public declarations belong in headers, implementations belong in .c files,
and callers include the header. Its header declaration pattern is shown below.

#ifndef CALCULATOR_H
#define CALCULATOR_H
int add(int left, int right);
#endif
*/

int add(int left, int right) {
    return left + right;
}

int main(void) {
    printf("Two-file module concept; result = %d\n", add(12, 30));
    return 0;
}
