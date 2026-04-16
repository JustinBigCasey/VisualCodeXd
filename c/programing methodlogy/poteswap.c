#include <stdio.h>

void swap(int *, int *);

int main(void)
{
    int var1, var2;

    printf("Enter two integers: ");
    scanf("%d %d", &var1, &var2);

    swap(&var1, &var2);

    printf("var1 = %d; var2 = %d\n", var1, var2);
    return 0;
}

void swap(int *para1, int *para2)
{
    int temp;

    temp = *para1;
    *para1 = *para2;
    *para2 = temp;
}