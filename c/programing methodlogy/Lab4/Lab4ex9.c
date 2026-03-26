#include <stdio.h>

void nhaparr(int a[], int n);
void xuatarr(int a[], int n);
void countDupli(int a[], int n);

int main()
{
    int a[100];
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    nhaparr(a, n);

    printf("Original array:");
    xuatarr(a, n);

    countDupli(a, n);

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

void countDupli(int a[], int n)
{
    int i, j;
    int count = 0;
    int isDuplicate, appearedBefore;

    for (i = 0; i < n; i++)
    {
        isDuplicate = 0;
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

        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate)
            count++;
    }

    printf("\n\nNumber of duplicated elements: %d\n", count);
}