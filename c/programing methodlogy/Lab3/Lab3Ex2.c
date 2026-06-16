#include <stdio.h>
#include <math.h>

int sumOdd(int);

int main()
{
	int n;

	do
	{
		printf("Input n: ");
		scanf("%d", &n);
	} while (n < 0);

	printf("sum of all odd numbers: %d", sumOdd(n));

	return 0;
}

int sumOdd(int num)
{
	int i, sum = 0;

	for (i = 1; i <= num; i += 2)
		sum += i;

	return sum;
}
