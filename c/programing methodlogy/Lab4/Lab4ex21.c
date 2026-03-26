#include <stdio.h>

void nhapMatrix(int a[][100], int n);
void xuatMatrix(int a[][100], int n);

int determinant(int a[][100], int n);

int main()
{
    int a[100][100];
    int n;

    printf("Input order of square matrix: ");
    scanf("%d", &n);

    printf("\nInput matrix:\n");
    nhapMatrix(a, n);

    printf("\nMatrix:");
    xuatMatrix(a, n);

    printf("\nDeterminant = %d", determinant(a, n));

    return 0;
}

void nhapMatrix(int a[][100], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            printf("Input [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
}

void xuatMatrix(int a[][100], int n)
{
    int i, j;
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}

int determinant(int a[][100], int n)
{
    int det = 0;
    int sub[100][100];
    int sign = 1;
    int i, j, subi, subj;

    if (n == 1)
        return a[0][0];

    if (n == 2)
        return a[0][0] * a[1][1] - a[0][1] * a[1][0];

    for (int col = 0; col < n; col++)
    {
        subi = 0;

        for (i = 1; i < n; i++)
        {
            subj = 0;
            for (j = 0; j < n; j++)
            {
                if (j == col)
                    continue;

                sub[subi][subj] = a[i][j];
                subj++;
            }
            subi++;
        }

        det += sign * a[0][col] * determinant(sub, n - 1);
        sign = -sign;
    }

    return det;
}