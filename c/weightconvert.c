#include <stdio.h>
#include <string.h>

int main()
{

    int accepted;
    float pounds, kilograms = 0.0f;
    char buffer[50];

    printf("===== WEIGHT CONVERTER =====\n");
    while (1)
    {
        printf("\nChoose conversion type:\n");
        printf("------------------------\n");
        printf("1. Pounds to Kilograms\n");
        printf("2. Kilograms to Pounds\n");
        printf("------------------------");

        printf("\nEnter your choice (1 or 2): ");
        scanf("%d", &accepted);
        getchar();

        // Pounds to Kilograms conversion
        if (accepted == 1)
        {
            while (1)
            {
                printf("Enter the weight in Pounds (lbs): ");
                fgets(buffer, sizeof(buffer), stdin);

                if (sscanf(buffer, "%f", &pounds) != 1)
                {
                    printf("Invalid input! Please enter a numeric value.\n");
                    continue;
                }

                else
                {
                    kilograms = pounds * 0.453592;
                    printf("[%.2f] Pounds is equal to [%.2f] Kilograms.\n", pounds, kilograms);
                    return 0;
                }
            }
        }

        // Kilograms to Pounds conversion
        else if (accepted == 2)
        {
            while (1)
            {
                printf("Enter the weight in Kilograms (kg): ");
                fgets(buffer, sizeof(buffer), stdin);

                if (sscanf(buffer, "%f", &kilograms) != 1)
                {
                    printf("Invalid input! Please enter a numeric value.\n");
                    continue;
                }

                else
                {
                    pounds = kilograms / 0.453592;
                    printf("[%.2f] Kilograms is equal to [%.2f] Pounds.\n", kilograms, pounds);
                    return 0;
                }
            }
        }

        // Invalid choice handling
        else
        {
            printf("\nInvalid choice! Please select either 1 or 2.\n");
            continue;
        }
    }

    return 0;
}