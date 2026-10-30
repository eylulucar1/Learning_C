#include <stdio.h>

/* Lesson 21: Linear Search in an Array */
int linear_search(const int values[], int count, int target) {
    for (int i = 0; i < count; ++i) {
        if (values[i] == target) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    int values[] = {7, 3, 9, 1, 5};
    int index = linear_search(values, 5, 9);
    printf(index >= 0 ? "Value found at index %d.\n" : "Value not found.\n", index);
    return 0;
}
