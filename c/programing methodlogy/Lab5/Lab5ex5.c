#include <stdio.h>
#include <string.h>
#include <ctype.h>

void concate(char s1[], char s2[]);

int main()
{
    char s1[100], s2[100];

    printf("Input string s1: ");
    fgets(s1, 100, stdin);

    s1[strlen(s1) - 1] = '\0';

    printf("Input string s2: ");
    fgets(s2, 100, stdin);

    s2[strlen(s2) - 1] = '\0';

    concate(s1, s2);

    return 0;
}

void concate(char s1[], char s2[])
{
    int i = 0, j = 0;

    while (s1[i] != '\0')
        i++;

    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }

    s1[i] = '\0';

    printf("Concatenated string: %s", s1);
}
