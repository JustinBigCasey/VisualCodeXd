#include <stdio.h>

int main()
{
    int a, b;
    int *p1, *p2;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("The values entered are: %d and %d\n", a, b);

    p1 = &a;
    p2 = &b;

    *p1 = b;
    *p2 = a;

    printf("After swapping: %d and %d\n", a, b);

    return 0;
}