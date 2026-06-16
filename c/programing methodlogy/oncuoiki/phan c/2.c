#include <stdio.h>

int uocEuclide(int a, int b);
int uocTru(int a, int b);

int main()
{
    int a, b;

    printf("Input a: ");
    scanf("%d", &a);

    printf("Input b: ");
    scanf("%d", &b);

    printf("\nuoc chung lon nhat la: %d\n\n", uocEuclide(a, b));
    printf("uoc chung lon nhat la: %d", uocTru(a, b));

    return 0;
}

int uocEuclide(int a, int b)
{
    int i, max;

    max = a > b ? a : b;

    for (i = max; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
            return i;
    }

    return -1;
}

int uocTru(int a, int b)
{
    // Bước 1: Xử lý trường hợp có số bằng 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // Bước 3: Lặp trừ liên tiếp cho đến khi hai số bằng nhau
    while (a != b)
    {
        if (a > b)
            a = a - b; // Nếu a lớn hơn, lấy a trừ b

        else
            b = b - a; // Nếu b lớn hơn, lấy b trừ a
    }

    // Bước 4: Khi a == b, trả về giá trị chung đó
    return a;
}