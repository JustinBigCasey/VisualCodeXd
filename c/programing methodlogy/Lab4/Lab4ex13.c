#include <stdio.h>

void nhaparr(int a[], int n);
void xuatarr(int a[], int n);

void splitArr(int a[], int n, int odd[], int *nOdd, int even[], int *nEven);

int main()
{
    int a[100];
    int odd[100];
    int even[100];
    int n, nOdd = 0, nEven = 0;

    printf("Input n: ");
    scanf("%d", &n);

    nhaparr(a, n);

    printf("\nOriginal array:");
    xuatarr(a, n);

    splitArr(a, n, odd, &nOdd, even, &nEven);

    printf("\nOdd array:");
    xuatarr(odd, nOdd);

    printf("\nEven array:");
    xuatarr(even, nEven);

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

void splitArr(int a[], int n, int odd[], int *nOdd, int even[], int *nEven)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[*nEven] = a[i];
            (*nEven)++;
        }

        else
        {
            odd[*nOdd] = a[i];
            (*nOdd)++;
        }
    }
}