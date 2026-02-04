#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void testu(int *value);

int main()
{
    int value = 42;
    int *pValue = &value;

    printf("%d\n", value);
    printf("%p\n", &value);
    printf("%p\n", pValue);

    testu(pValue);

    printf("Value: %d\n", value);

    return 0;
}

void testu(int *value)
{
    (*value)++;
}