#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    char names[5][100] = {0};

    int rows = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < rows; i++)
    {
        printf("Enter a name: ");
        fgets(names[i], sizeof(names), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }
 
    for (int i = 0; i < rows; i++)
    {
        printf("%s | ", names[i]);
    }

    return 0;
}