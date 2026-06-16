#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findFirstWord(char s[], char c[]);

int main()
{
    char s[100], c[100];

    printf("Input string s: ");
    fgets(s, 100, stdin);

    s[strlen(s) - 1] = '\0';

    printf("Input word c: ");
    fgets(c, 100, stdin);

    c[strlen(c) - 1] = '\0';

    findFirstWord(s, c);

    return 0;
}

void findFirstWord(char s[], char c[])
{
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        j = 0;

        while (c[j] != '\0' && s[i + j] == c[j])
            j++;

        if (c[j] == '\0')
        {
            printf("First word '%s' found at index [%d]\n", c, i);
            return;
        }
    }

    printf("Word '%s' not found in the string.\n", c);
}
