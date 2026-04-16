#include <stdio.h>

void bubbleSort(int* arr, int size);

void inputArr(int a[], int n);
void outputArr(int a[], int n);

int main()
{	
	int i, n, key, a[100];
	
	printf("Input n: ");
	scanf("%d", &n);
	
	inputArr(a, n);
	
	printf("Original array: ");
	outputArr(a, n);
	
	
	printf("\nArray Bubble Sort: ");
	
	bubbleSort(a, n);
	
	for(i = 0; i < n; i++)		
		printf("%d ", a[i]);
	
	
	return 0;
}

void inputArr(int a[], int n)
{
	int i; 
	
	for(i = 0; i < n; i++)
	{		
		printf("Input number %d: " , i + 1);
		scanf("%d", &a[i]);
	}
}

void outputArr(int a[], int n)
{	
	int i;
	
	for(i = 0; i < n; i++)		
		printf("%d " , a[i]);
}

void bubbleSort(int *arr, int size)
{
	int i, limit, temp;
	
	for (limit = size - 2; limit >= 0; limit--)
	{
		
		for (i = 0; i <= limit; i++)
		{
			if (arr[i] > arr[i+1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
}