#include <stdio.h>

int search(int* arr, int size, int key);
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
	
	printf("\n\nInput key: ");
	scanf("%d", &key);
	
	int pos = search(a, n, key);
	
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


int search(int* arr, int size, int key)
{
	int i;
	
	for(i = 0; i < size; i++)
	{
		if(arr[i] == key) return i + 1;
	}
	
	return -1;
}