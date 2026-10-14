/*
Author : Blessam
Date : 10/15/2026
Description : Simple guess game that generates a random number and allows the user to guess it
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Generate a random number between 1 and 20 using the built-in rand() function
    int random_number = (rand() % 20) + 1;

    // Declare and initialize the number of guesses to zero
    int number_of_guesses = 0;

    // Declare and initialize the guess variable to zero
    int guess = 0;

    // Check that the guessed number is different from the random winning number
    while (guess != random_number) {
        // Prompt the user to guess a number
        printf("\nGuess a number between 1 and 20: ");
        scanf("%d", &guess);

        // Check if the guessed number is less than random winning number
        if (guess < random_number) {
            printf("\nYour guess is too low. Try again");
        }
        // Check if the guessed number is greater than random winning number
        else if (guess > random_number) {
            printf("\nYour guess too high. Try again");
        }

        // Count the number of guesses
        number_of_guesses += 1;
    }

    printf("\nCorrect!! You guessed the number in %d guesses.", number_of_guesses);
    return 0;
}