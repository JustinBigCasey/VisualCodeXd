#include <stdio.h>

int main()
{
    int n;
    long long fac = 1;

    do
    {
        printf("Input number: ");
        scanf("%d", &n);
    } while (n < 0);

    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    printf("Factorial = %lld", fac);
    return 0;
}
