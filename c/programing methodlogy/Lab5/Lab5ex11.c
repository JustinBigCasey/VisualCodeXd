#include <stdio.h>
#include <string.h>

void deleteChars(char s[], int pos, int n);

int main()
{
    char s[100];
    int pos, n;

    printf("Input string: ");
    fgets(s, 100, stdin);
    s[strlen(s) - 1] = '\0';

    printf("Input position: ");
    scanf("%d", &pos);

    printf("Input n: ");
    scanf("%d", &n);

    deleteChars(s, pos, n);

    return 0;
}

void deleteChars(char s[], int pos, int n)
{
    int len = strlen(s);
    int i;

    if (pos < 0 || pos >= len || n < 0)
    {
        printf("Invalid position. Please enter a position between 0 and %d.\n", len - 1);
        return;
    }

    for (i = pos; s[i + n] != '\0'; i++)
    {
        s[i] = s[i + n];
    }

    s[i] = '\0';

    printf("String after deletion: %s\n", s);
}