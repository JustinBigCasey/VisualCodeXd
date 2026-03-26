#include <stdio.h>

void draw_rocket_ship();
void draw_male_stick_figure();
void draw_circle();
void draw_rectangle();
void draw_triangle();
void draw_female_stick_figure();

int main(void)
{
    printf("ROCKET SHIT\n");
    draw_rocket_ship();
    printf("\n\n");

    printf("GAY MALE\n");
    draw_male_stick_figure();
    printf("\n\n");

    printf("FEMBOY\n");
    draw_female_stick_figure();
    printf("\n\n");

    return 0;
}

void draw_rocket_ship()
{
    draw_triangle();
    draw_rectangle();
    draw_triangle();
}

void draw_male_stick_figure()
{
    draw_circle();
    draw_rectangle();
    draw_rectangle();
}

void draw_female_stick_figure()
{
    draw_circle();
    draw_triangle();
    draw_triangle();
}

void draw_circle()
{
    printf("   **   \n");
    printf(" *    * \n");
    printf(" *    * \n");
    printf("   **   \n");
}

void draw_rectangle()
{
    printf(" ****** \n");
    printf(" *    * \n");
    printf(" *    * \n");
    printf(" *    * \n");
    printf(" ****** \n");
}

void draw_triangle()
{
    printf("   *   \n");
    printf("  *  *  \n");
    printf(" *    * \n");
    printf("********\n");
}
