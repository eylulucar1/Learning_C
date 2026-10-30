/* Program 3: Small number-guessing loop */
#include <stdio.h>

int main(void) {
    const int secret = 42;
    int guess;
    int attempts = 0;

    do {
        printf("Guess the number: ");
        if (scanf("%d", &guess) != 1) return 1;
        ++attempts;
        if (guess < secret) puts("Too low.");
        else if (guess > secret) puts("Too high.");
        else printf("Correct in %d attempt(s).\n", attempts);
    } while (guess != secret);
    return 0;
}
