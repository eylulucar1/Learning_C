#include <stdio.h>

/*
Lesson 11: Decisions

if/else executes a branch according to a condition. A switch selects one
matching case. Braces prevent confusion and make compound statements clear.
*/

int main(void) {
    int score = 84;

    printf("Lesson 11: Decisions\n");
    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else if (score >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    int day = 3;
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Other day\n");
    }
    return 0;
}
