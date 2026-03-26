#include <stdio.h>

int main()
{
    int n, bina[32], i = 0;

    printf("Input decimal: ");
    scanf("%d", &n);

    while (n > 0)
    {
        bina[i++] = n % 2;
        n /= 2;
    }

    printf("Binary = ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", bina[j]);
    }
    return 0;
}
