#include <stdio.h>
#include <string.h>
#include <ctype.h>

void normalize(char s[]);

int main()
{
    char s[100];

    printf("Input string: ");
    fgets(s, 100, stdin);

    normalize(s);

    return 0;
}

void normalize(char s[])
{
    int i = 0, j = 0;
    char temp[100];

    while (s[i] == ' ')
        i++;

    while (s[i] != '\0')
    {
        if (s[i] != ' ')
        {
            temp[j] = tolower(s[i]);
            j++;
        }

        else
        {
            if (j > 0 && temp[j - 1] != ' ')
            {
                temp[j] = ' ';
                j++;
            }
        }

        i++;
    }

    if (j > 0 && temp[j - 1] == ' ')
        j--;

    temp[j] = '\0';

    for (i = 0; temp[i] != '\0'; i++)
    {
        if (i == 0 || temp[i - 1] == ' ')
            temp[i] = toupper(temp[i]);
    }

    strcpy(s, temp);

    printf("Normalized string: %s", temp);
}