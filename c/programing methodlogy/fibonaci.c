#include <stdio.h>

int fibonaci(int n);

int main()
{
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    printf("Fibonaci of %d is %d", n, fibonaci(n));

    return 0;
}

int fibonaci(int n)
{
    if (n < 2)
        return n;

    else
        return fibonaci(n - 1) + fibonaci(n - 2);
}
