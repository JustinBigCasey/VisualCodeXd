#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j, sum;

    do
    {
        printf("Input number: ");
        scanf("%d", &n);
    } while (n <= 1);

    // for
    printf("\nPerfect number For: ");
    for (i = 2; i <= n; i++)
    {
        sum = 0;
        for (j = 1; j <= i / 2; j++)
            if (i % j == 0)
                sum += j;

        if (sum == i)
            printf("%d ", i);
    }

    // while
    printf("\n\nPerfect numbers While: ");
    i = 2;
    while (i <= n)
    {
        sum = 0;
        j = 1;
        while (j <= i / 2)
        {
            if (i % j == 0)
                sum += j;
            j++;
        }

        if (sum == i)
            printf("%d ", i);

        i++;
    }

    // do while
    printf("\n\nPerfect numbers Do While: ");
    i = 2;
    do
    {
        sum = 0;
        j = 1;
        do
        {
            if (j > i / 2)
                break;
            if (i % j == 0)
                sum += j;
            j++;
        } while (1);

        if (sum == i)
            printf("%d ", i);

        i++;
    } while (i <= n);

    return 0;
}
