#include <stdio.h>

void inputArr(int a[], int n);
void outputArr(int a[], int n);
void findx(int a[], int n, int x);

int main()
{
    int n, a[100], x;

    printf("Input n: ");
    scanf("%d", &n);

    inputArr(a, n);

    printf("Array:\n");
    outputArr(a, n);

    printf("\nInput x: ");
    scanf("%d", &x);

    findx(a, n, x);

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

void findx(int a[], int n, int x)
{
    int i;

    printf("tim thay %d vi tri: ", x);

    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
            printf("%d", i + 1);
    }
}