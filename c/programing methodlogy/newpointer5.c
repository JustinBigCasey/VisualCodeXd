#include <stdio.h>

int main()
{
    int n, highest = 0;
    int *p;

    while (1)
    {
        printf("Enter numbers: ");
        scanf("%d", &n);

        p = &highest;

        if (*p < n)
        {
            *p = n;
            printf("Highest number so far: %d\n", *p);
        }

        else
        {
            printf("%d is not higher than %d\n", n, *p);
        }
    }

    return 0;
}