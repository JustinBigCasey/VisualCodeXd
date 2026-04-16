#include <stdio.h>

int isNumber(char c);
int countNumber(char s[]);

int main()
{
    char s[100];
    int count;

    printf("Input string with number: ");
    fgets(s, 100, stdin);

    count = countNumber(s);

    if (count > 0)
    {
        printf("There is a number\n");
        printf("Numbers in string: %d", count);
    }
    else
        printf("There is NO number");

    return 0;
}

int isNumber(char c)
{
    if (c >= '0' && c <= '9')
        return 1;

    else
        return 0;
}

int countNumber(char s[])
{
    int count = 0, i = 0;

    while (s[i] != '\0')
    {
        if (isNumber(s[i]))
            count++;

        i++;
    }

    return count;
}