/* Program 4: Grade average and letter grade */
#include <stdio.h>

int main(void) {
    double scores[5];
    double total = 0.0;

    printf("Enter five scores:\n");
    for (int i = 0; i < 5; ++i) {
        if (scanf("%lf", &scores[i]) != 1) return 1;
        total += scores[i];
    }
    double average = total / 5.0;
    char grade = average >= 90 ? 'A' : average >= 80 ? 'B'
               : average >= 70 ? 'C' : average >= 60 ? 'D' : 'F';
    printf("Average: %.2f, Grade: %c\n", average, grade);
    return 0;
}
