#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findAllChar(char s[], char c);

int main()
{
    char s[100], c;

    printf("Input string s: ");
    fgets(s, 100, stdin);

    printf("Input character c: ");
    scanf("%c", &c);

    findAllChar(s, c);

    return 0;
}

void findAllChar(char s[], char c)
{
    int i;
    int found = 0;

    printf("Character '%c' found at index: ", c);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            printf("[%d], ", i);
            found = 1;
        }
    }

    if (!found)
    {
        printf("Character '%c' not found in the string.\n", c);
    }
}
