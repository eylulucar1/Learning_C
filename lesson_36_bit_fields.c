#include <stdio.h>

/* Lesson 36: Structure Bit Fields */
struct StatusFlags {
    unsigned int ready : 1;
    unsigned int error : 1;
    unsigned int priority : 3;
};

int main(void) {
    struct StatusFlags flags = {1, 0, 5};
    printf("Ready: %u, Error: %u, Priority: %u\n",
           flags.ready, flags.error, flags.priority);
    return 0;
}
