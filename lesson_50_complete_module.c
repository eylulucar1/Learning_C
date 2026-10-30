#include <stdio.h>

/*
Lesson 50: Structuring Complete C Programs

A complete module should have:
1. focused public responsibilities,
2. documented ownership rules,
3. validation at every input boundary,
4. one cleanup path for every allocation,
5. explicit success and failure codes.
*/
int divide_two_numbers(int numerator, int denominator, int *result) {
    if (result == NULL || denominator == 0) {
        return 0;
    }
    *result = numerator / denominator;
    return 1;
}

int main(void) {
    int result;
    if (divide_two_numbers(20, 5, &result)) {
        printf("20 / 5 = %d\n", result);
        return 0;
    }
    puts("The division request was invalid.");
    return 1;
}
