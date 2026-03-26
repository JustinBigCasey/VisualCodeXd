#include <stdio.h>

union Sti
{
    signed char nu;
    char z;
};

int main()
{
    union Sti y;
    printf("%d", sizeof(y));
    return 0;
}