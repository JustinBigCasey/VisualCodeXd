#include <stdio.h>

void deciToBi(int num);

int main()
{
    int number;
    printf("Input a number: ");
    scanf("%d", &number);

    deciToBi(number);

    return 0;
}

void deciToBi(int num)
{
    int biNum[32];
    int i = 0, j;

    while (num > 0)
    {
        biNum[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("\nBinary number: ");

    for (j = i - 1; j >= 0; j--)
        printf("%d", biNum[j]);
}