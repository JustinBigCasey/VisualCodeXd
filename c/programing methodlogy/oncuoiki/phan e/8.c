#include <stdio.h>

void inputArr(int a[], int n);
void outputArr(int a[], int n);
int sum35(int a[], int n);

int main()
{
    int n, a[100], x;

    printf("Input n: ");
    scanf("%d", &n);

    inputArr(a, n);

    printf("Array:\n");
    outputArr(a, n);

    printf("\n\nsum 3 5: %d", sum35(a, n));

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

int sum35(int a[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0 && a[i] % 5 == 0)
            sum += a[i];
    }

    return sum;
}