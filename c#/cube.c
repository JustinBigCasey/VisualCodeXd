#include <stdio.h>

int main()
{
    int side, i, j;
    char symbol1 = '#';
    char symbol2 = '&';
    char symbol3 = '+';

    printf("Enter the length of the cube's side: ");
    scanf("%d", &side);

    // Print the top part of the cube
    for (int i = 1; i <= (side - (side / 2) - 1); i++)
    {
        // Print leading spaces
        for (int j = i; j < (side / 2); j++)
        {
            printf("  ");
        }

        // Print the left side of the cube
        for (int j = 0; j < side; j++)
        {
            printf("%c ", symbol1);
        }

        // Print the right side of the cube
        for (int j = 1; j <= (i); j++)
        {
            printf("%c ", symbol3);
        }

        printf("\n");
    }

    // Print the middle part of the cube
    for (int i = 1; i <= side; i++)
    {
        // Print the left side of the cube
        for (int j = 0; j < side; j++)
        {
            printf("%c ", symbol2);
        }

        // Print the right side of the cube
        if (side % 2 == 0)
        {
            for (int j = side; j >= (i); j--)
            {
                if ((i > side / 2) - 1)
                {
                    continue;
                }
                else
                {
                    printf("%c ", symbol3);
                }
            }
        }

        else
        {
            for (int j = side; j >= (i); j--)
            {
                if (i < ((side / 2) + 2))
                {
                    continue;
                }

                else
                {
                    printf("%c ", symbol3);
                }
            }
        }
        // Adjust spacing for even and odd side lengths
        if (side % 2 == 0)
        {
            for (int h = 0; h <= (side - (side / 2) - 1); h++)
            {

                if (i > side / 2)
                {
                    continue;
                }

                else
                {
                    printf("%c ", symbol3);
                }
            }
        }
        else
        {
            for (int h = 0; h <= (side - (side / 2) - 2); h++)
            {

                if (i > ((side / 2) + 1))
                {
                    continue;
                }

                else
                {
                    printf("%c ", symbol3);
                }
            }
        }

        printf("\n");
    }

    return 0;
}