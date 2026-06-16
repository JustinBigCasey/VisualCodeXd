#include <stdio.h>

long long factorial(int n);
double cau_a(int n);
int cau_b(int n);
long long cau_c(int n);
long long cau_d(int n);

int main()
{
	int n;

	printf("Input n: ");
	scanf("%d", &n);

	if (n < 1)
	{
		printf("n must be >= 1\n");
		return 1;
	}

	printf("\na) Sum(i/2) = %.2lf\n", cau_a(n));
	printf("b) Sum(2i + 1) = %d\n", cau_b(n));
	printf("c) Sum(i! + 1) = %lld\n", cau_c(n));
	printf("d) Product(i!) = %lld\n", cau_d(n));

	return 0;
}

long long factorial(int n)
{
	long long gt = 1;
	int i;

	for (i = 1; i <= n; i++)
		gt *= i;

	return gt;
}

double cau_a(int n)
{
	double sum = 0;
	int i;

	for (i = 1; i <= n; i++)
		sum += (double)i / 2;

	return sum;
}

int cau_b(int n)
{
	int sum = 0;
	int i;
	for (i = 1; i <= n; i++)
		sum += (2 * i + 1);

	return sum;
}

long long cau_c(int n)
{
	long long sum = 0;
	int i;

	for (i = 1; i <= n; i++)
		sum += factorial(i) + 1;

	return sum;
}

long long cau_d(int n)
{
	long long product = 1;
	int i;

	for (i = 1; i <= n; i++)
		product *= factorial(i);

	return product;
}