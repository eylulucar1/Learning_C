#include <stdio.h>

/* Lesson 29: Relationships Between Pointers and Arrays */
int main(void) {
    int values[] = {10, 20, 30, 40};
    int *pointer = values;

    printf("values[0]: %d\n", *pointer);
    printf("values[1]: %d\n", *(pointer + 1));
    printf("values[2]: %d\n", pointer[2]);
    printf("Address difference: %td\n", pointer + 3 - values);
    return 0;
}
