#include <stdio.h>

/* Lesson 15: Nested Decisions */
int main(void) {
    int age = 20;
    int has_ticket = 1;

    if (age >= 18) {
        if (has_ticket) {
            puts("Entry permitted.");
        } else {
            puts("A ticket is required.");
        }
    } else {
        puts("This event is for adults.");
    }
    return 0;
}
