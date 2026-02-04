#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[50];
    char buffer[100];
    int score = 0;
    char guess = '\0';

    char questions[][200] = {
        "What was the original name for Minecraft?",
        "In the game Pac-Man, what food was the character designed to resemble?",
        "What is the name of the character who plays a vital role in the video game franchise The Legend of Zelda?",
        "In Animal Crossing, what is the in-game currency called?",
        "What is the full name of the main character in the Metroid series?",
        "What does the acronym ARAM stand for in one of the League of Legend's popular modes?"};

    char options[][100] = {
        "A. Cave Game \nB. MineWorld \nC. Fortnite \nD. Deez Nuts",
        "A. Apple \nB. Dog \nC. Pizza \nD. Cookie",
        "A. Link \nB. Zelda \nC. Shrek \nD. Da Vinki",
        "A. Coins \nB. Leavaes \nC. Bells \nD. Monies",
        "A. Sadus Ajen \nB. Samus Aran \nC. Alex Axender \nD. Justin Casey",
        "A. All Rascle And Most \nB. Alex Roster Art Medic \nC. Anime Rail A Mat \nD. All Random All Mid"};

    char answer_key[] = {
        'A',
        'C',
        'A',
        'C',
        'B',
        'D'};

    printf("======= QUIZ GAME =======\n");
    printf("\nEnter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    printf("\nHELLO %s! LET'S START THE QUIZ GAME! \n", name);

    int num_questions = sizeof(questions) / sizeof(questions[0]);

    for (int i = 0; i < num_questions; i++)
    {
        printf("\nQuestion %d: %s\n", i + 1, questions[i]);
        printf("%s\n", options[i]);

        while (1)
        {
            printf("Enter your choice: ");
            fgets(buffer, sizeof(buffer), stdin);
            buffer[strlen(buffer) - 1] = '\0';
            if (strlen(buffer) == 1 && isalpha(buffer[0]))
            {
                guess = toupper(buffer[0]);
                break;
            }

            printf("\nInvalid input! Please enter ONLY ONE letter (A, B, C or D)\n");
        }

        if (guess == answer_key[i])
        {
            printf("\n * CORRECT *\n");
            score++;
        }

        else
        {
            printf("\n ! WRONG !\n");
        }
    }

    printf("\nFinal Score: %d/%d", score, num_questions);

    return 0;
}