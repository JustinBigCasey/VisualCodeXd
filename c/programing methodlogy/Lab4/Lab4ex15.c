#include <stdio.h>

void nhaparr(int a[], int n);
void xuatarr(int a[], int n);

void sortAscen(int a[], int n);

int main()
{
    int a[100];
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    nhaparr(a, n);

    printf("\nOriginal array:");
    xuatarr(a, n);

    sortAscen(a, n);

    printf("\nSorted ascending array:");
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

void sortAscen(int a[], int n)
{
    int i, j, temp;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}