#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    const int maxNumber = 20;
    int numberOfTries = 5;
    time_t t;
    int userGuess = 0;

    // Generate the random number
    srand((unsigned)time(&t));
    int randomNumber = rand() % (maxNumber + 1);
    printf("\n*************************************\n");
    printf("A random number has been generated. |\n");
    printf("*************************************\n\n");

    for ( ; numberOfTries > 0; numberOfTries-- )
    {
        printf("You have %d tries left.\n", numberOfTries);
        printf("Enter a guess: ");
        // Ask for a number input and validate it
        scanf("%d", &userGuess);
        if ( userGuess < 0 || userGuess > maxNumber )
        {
            printf("\nOnly positive numbers lower than %d are allowed.\n", maxNumber);
            numberOfTries++;
            continue;
        }
        
        // Check if the user is correct or print if the guess is higher/lower than the number.
        if ( userGuess > randomNumber )
            printf("The number is lower than your guess.\n");
        else if ( userGuess < randomNumber )
            printf("The number is higher than your guess.\n");
        else
        {
            printf("Correct! You won.\n");
            break;
        }
    }

    return 0;
}