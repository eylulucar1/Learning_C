#include <stdio.h>

/* Lesson 2: Escape Sequences and Formatted Output */
int main(void) {
    printf("Newline: first\\nsecond\n");
    printf("Tab: left\\tright\n");
    printf("Quote: \\\"C language\\\"\n");
    printf("Backslash: C:\\\\Lessons\n");
    printf("Percent: 100%% complete\n");
    printf("A\\nB\\tC are escape sequences.\n");
    return 0;
}
