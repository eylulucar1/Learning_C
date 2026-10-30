#include <stdio.h>
#include <stdlib.h>

/* Lesson 42: Reading and Writing Binary Files */
int main(void) {
    int original[] = {10, 20, 30};
    int restored[3] = {0};

    FILE *file = fopen("numbers.bin", "wb");
    if (file == NULL) {
        return EXIT_FAILURE;
    }
    fwrite(original, sizeof original[0], 3, file);
    fclose(file);

    file = fopen("numbers.bin", "rb");
    if (file == NULL) {
        return EXIT_FAILURE;
    }
    fread(restored, sizeof restored[0], 3, file);
    fclose(file);

    for (int i = 0; i < 3; ++i) {
        printf("%d ", restored[i]);
    }
    putchar('\n');
    return EXIT_SUCCESS;
}
