#include <stdio.h>

void nhapMatrix(int a[][100], int r, int c);
void xuatMatrix(int a[][100], int r, int c);

void addMatrix(int a[][100], int b[][100], int cMat[][100], int r, int c);

int main()
{
    int a[100][100], b[100][100], cMat[100][100];
    int r, c;

    printf("Input number of rows: ");
    scanf("%d", &r);

    printf("Input number of columns: ");
    scanf("%d", &c);

    printf("\nInput matrix A:\n");
    nhapMatrix(a, r, c);

    printf("\nInput matrix B:\n");
    nhapMatrix(b, r, c);

    printf("\nMatrix A:");
    xuatMatrix(a, r, c);

    printf("\nMatrix B:");
    xuatMatrix(b, r, c);

    addMatrix(a, b, cMat, r, c);

    printf("\nSum matrix:");
    xuatMatrix(cMat, r, c);

    return 0;
}

void nhapMatrix(int a[][100], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Input element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void xuatMatrix(int a[][100], int r, int c)
{
    int i, j;
    printf("\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int a[][100], int b[][100], int cMat[][100], int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cMat[i][j] = a[i][j] + b[i][j];
        }
    }
}