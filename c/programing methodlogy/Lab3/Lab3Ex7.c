#include <stdio.h>

int productDigit(int num);

int main()
{

	int number;

	printf("Input a number: ");
	scanf("%d", &number);

	printf("Product of digits: %d", productDigit(number));

	return 0;
}

int productDigit(int num)
{
	int product = 1;

	while (num != 0)
	{
		product *= num % 10;
		num /= 10;
	}

	return product;
}
