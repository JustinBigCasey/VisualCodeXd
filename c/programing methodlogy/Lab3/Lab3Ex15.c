#include <stdio.h>

void primeNumber(int num);

int main()
{
    int number;
    printf("Input a number: ");
    scanf("%d", &number);

    primeNumber(number);

    return 0;
}

void primeNumber(int num)
{
    printf("\nPrime numbers to %d: ", num);
    int i, j, prime;
    for (i = 2; i <= num; i++)
    {
        prime = 1;
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d ", i);
    }
}