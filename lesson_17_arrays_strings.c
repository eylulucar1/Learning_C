#include <stdio.h>
#include <string.h>

/*
Lesson 17: Arrays and Strings

Arrays store consecutive elements of one type. C has no separate string
type: a string is a char array ending in '\0'.
*/

int main(void) {
    int temperatures[] = {18, 21, 19, 24, 23};
    size_t count = sizeof temperatures / sizeof temperatures[0];

    printf("Lesson 17: Arrays and Strings\n");
    int total = 0;
    for (size_t i = 0; i < count; ++i) {
        printf("Day %zu: %d\n", i + 1, temperatures[i]);
        total += temperatures[i];
    }
    printf("Average: %.2f\n", (double)total / count);

    char greeting[] = "Welcome";
    char copy[20];
    strcpy(copy, greeting);

    printf("Greeting length: %zu\n", strlen(greeting));
    printf("Copy: %s\n", copy);
    printf("Compare: %d\n", strcmp(greeting, copy));
    return 0;
}
