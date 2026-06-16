#include <stdio.h>
#include <math.h>

int main()
{
    int n, save, sum = 0, digits = 0;

    printf("Input number: ");
    scanf("%d", &n);

    digits = log10(n) + 1;

    save = n;
    while (save)
    {
        sum += pow(save % 10, digits);
        save /= 10;
    }

    if (sum == n)
        printf("%d is Armstrong\n", n);

    else
        printf("%d is NOT Armstrong\n", n);

    return 0;
}
