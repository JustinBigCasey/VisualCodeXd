#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    float princible, rate, time, compound_interest;
    char buffer[100];

    printf(" ===== COMPOUND INTEREST CALCULATOR ===== \n");

    // Principle Amount
    while (1)
    {
        printf("Enter the princible amount (P): $");
        fgets(buffer, sizeof(buffer), stdin);
        if (sscanf(buffer, "%f", &princible) == 1 && princible > 0)
        {
            // Rate of Interest
            while (1)
            {
                printf("Enter the interest rate %% (r): ");
                fgets(buffer, sizeof(buffer), stdin);
                if (sscanf(buffer, "%f", &rate) == 1 && rate > 0)
                {
                    // Time in Years
                    while (1)
                    {
                        printf("Enter the time in years (t): ");
                        fgets(buffer, sizeof(buffer), stdin);
                        if (sscanf(buffer, "%f", &time) == 1 && time > 0)
                        {
                            compound_interest = princible * (pow((1 + (rate / 100)), time));
                            printf("After %.2f years, your total amount will be: $%.2f\n", time, compound_interest);
                            return 0;
                        }
                        printf("Invalid Input! Please enter a valid amount.\n");
                    }

                    printf("Invalid Input! Please enter a valid amount.\n");
                }
                printf("Invalid Input! Please enter a valid amount.\n");
            }
        }
        printf("Invalid Input! Please enter a valid amount.\n");
    }

    return 0;
}