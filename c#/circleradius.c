#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI 3.14159

int main()
{
    double area, radius, surface_area, volume;
    char buffer[100];

    printf("==== Circle Radius Calculater ====\n");

    while (1)
    {
        printf("Enter the radius: ");
        fgets(buffer, sizeof(buffer), stdin);
        if (sscanf(buffer, "%lf", &radius) == 1 && radius > 0)
        {
            area = PI * pow(radius, 2);
            printf("Area: %.2lf\n", area);

            surface_area = 4 * PI * pow(radius, 2);
            printf("Surface Area: %.2lf\n", surface_area);

            volume = (4 / 3) * PI * pow(radius, 3);
            printf("Volume: %.2lf\n", volume);

            break;
        }

        else
        {
            printf("Invalid Input! Please enter a valid radius.\n");
        }
    }

    return 0;
}