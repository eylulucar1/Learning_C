#include <stdio.h>

/* Lesson 35: Passing Arrays and Their Sizes */
int sum(const int values[], int count) {
    int total = 0;
    for (int i = 0; i < count; ++i) {
        total += values[i];
    }
    return total;
}

int main(void) {
    int values[] = {2, 4, 6, 8};
    printf("Sum: %d\n", sum(values, 4));
    return 0;
}
