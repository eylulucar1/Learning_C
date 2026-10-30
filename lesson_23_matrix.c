#include <stdio.h>

/* Lesson 23: Two-dimensional Arrays and Matrix Traversal */
int main(void) {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int row = 0; row < 3; ++row) {
        for (int column = 0; column < 3; ++column) {
            printf("%3d", matrix[row][column]);
        }
        putchar('\n');
    }
    return 0;
}
