#include <stdio.h>

void inputArr(int a[], int n);
void outputArr(int a[], int n);
int maxArr(int a[], int n);

int main()
{
	int a[100], n;

	printf("Input n: ");
	scanf("%d", &n);

	inputArr(a, n);

	printf("Array: ");
	outputArr(a, n);

	printf("\n\nMax number in Array = %d", maxArr(a, n));

	return 0;
}

void inputArr(int a[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("Inpurt number #%d: ", i + 1);
		scanf("%d", &a[i]);
	}
}

void outputArr(int a[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}

int maxArr(int a[], int n)
{
	int i, max = 0;

	for (i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}

	return max;
}