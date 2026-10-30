#include <stdio.h>

/* Lesson 1: printf Conversion Specifiers */
int main(void) {
    int integer = 42;
    unsigned int unsigned_integer = 42U;
    double decimal = 123.456;
    char character = 'A';
    char text[] = "C";

    printf("Integer: %d\n", integer);
    printf("Unsigned: %u\n", unsigned_integer);
    printf("Hexadecimal: %#x\n", integer);
    printf("Floating point: %.2f\n", decimal);
    printf("Character: %c\n", character);
    printf("String: %s\n", text);
    printf("Width and alignment: |%6d|%-6d|\n", integer, integer);
    return 0;
}
