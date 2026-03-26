#include <stdio.h>

void nhapMatrix(int a[][100], int r, int c);
void xuatMatrix(int a[][100], int r, int c);

void multiplyMatrix(int a[][100], int b[][100], int cMat[][100], int r1, int c1, int r2, int c2);

int main()
{
    int a[100][100], b[100][100], cMat[100][100];
    int r1, c1, r2, c2;

    printf("Input rows for matrix A: ");
    scanf("%d", &r1);

    printf("Input columns for matrix A: ");
    scanf("%d", &c1);

    printf("Input rows for matrix B: ");
    scanf("%d", &r2);

    printf("Input columns for matrix B: ");
    scanf("%d", &c2);

    if (c1 != r2)
    {
        printf("Cannot multiply matrices!");
        return 0;
    }

    printf("\nInput matrix A:\n");
    nhapMatrix(a, r1, c1);

    printf("\nInput matrix B:\n");
    nhapMatrix(b, r2, c2);

    printf("\nMatrix A:");
    xuatMatrix(a, r1, c1);

    printf("\nMatrix B:");
    xuatMatrix(b, r2, c2);

    multiplyMatrix(a, b, cMat, r1, c1, r2, c2);

    printf("\nMutiply matrix:");
    xuatMatrix(cMat, r1, c2);

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

void multiplyMatrix(int a[][100], int b[][100], int cMat[][100],
                    int r1, int c1, int r2, int c2)
{
    int i, j, k;

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cMat[i][j] = 0;

            for (k = 0; k < c1; k++)
            {
                cMat[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}