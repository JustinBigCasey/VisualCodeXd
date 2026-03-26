#include <stdio.h>

void nhaparr(int a[], int n);
void xuatarr(int a[], int n);

void countFrequ(int a[], int n);

int main()
{
    int a[100];
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    nhaparr(a, n);

    printf("Original array:");
    xuatarr(a, n);

    countFrequ(a, n);

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

void countFrequ(int a[], int n)
{
    int i, j;
    int count = 0;
    int appearedBefore;

    printf("\n\nFrequency of each elements:\n");

    for (i = 0; i < n; i++)
    {
        appearedBefore = 0;

        for (j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                appearedBefore = 1;
                break;
            }
        }

        if (appearedBefore)
            continue;

        count = 0;

        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j])
                count++;
        }
        printf("%d appears %d times\n", a[i], count);
    }
}