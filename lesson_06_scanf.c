#include <stdio.h>

/* Lesson 6: Safe Basic Input with scanf */
int main(void) {
    int age;
    double height;

    printf("Enter age and height: ");
    if (scanf("%d %lf", &age, &height) != 2) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("Age: %d, height: %.2f\n", age, height);
    return 0;
}
