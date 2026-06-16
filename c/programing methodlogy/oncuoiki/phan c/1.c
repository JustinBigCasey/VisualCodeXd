#include <stdio.h>
#include <math.h>

int a(int n);
int b(int n);
int c(int n);
int d(int n);
int e(int n);
int f(int n);
int g(int n);

int main()
{
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    printf("a = %d\n", a(n));
    printf("b = %d\n", b(n));
    printf("c = %d\n", c(n));
    printf("d = %d\n", d(n));
    printf("e = %d\n", e(n));
    printf("f = %d\n", f(n));
    printf("g = %d\n", g(n));

    return 0;
}

int a(int n)
{
    int i, s = 1;

    for (i = 1; i <= n; i++)
        s *= i;

    return s;
}

int b(int n)
{
    int i, s = 1;

    for (i = 1; i <= n; i++)
        s += i * i;

    return s;
}

int c(int n)
{
    int i, s = 1;

    for (i = 1; i <= n; i++)
        s += i / (i + 1);

    return s;
}

int d(int n)
{
    int i, s = 1;

    for (i = 1; i <= n; i++)
        s = 2 * (i + 1);

    return s;
}

int e(int n)
{
    int i, s = 1;

    for (i = 1; i <= n; i++)
        s += sqrt(2);

    return s;
}

int f(int n)
{
    int i, s = 1;

    for (i = 1; i <= n; i++)
        s += i;

    return s;
}

int g(int n)
{
    int i, s = 1;

    for (i = 1; i <= n; i++)
        s += (3 * i - 1 / 2);

    return s;
}