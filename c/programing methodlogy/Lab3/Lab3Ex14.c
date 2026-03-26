#include <stdio.h>

void isPerfect(int num);

int main()
{
    int number;
    printf("Input a number: ");
    scanf("%d", &number);

    isPerfect(number);

    return 0;
}

void isPerfect(int num)
{
    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);
}