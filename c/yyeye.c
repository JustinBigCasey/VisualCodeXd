#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void)
{

    double d1, // hole circle diameter
        d2,    // big circle diameter
        thickness,
        density;
    int qty;

    double unit_weight, // single washer's weight
        total_weight,   // a batch of washers' total weight
        outer_area,     // area of big circle
        inner_area,     // area of small circle
        rim_area;       // single washer's rim area

    // read input data
    printf("Inner diameter in cm: ");
    scanf("%lf", &d1);
    printf("Outer diameter in cm: ");
    scanf("%lf", &d2);
    printf("Thickness in cm: ");
    scanf("%lf", &thickness);
    printf("Density in grams per cubic cm: ");
    scanf("%lf", &density);
    printf("Quantity: ");
    scanf("%d", &qty);

    // compute weight of a single washer
    outer_area = pow(d2 / 2, 2) * PI;
    inner_area = pow(d1 / 2, 2) * PI;
    rim_area = outer_area - inner_area;
    unit_weight = rim_area * thickness * density;

    // compute weight of a batch of washers
    total_weight = unit_weight * qty;

    // output
    printf("Total weight of the batch of %d washers is %.2f grams.\n", qty, total_weight);

    return 0;
}
