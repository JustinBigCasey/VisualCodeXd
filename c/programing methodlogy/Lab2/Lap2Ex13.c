#include <stdio.h>
#include <math.h>

int main()
{
    int n, save, sum, digits = 0;

    printf("Input number: ");
    scanf("%d", &n);

    save = n;
    while (save)
    {
        digits++;
        save /= 10;
    }

    save = n;
    while (save)
    {
        sum += pow(save % 10, digits);
        save /= 10;
    }

    if (sum == n)
    {
        printf("%d is Armstrong\n", n);
    }
    else
    {
        printf("%d is NOT Armstrong\n", n);
    }
    return 0;
}
