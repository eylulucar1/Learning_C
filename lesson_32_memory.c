#include <stdio.h>
#include <stdlib.h>

/*
Lesson 32: Dynamic Memory

malloc reserves uninitialized bytes, calloc reserves zero-initialized bytes,
and realloc changes an allocation's size. Every successful allocation must
eventually be released once with free.
*/

int main(void) {
    size_t count = 5;
    int *numbers = malloc(count * sizeof *numbers);
    if (numbers == NULL) {
        fprintf(stderr, "Allocation failed\n");
        return EXIT_FAILURE;
    }

    printf("Lesson 32: Dynamic Memory\n");
    for (size_t i = 0; i < count; ++i) {
        numbers[i] = (int)(i + 1) * 10;
    }

    size_t larger_count = 8;
    int *larger = realloc(numbers, larger_count * sizeof *larger);
    if (larger == NULL) {
        fprintf(stderr, "Reallocation failed\n");
        free(numbers);
        return EXIT_FAILURE;
    }
    numbers = larger;

    for (size_t i = count; i < larger_count; ++i) {
        numbers[i] = (int)(i + 1) * 10;
    }
    for (size_t i = 0; i < larger_count; ++i) {
        printf("%d%s", numbers[i],
               i + 1 == larger_count ? "\n" : " ");
    }

    free(numbers);
    numbers = NULL;
    return EXIT_SUCCESS;
}
