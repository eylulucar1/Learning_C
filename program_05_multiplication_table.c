/* Program 5: Multiplication table */
#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) return 1;
    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}
