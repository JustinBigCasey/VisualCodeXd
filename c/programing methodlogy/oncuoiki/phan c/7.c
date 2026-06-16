#include <stdio.h>

void Palin(int n);

int main()
{
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    Palin(n);

    return 0;
}

void Palin(int n)
{
    int rev = 0, temp;
    int original = n;

    while (1)
    {
        temp = n % 10;
        n = n / 10;
        rev = rev * 10 + temp;

        if (n == 0)
            break;
    }

    if (rev == original)
        printf("%d la so doi xuong.\n", original);

    else
        printf("%d khong phai la so doi xuong.\n", original);
}