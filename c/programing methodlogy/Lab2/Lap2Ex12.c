#include <stdio.h>

int main()
{
    int n, prime, i;

    do
    {
        printf("Input number: ");
        scanf("%d", &n);
    } while (n <= 0);

    if (n == 1)
        prime = 0;

    else
    {
        for (i = 2; i * i <= n; i++)
        {

            if (n % i == 0)
            {
                prime = 0;
                break;
            }

            else
                prime = 1;
        }
    }

    if (prime)
        printf("%d is Prime\n", n);

    else
        printf("%d is NOT Prime\n", n);

    return 0;
}