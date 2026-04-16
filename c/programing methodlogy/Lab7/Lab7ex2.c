#include <stdio.h>

void selectionSort(int* arr, int size);
int bsearch(int* arr, int size, int key);

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
	
	
	printf("\nSorted array: ");
	
	selectionSort(a, n);
	
	for(i = 0; i < n; i++)		
		printf("%d ", a[i]);
	
	printf("\n\nInput key: ");
	scanf("%d", &key);
	
	int pos = bsearch(a, n, key);
	
	if (pos == -1)
		printf("Not found %d in array", key);
		
	else
		printf("found number %d at order %d", key, pos);
	
	
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


void selectionSort(int *arr, int size)
{
	int i, start, min_index, temp;
	
	for (start = 0; start < size - 1; start++)
	{
		min_index = start;
		
		for (i = start + 1; i < size; i++)
			if (arr[i] < arr[min_index]) min_index = i;
		
		temp = arr[start];
		arr[start] = arr[min_index];
		arr[min_index] = temp;
	}
}

int bsearch(int* arr, int size, int key)
{
	int low = 0, high = size - 1;
	
	while (low <= high)
	{
		int mid = (low + high)/2;
		
		if (key == arr[mid]) return mid + 1;
		
		else if(key > arr[mid]) low = mid + 1;
		
		else high = mid - 1;
	}
	
	return -1;
}
