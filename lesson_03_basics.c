#include <stdio.h>

/*
Lesson 3: Program Structure, Comments, Variables, and Input/Output

Every executable C program starts in main(). Each statement ends with a
semicolon. #include makes declarations from a standard header available.
*/

int main(void) {
    /* Fundamental integer types. */
    int age = 30;
    long population = 85000000L;

    /* Floating-point and character types. */
    double pi = 3.141592653589793;
    char initial = 'A';

    printf("Lesson 3: Basics\n");
    printf("Age: %d\n", age);
    printf("Population: %ld\n", population);
    printf("Pi: %.4f\n", pi);
    printf("Initial: %c\n", initial);

    /*
    Read one name and one age. A real name might contain spaces, so fgets
    is safer than scanf("%s", ...). Here gets are entered line by line.
    */
    char name[50];
    int new_age = 0;

    printf("\nEnter your first name: ");
    if (fgets(name, (int)sizeof name, stdin) != NULL) {
        /* Remove the newline produced by Enter, when present. */
        size_t i = 0;
        while (name[i] != '\0') {
            if (name[i] == '\n') {
                name[i] = '\0';
                break;
            }
            ++i;
        }
    }

    printf("Enter your age: ");
    if (scanf("%d", &new_age) != 1) {
        printf("Invalid age.\n");
        return 1;
    }

    printf("Hello, %s. In ten years you will be %d.\n",
           name, new_age + 10);
    return 0;
}
