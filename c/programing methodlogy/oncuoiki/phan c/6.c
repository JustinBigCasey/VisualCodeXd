#include <stdio.h>

float averagePos(int n);

int main()
{
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    printf("trung binh cong: %.2f", averagePos(n));

    return 0;
}

float averagePos(int n)
{
    int i, sum = 0;

    for (i = 0; i <= n; i++)
        sum += i;

    return (float)sum / n;
}