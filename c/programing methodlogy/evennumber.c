#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Enter numbers: ");
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            printf("%d is the first even number\n", n);
            break;
        }

    } while (1);

    return 0;
}