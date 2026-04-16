#include <stdio.h>

int main()
{
    int i, n, num, sum = 0;
    int *p;
    p = &sum;

    printf("Enter how many numbers you want to sum: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        *p += num;
    }

    printf("The sum is: %d\n", sum);

    return 0;
}