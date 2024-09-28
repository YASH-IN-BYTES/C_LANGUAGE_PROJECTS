/*
We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.

When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.

Hint: Use loop & use a random number generator. (<stdlib.h>, <time.h>)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int RandomNumber = (rand() % 100) + 1; // 0 - 100 [RAND_MAX]

    // printf("%d", RandomNumber);

    int no_of_gusses = 0; // WE HAVE INITIALIZED OUR NUMBER TO 0
    int guessed_no;

    do
    {
        printf("ENTER NUMBER (1-100): \n");
        scanf("%d", &guessed_no);

        if (guessed_no > RandomNumber)
        {
            printf("LOWER NUMBER PLEASE\n\n");
        }
        else if (guessed_no < RandomNumber)
        {
            printf("HIGHER NUMBER PLEASE\n\n");
        }
        else
        {
            printf("CONGRATULATIIONS\n\n");
        }
        no_of_gusses++;

    } while (guessed_no != RandomNumber);

    printf("YOU HAVE GUESSED %d TIMES \n", no_of_gusses);

    return 0;
}