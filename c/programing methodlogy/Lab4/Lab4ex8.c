#include <stdio.h>

void nhaparr(int a[], int n);
void xuatarr(int a[], int n);

void deletePos(int a[], int *n, int pos);

int main()
{
	int a[100];
	int n, pos;

	printf("Input n: ");
	scanf("%d", &n);

	nhaparr(a, n);

	printf("\nOriginal array:");
	xuatarr(a, n);

	printf("\nInput position to delete: ", n);
	scanf("%d", &pos);

	deletePos(a, &n, pos);

	printf("\nArray after delete:");
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
	{
		printf(" %d", a[i]);
	}
}

void deletePos(int a[], int *n, int pos)
{
	int i;

	if (pos < 1 || pos > *n)
	{
		printf("\nInvalid position!");
		return;
	}

	for (i = pos - 1; i < *n - 1; i++)
	{
		a[i] = a[i + 1];
	}

	(*n)--;
}