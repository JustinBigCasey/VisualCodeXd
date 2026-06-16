#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, sum, save, digits = 0;

    do
    {
        printf("Input number: ");
        scanf("%d", &n);
    } while (n <= 1);

    // for
    printf("\nArmstrong number For: ");
    for (i = 1; i <= n; i++)
    {

        digits = 0;
        for (save = i; save != 0; save /= 10)
            digits++;

        sum = 0;
        for (save = i; save != 0; save /= 10)
        {
            sum += pow(save % 10, digits);
        }

        if (sum == i)
            printf("%d ", i);
    }

    // while
    printf("\n\nArmstrong numbers While: ");
    i = 1;
    while (i <= n)
    {
        save = i;
        digits = 0;
        while (save != 0)
        {
            digits++;
            save /= 10;
        }

        save = i;
        sum = 0;
        while (save != 0)
        {
            sum += pow(save % 10, digits);
            save /= 10;
        }

        if (sum == i)
            printf("%d ", i);

        i++;
    }

    // do while
    printf("\n\nArmstrong numbers Do While: ");
    i = 1;
    do
    {
        save = i;
        digits = 0;
        do
        {
            digits++;
            save /= 10;
        } while (save != 0);

        save = i;
        sum = 0;
        do
        {
            sum += pow(save % 10, digits);
            save /= 10;
        } while (save != 0);

        if (sum == i)
            printf("%d ", i);

        i++;

    } while (i <= n);

    return 0;
}
