#include <stdio.h>

void isPalindrome(int num);

int main()
{

    int number;

    printf("Input a number: ");
    scanf("%d", &number);

    isPalindrome(number);

    return 0;
}

void isPalindrome(int num)
{
    int save, rev = 0;

    save = num;
    while (num != 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    if (save == rev)
        printf("%d is Palindrome\n", save);

    else
        printf("%d is NOT Palindrome\n", save);
}
