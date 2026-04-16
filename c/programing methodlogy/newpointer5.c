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

        if (highest < n)
        {
            *p = n;
            printf("Highest number so far: %d\n", highest);
        }

        else
        {
            printf("%d is not higher than %d\n", n, highest);
        }
    }

    return 0;
}