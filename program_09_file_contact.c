/* Program 9: Save and read a contact using a text file */
#include <stdio.h>

int main(void) {
    char name[50];
    char phone[30];
    const char *path = "contact.txt";

    printf("Name: ");
    if (fgets(name, sizeof name, stdin) == NULL) return 1;
    printf("Phone: ");
    if (fgets(phone, sizeof phone, stdin) == NULL) return 1;

    FILE *file = fopen(path, "w");
    if (file == NULL) return 1;
    fprintf(file, "%s%s", name, phone);
    fclose(file);

    file = fopen(path, "r");
    if (file == NULL) return 1;
    printf("Saved contact:\n");
    while (fgets(name, sizeof name, file) != NULL) printf("%s", name);
    fclose(file);
    return 0;
}
