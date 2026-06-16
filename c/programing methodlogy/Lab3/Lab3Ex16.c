#include <stdio.h>
#include <math.h>

void armstrongNumber(int num);

int main()
{
    int number;
    printf("Input a number: ");
    scanf("%d", &number);

    armstrongNumber(number);

    return 0;
}

void armstrongNumber(int num)
{
    int i, save, sum, digits = 0;

    printf("\nArmstrong number from 1 to %d: ", num);

    for (i = 1; i <= num; i++)
    {

        digits = 0;
        for (save = i; save != 0; save /= 10)
            digits++;

        sum = 0;
        for (save = i; save != 0; save /= 10)
            sum += pow(save % 10, digits);

        if (sum == i)
            printf("%d ", i);
    }
}