#include <stdio.h>

void Max(int n);

int main()
{
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    Max(n);

    return 0;
}

void Max(int n)
{
    int temp = 0, max = 0;

    while (1)
    {
        temp = n % 10;
        n = n / 10;

        if (temp > max)
            max = temp;

        if (n == 0)
            break;
    }

    printf("chu so lon nhat trong n: %d", max);
}