#include <stdio.h>
#include <stdlib.h>

/*
Lesson 41: Binary and Text File I/O

fopen opens a stream, fprintf/fscanf read and write text, and
fclose releases it. fopen can fail, so always check its result.
*/

int main(void) {
    const char *path = "lesson_progress.txt";

    printf("Lesson 41: File I/O\n");
    FILE *file = fopen(path, "w");
    if (file == NULL) {
        fprintf(stderr, "Could not open %s for writing\n", path);
        return EXIT_FAILURE;
    }

    fprintf(file, "student=%s\nlesson=%d\n", "example", 11);
    fclose(file);

    file = fopen(path, "r");
    if (file == NULL) {
        fprintf(stderr, "Could not reopen %s\n", path);
        return EXIT_FAILURE;
    }

    char key[20];
    int lesson;
    if (fscanf(file, "student=%19s\nlesson=%d", key, &lesson) == 2) {
        printf("Student value: %s\n", key);
        printf("Lesson value: %d\n", lesson);
    }

    fclose(file);
    return EXIT_SUCCESS;
}
