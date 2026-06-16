#include <stdio.h>

int leastMul(int a, int b);

int main()
{
    int a, b;

    printf("Input a: ");
    scanf("%d", &a);

    printf("Input b: ");
    scanf("%d", &b);

    printf("Boi chung nho nhat: %d", leastMul(a, b));

    return 0;
}

int leastMul(int a, int b)
{
    int max;

    max = (a > b) ? a : b;

    while (1)
    {
        if (max % a == 0 && max % b == 0)
            return max;

        max++;
    }
}