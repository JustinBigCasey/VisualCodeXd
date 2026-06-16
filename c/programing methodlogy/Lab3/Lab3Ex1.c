#include <stdio.h>
#include <math.h>

int sumEven(int);

int main()
{
	int n;

	do
	{
		printf("Input n: ");
		scanf("%d", &n);
	} while (n < 0);

	printf("sum of all even numbers: %d", sumEven(n));

	return 0;
}

int sumEven(int n)
{
	int i, sum = 0;

	for (i = 0; i <= n; i += 2)
		sum += i;

	return sum;
}
