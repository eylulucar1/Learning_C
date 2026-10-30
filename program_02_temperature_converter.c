/* Program 2: Celsius/Fahrenheit converter */
#include <stdio.h>

int main(void) {
    double celsius;
    printf("Enter Celsius temperature: ");
    if (scanf("%lf", &celsius) != 1) return 1;
    printf("%.2f C = %.2f F\n", celsius, celsius * 9.0 / 5.0 + 32.0);
    return 0;
}
