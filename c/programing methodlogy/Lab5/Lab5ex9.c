#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findAppearString(char s1[], char s2[]);

int main()
{
    char s1[100], s2[100];

    printf("Input string s1: ");
    fgets(s1, 100, stdin);

    s1[strlen(s1) - 1] = '\0';

    printf("Input string s2: ");
    fgets(s2, 100, stdin);

    s2[strlen(s2) - 1] = '\0';

    findAppearString(s1, s2);

    return 0;
}

void findAppearString(char s1[], char s2[])
{
    int i = 0, j = 0;

    for (i = 0; s1[i] != '\0'; i++)
    {
        j = 0;

        while (s2[j] != '\0' && s1[i + j] == s2[j])
        {
            j++;
        }

        if (s2[j] == '\0')
        {
            printf("String '%s' found at index [%d]\n", s2, i);
            return;
        }
    }

    printf("String '%s' not found in the string.\n", s2);
}
