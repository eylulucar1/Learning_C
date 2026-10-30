/* Program 7: Basic statistics for integer input */
#include <stdio.h>

int main(void) {
    int values[10], count = 10, minimum, maximum, sum = 0;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < count; ++i) {
        if (scanf("%d", &values[i]) != 1) return 1;
        sum += values[i];
    }
    minimum = maximum = values[0];
    for (int i = 1; i < count; ++i) {
        if (values[i] < minimum) minimum = values[i];
        if (values[i] > maximum) maximum = values[i];
    }
    printf("Sum: %d\nMinimum: %d\nMaximum: %d\nAverage: %.2f\n",
           sum, minimum, maximum, (double)sum / count);
    return 0;
}
