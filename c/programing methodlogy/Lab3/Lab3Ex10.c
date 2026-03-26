#include <stdio.h>
#include <math.h>

int swapNumber(int num);

int main()
{

    int number;

    printf("Input a number: ");
    scanf("%d", &number);

    printf("Number of swap number: %d", swapNumber(number));

    return 0;
}

int swapNumber(int num)
{
    int swap = 0;

    while (num != 0)
    {
        swap = swap * 10 + num % 10;
        num /= 10;
    }

    return swap;
}
