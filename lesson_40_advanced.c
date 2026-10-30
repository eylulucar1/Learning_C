#include <stdio.h>
#include <stdlib.h>

/*
Lesson 40: Advanced Pointers and Function Pointers

A function pointer stores the address of a callable function. It can select
behavior at runtime. A void pointer can point to any object but must be
converted before it is dereferenced.
*/

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int apply_operation(int left, int right,
                    int (*operation)(int, int)) {
    return operation(left, right);
}

int compare_int(const void *left, const void *right) {
    const int a = *(const int *)left;
    const int b = *(const int *)right;
    return (a > b) - (a < b);
}

int main(void) {
    printf("Lesson 40: Advanced Pointer Techniques\n");
    printf("add through pointer: %d\n", apply_operation(6, 7, add));
    printf("multiply through pointer: %d\n",
           apply_operation(6, 7, multiply));

    int values[] = {42, 7, 19, 3, 27};
    size_t count = sizeof values / sizeof values[0];
    qsort(values, count, sizeof values[0], compare_int);

    for (size_t i = 0; i < count; ++i) {
        printf("%d%s", values[i], i + 1 == count ? "\n" : " ");
    }
    return 0;
}
