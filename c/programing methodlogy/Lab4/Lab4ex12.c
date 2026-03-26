#include <stdio.h>

void nhaparr1(int a[], int n);
void nhaparr2(int b[], int n);
void xuatarr(int a[], int n);

void mergeArr(int a[], int n1, int b[], int n2, int c[], int *n3);

int main()
{
    int a[100], b[100], c[200];
    int n1, n2, n3;

    printf("Input n1: ");
    scanf("%d", &n1);

    printf("Input array 1:\n");
    nhaparr1(a, n1);

    printf("Input n2: ");
    scanf("%d", &n2);

    printf("Input array 2:\n");
    nhaparr2(b, n2);

    printf("\nArray 1:");
    xuatarr(a, n1);

    printf("\nArray 2:");
    xuatarr(b, n2);

    mergeArr(a, n1, b, n2, c, &n3);

    printf("\nMerged array:");
    xuatarr(c, n3);

    return 0;
}

void nhaparr1(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Input a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void nhaparr2(int b[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Input b[%d]: ", i);
        scanf("%d", &b[i]);
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

void mergeArr(int a[], int n1, int b[], int n2, int c[], int *n3)
{
    int i;

    for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    for (i = 0; i < n2; i++)
    {
        c[n1 + i] = b[i];
    }

    *n3 = n1 + n2;
}