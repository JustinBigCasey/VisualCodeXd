#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    srand(time(0));

    char buffer[100];
    int guess, tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1) + min);

    printf("===== NUMBER GUESSING GAME =====\n");

    do
    {

        printf("Guess a number between %d - %d: ", min, max);
        fgets(buffer, sizeof(buffer), stdin);

        if (sscanf(buffer, "%d", &guess) != 1 || guess > max || guess < min)
        {
            printf("\n ! Please guess in %d - %d only !\n\n", min, max);
        }

        else if (guess < answer)
        {
            printf("TOO LOW!\n");
            tries++;
        }

        else if (guess > answer)
        {
            printf("TOO HIGH!\n");
            tries++;
        }

        else
        {
            printf("\n // YOU WIN \\\\ \n");
        }

    } while (guess != answer);

    printf("\nThe answer is [%d]\n", answer);
    printf("It took you [%d] tries", tries);

    return 0;
}