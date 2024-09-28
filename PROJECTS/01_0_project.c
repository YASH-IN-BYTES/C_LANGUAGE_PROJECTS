/*
We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.

When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.

Hint: Use loop & use a random number generator.
*/

#include <stdio.h>
#include <stdlib.h> // for generating random numbers

// for srand() and rand()
/*
srand() - SEEDING RANDOM NUMBERS
rand() - GENERATING RANDOM NUMBERS
*/

#include <time.h> // for time()

int main()
{
    srand(time(0)); // we have seeded random numbers form 0 to RAND_MAX

    int randomNumber = (rand() % 100) + 1;

    int no_of_guesses = 0;

    int guesses;

    // printf("RANDOM NUMBER: %d\n", randomNumber);

    do
    {
        printf("ENTER VALUE (0-100): \n");
        scanf("%d", &guesses);

        if (guesses > randomNumber)
        {
            printf("LOWER NUMBER PLEASE\n");
        }
        else if (guesses < randomNumber)
        {
            printf("HIGHER NUMBER PLEASE\n");
        }
        else
        {
            printf("CONGRATULATIONS\n\n");
        }

        no_of_guesses++;

    } while (guesses != randomNumber);

    printf("NO.OF GUSSES: %d\n", no_of_guesses);

    return 0;
}