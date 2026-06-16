#include <stdio.h>

int sum(int n);

int main()
{
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    printf("Sum of %d is %d", n, sum(n));

    return 0;
}

int sum(int n)
{
    if (n == 0)
        return 0;

    else
        return sum(n - 1) + n;
}
