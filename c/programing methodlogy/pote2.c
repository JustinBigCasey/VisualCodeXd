#include <stdio.h>

// viết các hàm tính tổng hiệu tích thương kết quả thông qua con trỏ
void sum(float a, float b, float *result);
void difference(float a, float b, float *result);
void product(float a, float b, float *result);
void quotient(float a, float b, float *result);

int main()
{
    float a, b, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    sum(a, b, &result);
    printf("Sum %.2f + %.2f = %.2f\n", a, b, result);

    difference(a, b, &result);
    printf("Difference %.2f - %.2f = %.2f\n", a, b, result);

    product(a, b, &result);
    printf("Product %.2f * %.2f = %.2f\n", a, b, result);

    quotient(a, b, &result);
    printf("Quotient %.2f / %.2f = %.2f\n", a, b, result);

    return 0;
}

void sum(float a, float b, float *result)
{
    *result = a + b;
}

void difference(float a, float b, float *result)
{
    *result = a - b;
}

void product(float a, float b, float *result)
{
    *result = a * b;
}

void quotient(float a, float b, float *result)
{
    if (b != 0)
        *result = a / b;
    else
        printf("Error: Division by zero\n");
}