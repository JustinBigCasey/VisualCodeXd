#include <stdio.h>

int main()
{
    int n;

    printf("input: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("This number > 0");
    }

    else
    {
        if (n == 0)
        {
            printf("This number = 0");
        }

        else
        {
            printf("This number < 0");
        }
    }

    return 0;
}