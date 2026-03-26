#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Input number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        printf("%d is a Perfect number\n", n);
    }
    else
    {
        printf("%d is Not Perfect\n", n);
    }
    return 0;
}