/* Program 6: Case-insensitive string palindrome check */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char text[100];
    printf("Enter text: ");
    if (fgets(text, sizeof text, stdin) == NULL) return 1;
    text[strcspn(text, "\n")] = '\0';

    size_t left = 0;
    size_t right = strlen(text);
    if (right > 0) --right;
    while (left < right) {
        while (left < right && !isalnum((unsigned char)text[left])) ++left;
        while (left < right && !isalnum((unsigned char)text[right])) --right;
        if (tolower((unsigned char)text[left]) !=
            tolower((unsigned char)text[right])) {
            puts("Not a palindrome.");
            return 0;
        }
        ++left;
        if (right > 0) --right;
    }
    puts("Palindrome.");
    return 0;
}
