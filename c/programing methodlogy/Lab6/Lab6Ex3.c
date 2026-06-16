#include <stdio.h>

int power2n(int n);

int main()
{
	int n;

	printf("Input n: ");
	scanf("%d", &n);

	printf("power 2^%d = %d", n, power2n(n));

	return 0;
}

int power2n(int n)
{
	if (n == 0)
		return 1;

	return 2 * power2n(n - 1);
}