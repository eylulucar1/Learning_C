#include <stdio.h>

/*
Lesson 26: Pointers

A pointer stores the address of an object. '*' declares a pointer and
dereferences it; '&' obtains an address. Pointer arithmetic uses element size.
*/

void increment(int *value) {
    ++(*value);
}

int main(void) {
    int number = 42;
    int *number_address = &number;

    printf("Lesson 26: Pointers\n");
    printf("Value: %d\n", number);
    printf("Address: %p\n", (void *)number_address);
    printf("Dereferenced address: %d\n", *number_address);

    increment(&number);
    printf("After increment: %d\n", number);

    int values[] = {10, 20, 30, 40};
    int *current = values;
    for (int i = 0; i < 4; ++i) {
        printf("values[%d] = %d, via pointer = %d\n",
               i, values[i], *(current + i));
    }
    return 0;
}
