#include <stdio.h>
#include <string.h>
#include <ctype.h>

void insertString(char s1[], char s2[], int pos);

int main()
{
    int pos;
    char s1[100], s2[100];

    printf("Input string s1: ");
    fgets(s1, 100, stdin);

    s1[strlen(s1) - 1] = '\0';

    printf("Input string s2: ");
    fgets(s2, 100, stdin);

    s2[strlen(s2) - 1] = '\0';

    printf("Input position: ");
    scanf("%d", &pos);

    insertString(s1, s2, pos);

    return 0;
}

void insertString(char s1[], char s2[], int pos)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int i;

    for (i = 0; s1[i] != '\0'; i++)
        ;

    if (pos < 0 || pos > i)
    {
        printf("Invalid position. Please enter a position between 0 and %d.\n", i);
        return;
    }

    for (i = len1; i >= pos; i--)
        s1[i + len2] = s1[i];

    for (i = 0; s2[i] != '\0'; i++)
        s1[pos + i] = s2[i];

    printf("String after insertion: %s\n", s1);
}
