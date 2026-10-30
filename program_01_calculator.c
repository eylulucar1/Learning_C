/* Program 1: Four-operation calculator */
#include <stdio.h>

int main(void) {
    double a, b;
    char op;
    printf("Enter expression (number operator number): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) return 1;

    if (op == '+') printf("%.2f\n", a + b);
    else if (op == '-') printf("%.2f\n", a - b);
    else if (op == '*') printf("%.2f\n", a * b);
    else if (op == '/') {
        if (b == 0) puts("Division by zero.");
        else printf("%.2f\n", a / b);
    } else puts("Unknown operator.");
    return 0;
}
