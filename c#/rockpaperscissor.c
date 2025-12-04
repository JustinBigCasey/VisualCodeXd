#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

// 1 = Rock
// 2 = Paper
// 3 = Scissor

int main()
{
    srand(time(0));

    int choose;
    int player_score = 0;
    int computer_score = 0;
    char buffer[100];

    printf(" ===== ROCK PAPER SCISSORS ===== \n\n");
    printf("Choose an option\n");
    printf("1. ROCK\n");
    printf("2. PAPER\n");
    printf("3. SCISSOR\n");
    printf("Press 'q' to quit\n");
    while (1)
    {

        while (1)
        {
            printf("Enter your choice: ");
            fgets(buffer, sizeof(buffer), stdin);
            buffer[strlen(buffer) - 1] = '\0';

            if (strcmp(buffer, "q") == 0 || strcmp(buffer, "Q") == 0)
            {
                printf("\nGame exited. Goodbye!\n");
                printf("\nYOUR SCORE: %d\n", player_score);
                printf("COMPUTER SCORE: %d\n", computer_score);
                return 0;
            }

            if (sscanf(buffer, "%d", &choose) == 1)
            {
                switch (choose)
                {
                case 1:
                    printf("\nYou choose [Rock]\n");
                    break;

                case 2:
                    printf("\nYou choose [Paper]\n");
                    break;

                case 3:
                    printf("\nYou choose [Scissor]\n");
                    break;

                default:
                    printf("\nInvalid choices! Please enter 1, 2, 3 or q\n");
                    break;
                }
                break;
            }

            else if (sscanf(buffer, "%d", &choose) == 'q')
            {
                return 0;
            }

            else
            {
                printf("\nInvalid choices! Please enter 1, 2, 3 or q\n");
            }
        }

        int computer = (rand() % 3 + 1);

        switch (computer)
        {
        case 1:
            printf("Computer choose [Rock]\n");
            break;

        case 2:
            printf("Computer choose [Paper]\n");
            break;

        case 3:
            printf("Computer choose [Scissor]\n");
            break;

        default:
            break;
        }

        if (computer == choose)
        {
            printf("\n // TIE // \n");
        }
        else if ((computer == 1 && choose == 2) ||
                 (computer == 2 && choose == 3) ||
                 (computer == 3 && choose == 1))
        {
            printf("\n $$ YOU WIN $$ \n");
            player_score++;
        }
        else
        {
            printf("\n !! YOU LOSE !! \n");
            computer_score++;
        }

        printf("\nCurrent Score => You: %d | Computer: %d\n\n", player_score, computer_score);
    }

    return 0;
}