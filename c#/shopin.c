#include <stdio.h>
#include <string.h>
#define MAX_ITEMS 100

int main()
{
    // SHOPPING CART
    char buffer[100];
    char name[100] = "";
    char symbol = '$';
    char items[MAX_ITEMS][100];
    float price[MAX_ITEMS];
    float total;
    int quantity[MAX_ITEMS];
    int variable_item;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Welcome %s!\n", name);

    // Variable

    while (1)
    {
        printf("How many variable item would you like to buy?: ");

        fgets(buffer, sizeof(buffer), stdin);
        if (sscanf(buffer, "%d", &variable_item) == 1 && variable_item > 0)
        {
            break;
        }

        printf("Invalid Input! Please enter whole number only.\n");
    }

    for (int i = 0; i < variable_item; i++)
    {
        printf("Enter item #%d: ", i + 1);
        fgets(items[i], sizeof(items[i]), stdin);
        items[i][strlen(items[i]) - 1] = '\0';

        while (1)
        {
            printf("Enter price for item #%d: ", i + 1);
            fgets(buffer, sizeof(buffer), stdin);
            if (sscanf(buffer, "%f", &price[i]) == 1 && price[i] > 0)
            {
                break;
            }

            printf("Invalid Input! Please enter a valid price.\n");
        }

        while (1)
        {
            printf("Enter quantity for item #%d: ", i + 1);
            fgets(buffer, sizeof(buffer), stdin);
            if (sscanf(buffer, "%d", &quantity[i]) == 1 && quantity[i] > 0)
            {
                total += price[i] * quantity[i];
                printf("You have added %d [%s] to your cart\nTotal: %c%.2f (+$%.2f)\n", quantity[i], items[i], symbol, total, price[i] * quantity[i]);
                break;
            }

            printf("Invalid Input! Please enter whole number only.\n");
        }
    }

    // SHOPPING SUMMARY

    printf("     =========== SHOPPING SUMMARY ===========\n");
    printf("--------------------------------------------------\n");
    printf("%-5s %-20s %-10s %-10s %-10s\n", "No.", "Item", "Price", "Quantity", "Total");

    for (int i = 0; i < variable_item; i++)
    {
        printf("%-5d %-20s %c%-12.2f %-8d %c%-10.2f\n", i + 1, items[i], symbol, price[i], quantity[i], symbol, price[i] * quantity[i]);
    }
    printf("--------------------------------------------------\n");
    printf("Grand Total: %c%-10.2f\n", symbol, total);
    printf("=========================================\n");
    printf("\nTHANK YOU FOR SHOPPING WITH US %s!\n", name);
    return 0;
}