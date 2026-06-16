#include <stdio.h>

int main()
{
    int n, save, rev = 0;

    printf("Input number: ");
    scanf("%d", &n);

    save = n;

    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if (save == rev)
        printf("%d is Palindrome\n", save);
    else
        printf("%d is NOT Palindrome\n", save);

    return 0;
}
