#include <stdio.h>

/* Lesson 22: Selection Sort */
void selection_sort(int values[], int count) {
    for (int i = 0; i < count - 1; ++i) {
        int minimum = i;
        for (int j = i + 1; j < count; ++j) {
            if (values[j] < values[minimum]) {
                minimum = j;
            }
        }
        int temporary = values[i];
        values[i] = values[minimum];
        values[minimum] = temporary;
    }
}

int main(void) {
    int values[] = {9, 1, 7, 3, 5};
    selection_sort(values, 5);
    for (int i = 0; i < 5; ++i) {
        printf("%d ", values[i]);
    }
    putchar('\n');
    return 0;
}
