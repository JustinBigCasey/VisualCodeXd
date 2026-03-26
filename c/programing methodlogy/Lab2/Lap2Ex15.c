#include <stdio.h>

int main()
{
    int n, i, j, prime;

    do
    {
        printf("Input number: ");
        scanf("%d", &n);
    } while (n <= 1);

    // for
    printf("\nPrime numbers For: ");
    for (i = 2; i <= n; i++)
    {
        prime = 1;
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d ", i);
    }

    // while
    printf("\n\nPrime numbers While: ");
    i = 2;
    while (i <= n)
    {
        prime = 1;
        j = 2;
        while (j * j <= i)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
            j++;
        }
        if (prime)
            printf("%d ", i);
        i++;
    }

    // do while
    printf("\n\nPrime numbers Do While: ");
    i = 2;
    do
    {
        prime = 1;
        j = 2;
        do
        {
            if (j * j > i)
                break;
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
            j++;
        } while (1);

        if (prime)
            printf("%d ", i);

        i++;
    } while (i <= n);

    return 0;
}
