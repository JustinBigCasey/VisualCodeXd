#include <stdio.h>

int main()
{

    FILE *pFile = fopen("text2.txt", "w");

    char text[] = "Fortnite Balls all in your face\nI am racist\n    fuck you\n    nigga \n    what the fuck";

    if (pFile == NULL)
    {
        printf("No file found\n");
        return 1;
    }
    else
    {
        printf("File Created\n");
    }

    fprintf(pFile, "%s", text);

    printf("Successfully written");

    fclose(pFile);

    return 0;
}