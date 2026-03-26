#include <stdio.h>

int main()
{
    float a = 3.11;
    float *p;
    p = &a;

    printf("The value of a is: %f\n", *p);
    printf("The address of a is: %p\n", *p);

    return 0;
}