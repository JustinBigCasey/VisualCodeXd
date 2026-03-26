#include <stdio.h>

void nhapMatrix(int a[][100], int r, int c);
void xuatMatrix(int a[][100], int r, int c);

void transposeMatrix(int a[][100], int t[][100], int r, int c);

int main()
{
    int a[100][100], t[100][100];
    int r, c;

    printf("Input rows: ");
    scanf("%d", &r);

    printf("Input columns: ");
    scanf("%d", &c);

    printf("\nInput matrix:\n");
    nhapMatrix(a, r, c);

    printf("\nOriginal matrix:");
    xuatMatrix(a, r, c);

    transposeMatrix(a, t, r, c);

    printf("\nTranspose matrix:");
    xuatMatrix(t, c, r);

    return 0;
}

void nhapMatrix(int a[][100], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            printf("Input [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
}

void xuatMatrix(int a[][100], int r, int c)
{
    int i, j;
    printf("\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}

void transposeMatrix(int a[][100], int t[][100], int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            t[j][i] = a[i][j];
}