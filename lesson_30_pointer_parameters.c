#include <stdio.h>

/* Lesson 30: Modifying Caller's Data Through Pointer Parameters */
void swap(int *a, int *b) {
    int temporary = *a;
    *a = *b;
    *b = temporary;
}

int main(void) {
    int x = 10, y = 20;
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
