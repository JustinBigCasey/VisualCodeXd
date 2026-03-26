#include <stdio.h>

int sumDigit(int num);

int main()
{
	
	
	int number;
	
	printf("Input a number: ");
	scanf("%d", &number);
	
	printf("Sum of digits: %d", sumDigit(number));

	return 0;
}

int sumDigit(int num)
{
	int sum = 0;
	while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
	
	return sum;
}
