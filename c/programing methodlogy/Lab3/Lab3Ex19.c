#include <stdio.h>

int Factorial(int n);

int main()
{
    int n;

    do
    {
        printf("Input a number: ");
        scanf("%d", &n);
    } while (n < 0);

    printf("Factorial of %d = %lld\n", n, Factorial(n));

    return 0;
}

int Factorial(int n)
{
    long long fac = 1;

    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }

    return fac;
}