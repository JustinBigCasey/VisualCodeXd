#include <stdio.h>

int sumPos(int n);

int main()
{
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    printf("tong so nguyen: %d", sumPos(n));

    return 0;
}

int sumPos(int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
        sum += i;

    return sum;
}