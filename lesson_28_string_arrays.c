#include <stdio.h>

/* Lesson 28: Arrays of Strings */
int main(void) {
    const char *days[] = {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday"
    };

    for (int i = 0; i < 5; ++i) {
        printf("%d. %s\n", i + 1, days[i]);
    }
    return 0;
}
