#include <stdio.h>
#include <string.h>

/*
Lesson 33: Structures, Enumerations, Unions, and Typedef

Structures group related data. Dot accesses members through a structure;
arrow accesses members through a structure pointer.
*/

typedef enum {
    STATUS_ACTIVE,
    STATUS_PAUSED,
    STATUS_DONE
} Status;

typedef struct {
    char title[40];
    Status status;
    double progress;
} Project;

typedef union {
    unsigned int whole;
    float decimal;
} NumberStorage;

void print_project(const Project *project) {
    const char *status_text = "Unknown";
    if (project->status == STATUS_ACTIVE) {
        status_text = "Active";
    } else if (project->status == STATUS_PAUSED) {
        status_text = "Paused";
    } else if (project->status == STATUS_DONE) {
        status_text = "Done";
    }

    printf("%s | %s | %.0f%%\n",
           project->title, status_text, project->progress);
}

int main(void) {
    Project project = {"Learn C", STATUS_ACTIVE, 65.0};
    NumberStorage number = {.decimal = 3.5f};

    printf("Lesson 33: Structures and Related Types\n");
    print_project(&project);
    strcpy(project.title, "Master C");
    project.status = STATUS_DONE;
    project.progress = 100.0;
    print_project(&project);

    printf("Union decimal member: %.2f\n", number.decimal);
    return 0;
}
