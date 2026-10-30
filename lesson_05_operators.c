#include <stdio.h>

/*
Lesson 5: Operators, Constants, Boolean Expressions, and Type Conversion

C evaluates arithmetic and comparison expressions with operator precedence.
sizeof reports the size of a type or object in bytes.
*/

#define PI 3.141592653589793

int main(void) {
    int a = 17;
    int b = 5;
    double radius = 2.5;
    const int minutes_per_hour = 60;

    printf("Lesson 5: Operators\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d / %d = %d (integer division)\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
    printf("%d / %d = %.2f (converted division)\n",
           a, b, (double)a / b);

    printf("Area: %.4f\n", PI * radius * radius);
    printf("Minutes per hour: %d\n", minutes_per_hour);
    printf("Size of int: %zu bytes\n", sizeof(int));

    /*
    C uses 0 as false and any nonzero value as true. Logical operators can
    short-circuit: right-hand operands may not be evaluated.
    */
    int in_range = (a >= 10 && a <= 20);
    int age = 20;
    int can_drive = age >= 18;
    printf("In range: %d; can drive: %d\n", in_range, can_drive);
    printf("Parity: %s\n", (a % 2 == 0) ? "even" : "odd");
    return 0;
}
