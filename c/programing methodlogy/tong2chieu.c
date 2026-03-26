#include <stdio.h>

// cho nhập giá trị mảng a b bằng cách gọi hàm và tính tổng c = a + b
// khai báo mảng d 1 chiều kích thước bằng ma trận đổ hết giá trị a vào
// khai báo mảng e 2 chiều kích thước bằng xong lấy giá trị d qua mảng e
// lấy từng phần tử a so sánh phần tử e

void nhapMatrix(int a[][100], int row, int column);
void xuatMatrix(int a[][100], int row, int column);
void congMatrix(int a[][100], int b[][100], int c[][100], int row, int column);
void doi1Matrix(int a[][100], int b[], int row, int column);
void doi2Matrix(int a[], int b[][100], int row, int column);
void equal12Matrix(int a[], int[][100], int row, int column);

int main()
{
    int column, row;
    int a[100][100], b[100][100], c[100][100], d[10000] = {0}, e[100][100];

    printf("Input rows: ");
    scanf("%d", &row);

    printf("Input columns: ");
    scanf("%d", &column);

    printf("\nInput Matrix A:\n");
    nhapMatrix(a, row, column);

    printf("\nInput Matrix B:\n");
    nhapMatrix(b, row, column);

    printf("\nMatrix A:");
    xuatMatrix(a, row, column);

    printf("\nMatrix B:");
    xuatMatrix(b, row, column);

    congMatrix(a, b, c, row, column);

    printf("\nMatrix C:");
    xuatMatrix(c, row, column);

    printf("\nMatrix D:\n");
    doi1Matrix(a, d, row, column);

    printf("\n");

    doi2Matrix(d, e, row, column);

    printf("\nMatrix E:");
    xuatMatrix(e, row, column);

    printf("");
    equal12Matrix(d, e, row, column);

    return 0;
}

void nhapMatrix(int a[][100], int row, int column)
{
    int i, j;

    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
        {
            printf("Input [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
}

void xuatMatrix(int a[][100], int row, int column)
{
    int i, j;

    printf("\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            printf("%5d", a[i][j]);

        printf("\n");
    }
}

void congMatrix(int a[][100], int b[][100], int c[][100], int row, int column)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void doi1Matrix(int a[][100], int b[], int row, int column)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            b[i * column + j] = a[i][j];
    }

    for (i = 0; i < row * column; i++)
    {
        printf("%5d", b[i]);
    }
}

void doi2Matrix(int a[], int b[][100], int row, int column)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            b[i][j] = a[i * column + j];
    }
}

void equal12Matrix(int a[], int b[][100], int row, int column)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (a[i * column + j] == b[i][j])
                printf("\n[%d][%d] (%d) = [%d][%d] (%d)", i, j, a[i], i, j, b[i][j]);
            else
                printf("\nDifferent at [%d][%d] (%d)/(%d)", i, j, a[i], b[i][j]);
        }
    }
}
