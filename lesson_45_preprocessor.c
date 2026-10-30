#include <stdio.h>

/*
Lesson 45: Preprocessor, Headers, and Build Configuration

The preprocessor runs before compilation. #define creates macros,
#if/#ifdef create conditional compilation, and include guards protect headers.
Use small functions or inline functions rather than complex macros.
*/

#define SQUARE(value) ((value) * (value))
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof((array)[0]))

#ifndef PROGRAM_NAME
#define PROGRAM_NAME "C Curriculum"
#endif

int main(void) {
    int values[] = {1, 2, 3, 4, 5};

    printf("Lesson 45: Preprocessor and Headers\n");
    printf("Program: %s\n", PROGRAM_NAME);
    printf("5 squared: %d\n", SQUARE(5));
    printf("Array length: %zu\n", ARRAY_LENGTH(values));

#ifdef DEBUG_BUILD
    printf("Debug build enabled\n");
#else
    printf("Release build enabled\n");
#endif
    return 0;
}
