#include <stdio.h>

/* Lesson 43: Random Access with fseek and ftell */
int main(void) {
    FILE *file = fopen("random_access.txt", "w");
    if (file == NULL) {
        return 1;
    }
    fputs("ABCDEFGHIJ", file);
    fclose(file);

    file = fopen("random_access.txt", "r");
    if (file == NULL) {
        return 1;
    }
    fseek(file, 4L, SEEK_SET);
    printf("Character at offset 4: %c\n", fgetc(file));
    printf("Current offset: %ld\n", ftell(file));
    fclose(file);
    return 0;
}
