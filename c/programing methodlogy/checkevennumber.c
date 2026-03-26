#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            printf("%d is an even number.\n", n);
        }
        else
        {
            continue;
        }
    } while (1);

    return 0;
}