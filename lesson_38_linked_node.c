#include <stdio.h>
#include <stdlib.h>

/* Lesson 38: A Structure That References Its Own Type */
struct Node {
    int data;
    struct Node *next;
};

int main(void) {
    struct Node node = {42, NULL};
    printf("Node data: %d\n", node.data);
    printf("Next pointer is %s.\n", node.next == NULL ? "NULL" : "not NULL");
    return 0;
}
