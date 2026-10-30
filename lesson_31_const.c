#include <stdio.h>

/* Lesson 31: Const Pointers and Pointer Targets */
int main(void) {
    int value = 10;
    const int *read_only_value = &value;
    int *const fixed_address = &value;

    printf("Read-only pointer value: %d\n", *read_only_value);
    *fixed_address = 25;
    printf("Updated value: %d\n", value);
    return 0;
}
