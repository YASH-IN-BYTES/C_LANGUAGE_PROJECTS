// #include <stdio.h>
// #include <stdlib.h> // for generating random numbers

// // for srand() and rand()
// /*
// srand() - SEEDING RANDOM NUMBERS
// rand() - GENERATING RANDOM NUMBERS till RAND_MAX
// */

// #include <time.h> // for time()

// int main()
// {
//     srand(time(0)); // we have seeded random numbers form 0 to RAND_MAX

//     int randomNumber = (rand() % 100) + 1;

//     printf("RANDOM NUMBER: %d\n", randomNumber);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    
    int randomNumber = (rand() % 100) + 1;

    printf("%d", randomNumber);
    return 0;
}
