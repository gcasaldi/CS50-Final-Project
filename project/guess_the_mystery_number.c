#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int mystery_number, guess, attempts = 0;
    char response;

    // Initialize the random number generator
    srand(time(NULL));
    mystery_number = rand() % 100 + 1; // Random number between 1 and 100

    printf("Welcome to the Guess the Mystery Number Game!\n");
    printf("I have chosen a number between 1 and 100. Try to guess it!\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < mystery_number) {
            printf("Too low! Try again.\n");
        } else if (guess > mystery_number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts!\n", mystery_number, attempts);
        }

    } while (guess != mystery_number);

    printf("Do you want to play again? (y/n): ");
    scanf(" %c", &response);

    while (response == 'y' || response == 'Y') {
        mystery_number = rand() % 100 + 1; // New random number
        attempts = 0;
        printf("I have chosen a new number between 1 and 100. Try to guess it!\n");

        do {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;

            if (guess < mystery_number) {
                printf("Too low! Try again.\n");
            } else if (guess > mystery_number) {
                printf("Too high! Try again.\n");
            } else {
                printf("Congratulations! You guessed the number %d in %d attempts!\n", mystery_number, attempts);
            }

        } while (guess != mystery_number);

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &response);
    }

    printf("Thank you for playing! Goodbye!\n");
    return 0;
}
