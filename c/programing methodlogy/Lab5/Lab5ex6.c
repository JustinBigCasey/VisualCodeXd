#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findFirstChar(char s[], char c);

int main()
{
    char s[100], c;

    printf("Input string s: ");
    fgets(s, 100, stdin);

    printf("Input character c: ");
    scanf("%c", &c);

    findFirstChar(s, c);

    return 0;
}

void findFirstChar(char s[], char c)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            printf("First character '%c' found at index [%d]\n", c, i);
            return;
        }
    }

    printf("Character '%c' not found in the string.\n", c);
}
