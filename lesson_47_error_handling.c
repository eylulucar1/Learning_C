#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

/* Lesson 47: errno and Numerical Conversion */
int main(void) {
    char text[] = "123x";
    char *end = NULL;
    errno = 0;
    long value = strtol(text, &end, 10);

    if (errno != 0) {
        perror("strtol");
        return 1;
    }
    if (*end != '\0') {
        printf("Invalid trailing characters starting at: %s\n", end);
        return 1;
    }
    printf("Converted value: %ld\n", value);
    return 0;
}
