#include <stdio.h>

void nhaparr(int a[], int n);
void xuatarr(int a[], int n);
void reverse(int a[], int n);

int main()
{
	int a[100];
	int n;

	printf("Input n: ");
	scanf("%d", &n);

	nhaparr(a, n);

	printf("original array:", n);
	xuatarr(a, n);

	reverse(a, n);

	printf("\nreverse array:", n);
	xuatarr(a, n);

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

	for (i = 0; i < n; i++)
		printf(" %d", a[i]);
}

void reverse(int a[], int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - i - 1] = temp;
	}
}
