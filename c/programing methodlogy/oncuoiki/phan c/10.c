#include <stdio.h>

int evenAll(int n);

int main()
{
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    if (evenAll(n) == 1)
        printf("%d la so toan chan", n);
    else
        printf("%d khong phai la so toan chan", n);

    return 0;
}

int evenAll(int n)
{
    int temp = 0, max = 0;

    while (1)
    {
        temp = n % 10;
        n = n / 10;

        if (n == 0 || temp % 2 == 1)
            return 0;
        else
            return 1;
    }
}