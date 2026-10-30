#include <stdio.h>

/* Lesson 34: Multiple Levels of Indirection */
void assign(int **target, int *source) {
    *target = source;
}

int main(void) {
    int value = 100;
    int *pointer = NULL;
    assign(&pointer, &value);
    printf("Double-pointer target value: %d\n", *pointer);
    return 0;
}
