#include <stdio.h>

int main()
{
    int x1, x2, x3, x4, d1, d2, d3, d4, total;

    printf("Quantity Item 1: ");
    scanf("%d", &x1);
    printf("Price Item 1: $");
    scanf("%d", &d1);

    printf("Quantity Item 2: ");
    scanf("%d", &x2);
    printf("Price Item 2: $");
    scanf("%d", &d2);

    printf("Quantity Item 3: ");
    scanf("%d", &x3);
    printf("Price Item 3: $");
    scanf("%d", &d3);

    printf("Quantity Item 4: ");
    scanf("%d", &x4);
    printf("Price Item 4: $");
    scanf("%d", &d4);

    total = (x1 * d1) + (x2 * d2) + (x3 * d3) + (x4 * d4);

    printf("Total price: $%d", total);

    return 0;
}