/* Program 10: Small dynamic linked list demonstrating todo storage */
#include <stdio.h>
#include <stdlib.h>

struct Task {
    int id;
    struct Task *next;
};

int main(void) {
    struct Task *head = NULL;
    struct Task *tail = NULL;

    for (int id = 1; id <= 3; ++id) {
        struct Task *task = malloc(sizeof *task);
        if (task == NULL) return 1;
        task->id = id;
        task->next = NULL;
        if (tail == NULL) head = task;
        else tail->next = task;
        tail = task;
    }

    for (struct Task *task = head; task != NULL; task = task->next) {
        printf("Task %d\n", task->id);
    }
    while (head != NULL) {
        struct Task *next = head->next;
        free(head);
        head = next;
    }
    return 0;
}
