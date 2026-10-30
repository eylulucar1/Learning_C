#include <stdio.h>

/* Lesson 25: Safe String Input with fgets */
int main(void) {
    char name[50];
    printf("Enter your name: ");
    if (fgets(name, sizeof name, stdin) == NULL) {
        return 1;
    }

    for (int i = 0; name[i] != '\0'; ++i) {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
    }
    printf("Hello, %s.\n", name);
    return 0;
}
