#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char buffer[100];
    char name[100] = "";
    int day_of_week, age, movie_choice, day_discount, age_discount;
    float ticket_price, final_price = 0.00;
    float drama_price = 12.00;
    float comedy_price = 10.00;
    float action_price = 15.00;
    float horror_price = 8.00;
    float documentary_price = 9.00;
    float animation_price = 11.00;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Welcome %s!\n", name);

    while (day_of_week < 1 || day_of_week > 7)
    {
        printf("Enter day of the week (1-7): ");
        fgets(buffer, sizeof(buffer), stdin);

        if (sscanf(buffer, "%d", &day_of_week) != 1)
        {
            printf("Invalid Input! Please enter whole number only.\n");
            continue;
        }

        else
        {
            switch (day_of_week)
            {
            case 1: // Monday
            case 3: // Wednesday
            case 5: // Friday
                day_discount = 10;
                break;

            case 2: // Tuesday
            case 4: // Thursday
                day_discount = 5;
                break;

            case 6: // Saturday
            case 7: // Sunday
                day_discount = 0;
                break;

            default:
                printf("Invalid day of the week!\n");
                break;
            }
        }
    }

    while (1)
    {
        printf("Enter your age: ");

        fgets(buffer, sizeof(buffer), stdin);
        if (sscanf(buffer, "%d", &age) == 1)
        {
            if (age > 6 && age < 18)
            {
                age_discount = 15;
            }

            else if (age >= 65 && age <= 120)
            {
                age_discount = 30;
            }

            else if (age > 120)
            {
                printf("You are not even alive\n");
                continue;
            }

            else if (age <= 6)
            {
                printf("You are too young to watch movies alone\n");
                continue;
            }

            else
            {
                age_discount = 0;
            }
            break;
        }

        printf("Invalid Input! Please enter whole number only.\n");
    }

    printf("Select movie genre:\n");
    printf("-------------------------\n");
    printf("1. Drama ($12.00)\n");
    printf("2. Comedy ($10.00)\n");
    printf("3. Action ($15.00)\n");
    printf("4. Horror ($8.00)\n");
    printf("5. Documentary ($9.00)\n");
    printf("6. Animation ($11.00)\n");
    printf("-------------------------\n");

    while (movie_choice < 1 || movie_choice > 6)
    {
        printf("Enter your choice (1-6): ");

        fgets(buffer, sizeof(buffer), stdin);
        if (sscanf(buffer, "%d", &movie_choice) != 1)
        {
            printf("Invalid Input! Please enter whole number only.\n");
            continue;
        }

        switch (movie_choice)
        {
        case 1:
            ticket_price = drama_price;
            break;

        case 2:
            ticket_price = comedy_price;
            break;

        case 3:
            ticket_price = action_price;
            break;

        case 4:
            ticket_price = horror_price;
            break;

        case 5:
            ticket_price = documentary_price;
            break;

        case 6:
            ticket_price = animation_price;
            break;

        default:
            printf("Invalid movie choice!\n");
            break;
        }
    }

    final_price = ticket_price - (ticket_price * day_discount / 100) - (ticket_price * age_discount / 100);
    printf("\nFinal ticket price calculation:\n");
    printf("------------------------\n");
    printf("Base ticket price: $%.2f\n", ticket_price);
    printf("Day discount: %d%% (-$%.2f)\n", day_discount, ticket_price * day_discount / 100);
    printf("Age discount: %d%% (-$%.2f)\n", age_discount, ticket_price * age_discount / 100);
    printf("-------------------------\n");
    printf("Final ticket price: $%.2f\n", final_price);

    printf("\nThank you %s for using the Movie Ticket Pricing System !\n", name);
    printf(" ! Enjoy your movie !\n");

    return 0;
}