#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

float total = 500;

void verify();
void withdraw();
void deposit();
void show();
void help();

int main()
{
    int accept;
    char buffer[100];

    verify();

    printf("\n  !  WELCOME TO REAL BANK  ! \n");

    printf("\n  ======= REAL BANK ======\n");

    help();

    while (1)
    {
        printf("Enter command: ");
        fgets(buffer, sizeof(buffer), stdin);

        if (sscanf(buffer, "%d", &accept) == 1)
        {
            switch (accept)
            {
            case 1:
                deposit();
                break;

            case 2:
                withdraw();
                break;

            case 3:
                show();
                break;

            case 4:
                help();
                break;

            case 5:
                printf("GOODBYE! SEE YOU AGAIN! \n");
                return 0;

            default:
                printf("Invalid input! Please enter in (1, 2, 3, 4, 5)\n");
                break;
            }
        }

        else
        {
            printf("Invalid input! Please enter in (1, 2, 3, 4, 5)\n");
        }
    }

    return 0;
}

void verify()
{
    bool running = true;
    int password, wrong = 0;
    char buffer[100];

    while (1)
    {
        printf("Enter password: ");
        fgets(buffer, sizeof(buffer), stdin);
        if (sscanf(buffer, "%d", &password) == 1 && password == 6969)
        {
            break;
        }

        else
        {
            wrong += 1;
            printf("\n ! Wrong password %d times ! \n\n", wrong);

            if (wrong >= 3)
            {
                printf("You entered wrong 3 times");
                exit(1);
            }
        }
    }
}

void withdraw()
{
    char buffer[100];
    float withdraw_amount;

    while (1)
    {
        printf("Enter withdraw amount (or 'q' to back): $");
        fgets(buffer, sizeof(buffer), stdin);

        if (sscanf(buffer, "%f", &withdraw_amount) == 1 && withdraw_amount > 0 && withdraw_amount <= total)
        {
            total -= withdraw_amount;
            printf("You withdrew $%2.f | Total Balance: [$%2.f] \n", withdraw_amount, total);
        }

        else if (buffer[0] == 'q' || buffer[0] == 'Q')
        {
            printf("\nWithdraw cancelled.\n\n");
            return;
        }

        else
        {
            printf(" Insufficient funds! Please enter valid amount to withdraw or 'q' to back\n");
        }
    }
}

void deposit()
{
    char buffer[100];
    float deposit_amount;

    while (1)
    {
        printf("Enter withdraw amount (or 'q' to back): $");
        fgets(buffer, sizeof(buffer), stdin);

        if (sscanf(buffer, "%f", &deposit_amount) == 1 && deposit_amount > 0)
        {
            total += deposit_amount;
            printf("You deposited $%2.f | Total Balance: [$%2.f] \n", deposit_amount, total);
        }

        else if (buffer[0] == 'q' || buffer[0] == 'Q')
        {
            printf("\nDeposit cancelled.\n\n");
            return;
        }

        else
        {
            printf(" Insufficient funds! Please enter valid amount to deposit or 'q' to back\n");
        }
    }
}

void help()
{

    printf("---------------------------\n");
    printf("1. Deposit Money\n");
    printf("2. Withdraw Money\n");
    printf("3. Show Balance\n");
    printf("4. Show Help\n");
    printf("5. Exit\n");
    printf("---------------------------\n");
}

void show()
{
    printf("\n=== ACCOUNT BALANCE ===\n");
    printf("\nTotal Balance: $%.2f\n", total);
}