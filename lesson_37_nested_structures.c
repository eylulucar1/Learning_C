#include <stdio.h>

/* Lesson 37: Nested Structures */
struct Address {
    char city[30];
    int postal_code;
};

struct Person {
    char name[30];
    struct Address address;
};

int main(void) {
    struct Person person = {"Ada", {"London", 12345}};
    printf("%s lives in %s (%d).\n",
           person.name, person.address.city, person.address.postal_code);
    return 0;
}
