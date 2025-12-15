/* example 256 – dice game – using random numbers */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dice1, dice2, total;
    char choice;

    // Initialize the random number generator with current time
    srand((unsigned int)time(NULL));

    printf("Welcome to the Dice Game!\n");
    printf("Rules: Roll a 7 or 11 to win, 2, 3, or 12 to lose.\n\n");

    do {
        // Simulate rolling two dice
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        total = dice1 + dice2;

        printf("You rolled %d and %d in Total: %d\n", dice1, dice2, total);

        // Determine game outcome
        if (total == 7 || total == 11) {
            printf("You win!\n");
        } else if (total == 2 || total == 3 || total == 12) {
            printf("You lose.\n");
        } else {
            printf("Try again...\n");
        }

        // Prompt to continue
        printf("Do you want to roll again? (y/n): ");
        scanf(" %c", &choice);

        printf("\n");

    } while (choice == 'y' || choice == 'Y');

    printf("Thanks for playing!\n");

    return 0;
}
