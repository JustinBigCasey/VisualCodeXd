#include <stdio.h>

int sum3(int n);

int main()
{
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    printf("tong chia het 3: %d", sum3(n));

    return 0;
}

int sum3(int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
    {
        if (i % 3 == 0)
            sum += i;
    }

    return sum;
}