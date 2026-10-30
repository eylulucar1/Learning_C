#include <stdio.h>
#include <stdlib.h>

/* Lesson 39: Building and Releasing a Small Linked List */
struct Node {
    int data;
    struct Node *next;
};

void print_list(const struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    puts("NULL");
}

int main(void) {
    struct Node *head = malloc(sizeof *head);
    struct Node *second = malloc(sizeof *second);
    if (head == NULL || second == NULL) {
        free(head);
        free(second);
        return 1;
    }

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = NULL;
    print_list(head);
    free(second);
    free(head);
    return 0;
}
