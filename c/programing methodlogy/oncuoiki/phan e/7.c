#include <stdio.h>

void inputArr(int a[], int n);
void outputArr(int a[], int n);
int odd(int a[], int n);

int main()
{
    int n, a[100], x;

    printf("Input n: ");
    scanf("%d", &n);

    inputArr(a, n);

    printf("Array:\n");
    outputArr(a, n);

    if (odd(a, n) == 0)
        printf("\nThere is no even number");

    else
        printf("\nMax odd number in array: %d", odd(a, n));

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

int odd(int a[], int n)
{
    int i, max = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            if (a[i] > max)
                max = a[i];
        }
    }

    return max;
}