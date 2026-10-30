#include <stdio.h>

/* Lesson 8: Pre-increment and Post-increment */
int main(void) {
    int count = 5;
    printf("Initial count: %d\n", count++);
    printf("After postfix increment: %d\n", count);
    printf("Using prefix increment: %d\n", ++count);
    printf("Using postfix decrement: %d\n", count--);
    printf("Final count: %d\n", count);
    return 0;
}
