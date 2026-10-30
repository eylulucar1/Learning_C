#include <stdio.h>

/* Lesson 7: Character Input and Character Classification */
int main(void) {
    int character;

    printf("Enter one character: ");
    character = getchar();
    if (character == EOF) {
        puts("No input received.");
        return 1;
    }

    putchar(character);
    putchar('\n');
    printf("Character ASCII value: %d\n", character);
    return 0;
}
