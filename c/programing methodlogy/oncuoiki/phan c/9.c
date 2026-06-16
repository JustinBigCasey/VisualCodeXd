#include <stdio.h>

int perfectNum(int n);

int main()
{
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    if (perfectNum(n) == 1)
        printf("%d la so hoan thien", n);
    else
        printf("%d khong phai la so hoan thien", n);

    return 0;
}

int perfectNum(int n)
{
    int i, sum = 0;

    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}