#include <stdio.h>
#include <string.h>

int main()
{

    char buffer[100];
    char operator;
    double num1, num2, result;

    // Input first number
    while (1)
    {
        printf("Enter the first number: ");
        fgets(buffer, sizeof(buffer), stdin);
        if (sscanf(buffer, "%lf", &num1) != 1)
        {
            printf("Invalid Input! Please enter a valid number.\n");
            continue;
        }
        break;
    }

    // Input operator
    while (1)
    {
        printf("Enter an operator (+, -, *, /): ");
        fgets(buffer, sizeof(buffer), stdin);
        if (sscanf(buffer, "%c", &operator) != 1 ||
            (operator != '+' && operator != '-' && operator != '*' && operator != '/' && operator != 'q'))
        {
            printf("Invalid Input! Please enter a valid operator.\n");
            continue;
        }
        break;
    }

    // Input second number
    while (1)
    {
        printf("Enter the second number: ");
        fgets(buffer, sizeof(buffer), stdin);
        if (sscanf(buffer, "%lf", &num2) != 1)
        {
            printf("Invalid Input! Please enter a valid number.\n");
            continue;
        }
        break;
    }

    // Perform calculation based on operator
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %.5lf\n", result);
        break;

    case '-':
        result = num1 - num2;
        printf("Result: %.5lf\n", result);
        break;

    case '*':
        result = num1 * num2;
        printf("Result: %.5lf\n", result);
        break;

    case '/':
        if (num2 == 0)
        {
            printf("Error: Division by zero is not allowed.\n");
        }

        else
        {
            result = num1 / num2;
            printf("Result: %.5lf\n", result);
        }
    }

    return 0;
}