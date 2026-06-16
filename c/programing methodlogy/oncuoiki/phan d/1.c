#include <stdio.h>

long int f(int x);

int main()
{
    int x;

    printf("Input x: ");
    scanf("%d", &x);

    printf("f(x) = %ld", f(x));

    return 0;
}

long int f(int x)
{
    if (x == 1)
        return 0;
    if (x == 2)
        return 1;

    return 2 * f(x - 1) + 3 * f(x - 2);
}