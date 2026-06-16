#include <stdio.h>

void PerfectNumber(int num);

int main()
{
    int number;
    printf("Input a number: ");
    scanf("%d", &number);

    PerfectNumber(number);

    return 0;
}

void PerfectNumber(int num)
{
    printf("\nPerfect numbers to %d: ", num);
    int i, j, sum;
    for (i = 1; i <= num; i++)
    {
        sum = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
                sum += j;
        }

        if (sum == i)
            printf("%d ", i);
    }
}