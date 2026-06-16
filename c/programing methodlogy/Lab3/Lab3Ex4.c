#include <stdio.h>
#include <math.h>

int sumAll(int);

int main()
{
	int n;

	do
	{
		printf("Input n: ");
		scanf("%d", &n);
	} while (n < 0);

	printf("sum of all natural numbers: %d", sumAll(n));

	return 0;
}

int sumAll(int num)
{
	int i, sum = 0;

	for (i = 0; i <= num; i++)
		sum += i;

	return sum;
}
