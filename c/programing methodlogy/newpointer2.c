#include <stdio.h>

int main()
{
    float a = 3.11;
    float *p;
    p = &a;
    *p = 400.432;

    printf("The value of a is: %f\n", a);
    printf("The address of a is: %p\n", &a);

    return 0;
}