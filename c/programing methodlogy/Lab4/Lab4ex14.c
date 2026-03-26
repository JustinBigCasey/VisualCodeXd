#include <stdio.h>

void nhaparr(int a[], int n);
void xuatarr(int a[], int n);

void searchKey(int a[], int n, int key);

int main()
{
    int a[100];
    int n, key;

    printf("Input n: ");
    scanf("%d", &n);

    nhaparr(a, n);

    printf("\nArray:");
    xuatarr(a, n);

    printf("\nInput key to search: ");
    scanf("%d", &key);

    searchKey(a, n, key);

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

void searchKey(int a[], int n, int key)
{
    int i;
    int found = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("\nKey found at %d", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("\nKey not found");
}