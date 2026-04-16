#include <stdio.h>

// password cần chiều dài tối thiểu 8 kí tự có số có chữ in hoa có chữ thường có kí tự đặc biệt
int checkPassword(char password[]);

int main(void)
{
    char password[100];

    do
    {
        printf("Input password: ");
        fgets(password, 100, stdin);
    } while (password[0] == '\n');

    printf("Password is %s", password);

    return 0;
}

int checkPassword(char password[])
{
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
    int i = 0;

    while (password[i] != '\0')
    {
        if (password[i] >= 'A' && password[i] <= 'Z')
            hasUpper = 1;
        else if (password[i] >= 'a' && password[i] <= 'z')
            hasLower = 1;
        else if (password[i] >= '0' && password[i] <= '9')
            hasDigit = 1;
        else
            hasSpecial = 1;

        i++;
    }

    if (i < 8)
        return 0;
    if (!hasUpper || !hasLower || !hasDigit || !hasSpecial)
        return 0;

    return 1;
}