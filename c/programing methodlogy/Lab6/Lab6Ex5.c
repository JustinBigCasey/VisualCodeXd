#include <stdio.h>

int countDigit(int n);

int main()
{
	int n;

	printf("Input n: ");
	scanf("%d", &n);

	if (n < 0)
		printf("Please input a positive number");

	else
		printf("Number digit of %d is %d", n, countDigit(n));

	return 0;
}

int countDigit(int n)
{
	if (n == 0)
		return 0;

	return 1 + countDigit(n / 10);
}