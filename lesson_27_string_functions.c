#include <stdio.h>
#include <string.h>

/* Lesson 27: strlen, strcpy, strcat, and strcmp */
int main(void) {
    char first[] = "C";
    char second[20] = "Programming";

    printf("Length: %zu\n", strlen(second));
    printf("Comparison: %d\n", strcmp(first, "C"));
    strcat(second, " Language");
    printf("Concatenated: %s\n", second);

    char copy[20];
    strcpy(copy, first);
    printf("Copy: %s\n", copy);
    return 0;
}
