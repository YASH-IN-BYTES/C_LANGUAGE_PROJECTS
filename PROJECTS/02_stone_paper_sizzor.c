#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // we seeded the random number to 0
    /*
    1 --> Stone
    2 --> Paper
    3 --> Sizzor
    */

    int player, playAgain, computer; // [0,2]; [1,3]

    do
    {
        computer = (rand() % 3) + 1;
        printf("ENTER '1' FOR 'STONE', ENTER '2' FOR 'PAPER', ENTER '3' FOR 'SIZZOR': \n");
        scanf("%d", &player);

        if (player == computer)
        {
            printf("COMPUTER GUESS: %d\n", computer);
            printf("TIE\n");
        }
        //
        else if (player == 1 && computer == 2)
        {
            printf("COMPUTER GUESS: %d\n", computer);
            printf("COMPUTER WON (PAPER)\n");
        }
        //
        else if (player == 1 && computer == 3)
        {
            printf("COMPUTER GUESS: %d\n", computer);
            printf("YOU WON (STONE)\n");
        }
        //
        else if (player == 2 && computer == 1)
        {
            printf("COMPUTER GUESS: %d\n", computer);
            printf("YOU WON (PAPER)\n");
        }
        //
        else if (player == 2 && computer == 3)
        {
            printf("COMPUTER GUESS: %d\n", computer);
            printf("COMPUTER WON (SIZZOR)\n");
        }
        //
        else if (player == 3 && computer == 1)
        {
            printf("COMPUTER GUESS: %d\n", computer);
            printf("COMPUTER WON (STONE)\n");
        }
        //
        else if (player == 3 && computer == 2)
        {
            printf("COMPUTER GUESS: %d\n", computer);
            printf("YOU WON (SIZZOR)\n");
        }

        printf("DO YOU WANT TO PLAY AGAIN? IF 'YES' ENTER '1', IF 'NO' ENTER '0': \n");
        scanf("%d", &playAgain);

        if (playAgain == 0)
        {
            break;
        }

    } while (playAgain == 1);

    return 0;
}