#include <stdio.h>

int main()
{
    int n, total;

    printf("Enter your KW: ");
    scanf("%d", &n);

    if (n <= 50)
    {
        total = n * 1000;
        printf("Total: %d VND", total);
    }

    else if (n <= 100)
    {
        total = n * 2000;
        printf("Total: %d VND", total);
    }

    else if (n <= 150)
    {
        total = n * 3000;
        printf("Total: %d VND", total);
    }

    else if (n <= 200)
    {
        total = n * 4000;
        printf("Total: %d VND", total);
    }

    else
    {
        total = n * 5000;
        printf("Total: %d VND", total);
    }

    return 0;
}