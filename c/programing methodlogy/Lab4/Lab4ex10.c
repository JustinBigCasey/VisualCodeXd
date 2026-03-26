#include <stdio.h>

void nhaparr(int a[], int n);
void xuatarr(int a[], int n);
void deleteDupli(int a[], int *n);

int main()
{
    int a[100];
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    nhaparr(a, n);

    printf("Original array:");
    xuatarr(a, n);

    deleteDupli(a, &n);

    printf("\n\nArray deleted duplicated elements:");
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

void deleteDupli(int a[], int *n)
{
    int i, j, k;

    for (i = 0; i < *n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                for (k = i; k < *n - 1; k++)
                {
                    a[k] = a[k + 1];
                }

                (*n)--;
                i--;
                break;
            }
        }
    }
}