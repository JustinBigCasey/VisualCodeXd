#include <stdio.h>

void nhaparr(int a[], int n);
void xuatarr(int a[], int n);

int sumNonPosarr(int a[], int n);

int main()
{
	int a[100];
	int n;

	printf("Input n: ");
	scanf("%d", &n);

	nhaparr(a, n);
	xuatarr(a, n);

	printf("\n\nsum non-positive = %d", sumNonPosarr(a, n));

	return 0;
}

void nhaparr(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("Input number %d: ", i + 1);
		scanf("%d", &a[i]);
	}
}

void xuatarr(int a[], int n)
{
	int i;

	printf("Numbers inputted:", n);
	for (i = 0; i < n; i++)
		printf(" %d", a[i]);
}

int sumNonPosarr(int a[], int n)
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		if (a[i] < 0)
			sum += a[i];
	}

	return sum;
}
