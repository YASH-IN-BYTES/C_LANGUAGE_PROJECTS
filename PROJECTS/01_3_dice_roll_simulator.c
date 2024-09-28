/*
Dice Roll Simulator:

In this program, you will simulate rolling two six-sided dice.
The program will continue rolling the dice until the sum of the two dice equals a target value provided by the user.
You’ll also keep track of how many rolls it took to reach the target sum.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // We have to use 'srand()' here only one time

    int dice1 = (rand() % 6) + 1; // [0, 5] , [1, 6]
    int dice2 = (rand() % 6) + 1; // [0, 5] , [1, 6]

    int dice3 = dice1 + dice2;

    int no_of_rolls = 0; // Initialized no.of rolls to 0

    // printf("%d + %d = %d", dice1, dice2, dice3);
    int sum;
    do
    {
        printf("ENTER VALUE OF DICE[1] (1-6): \n");
        scanf("%d", &dice1);

        printf("ENTER VALUE OF DICE[2] (1-6): \n");
        scanf("%d", &dice2);

        sum = dice1 + dice2; // dice3 = dice1 + dice2

        if (sum < dice3)
        {
            if (dice1 < 1 || dice1 > 6)
            {
                printf("INVALID INPUT\n\n");
                continue; // we will not break/return 0 , we will continue so the user can input the valsue again untill the DESIRED OUTPUT is to be ACHIVED
            }
            else
            {

                printf("HIGHER NUMBER IS REQUIRED\n\n");
            }
        }
        else if (sum > dice3)
        {
            if (dice2 < 1 || dice2 > 6)
            {
                printf("INVALID INPUT\n\n");
                continue; /* we will not break;/return 0; ,
                            we will 'continue;' so the user can input the values again
                            untill the DESIRED OUTPUT is to be ACHIEVED
                        */
            }
            else
            {
                printf("LOWER NUMBER IS REQUIRED\n\n");
            }
        }
        else // IF THE DERSIRED NUMBER IS HIT!!!
        {
            printf("CONGRATULATIONS\n\n");
        }

        no_of_rolls++; // TO TRACK THE NO.OF ROLLS

    } while (sum != dice3); // till the time sum value do not become equal to dice3

    printf("YOUR REQUIRED %d ROLLS\n", no_of_rolls);

    return 0;
}