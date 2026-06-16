#include <stdio.h>

void inputArr(int a[], int n);
void outputArr(int a[], int n);
int even(int a[], int n);

int main()
{
    int n, a[100], x;

    printf("Input n: ");
    scanf("%d", &n);

    inputArr(a, n);

    printf("Array:\n");
    outputArr(a, n);

    if (even(a, n) == -1)
        printf("\nThere is no even number");

    else
        printf("\nFirst even number in array at %d", even(a, n));

    return 0;
}

void inputArr(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Input a[%d]: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void outputArr(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int even(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            return i;
    }

    return -1;
}