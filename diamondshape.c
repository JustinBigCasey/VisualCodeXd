#include <stdio.h>

int main()
{
    int rows;
    char symbol;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter a symbol to use: ");
    scanf(" %c", &symbol);

    for (int i = 1; i <= rows; i++)
    {

        for (int j = i; j < rows; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (i * 2 - 1); j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }

        for (int j = (rows * 2 - 1); j >= (i * 2 - 1); j--)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}
