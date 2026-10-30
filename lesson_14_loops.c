#include <stdio.h>

/*
Lesson 14: Loops

for repeats a known count, while checks before each iteration, and do/while
checks after its first iteration. break exits a loop; continue skips ahead.
*/

int main(void) {
    printf("Lesson 14: Loops\n");

    for (int i = 1; i <= 5; ++i) {
        printf("for: %d\n", i);
    }

    int n = 1;
    while (n <= 16) {
        printf("while: %d\n", n);
        n *= 2;
    }

    int input = 0;
    do {
        printf("do/while runs at least once\n");
        input = 1;
    } while (input == 0);

    int sum = 0;
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 == 0) {
            continue;
        }
        sum += i;
        if (sum > 10) {
            break;
        }
    }
    printf("Partial sum of odd numbers: %d\n", sum);
    return 0;
}
