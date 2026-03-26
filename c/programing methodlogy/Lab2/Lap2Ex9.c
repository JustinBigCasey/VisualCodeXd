#include <stdio.h>
#include <math.h>

int main()
{
    int n, first, last, digits;

    printf("Input number: ");
    scanf("%d", &n);

    last = n % 10;
    digits = (int)log10(n);
    first = n / pow(10, digits);

    n = n - first * pow(10, digits) - last;
    n = last * pow(10, digits) + n + first;

    printf("Swap first and last digits = %d\n", n);
    return 0;
}
