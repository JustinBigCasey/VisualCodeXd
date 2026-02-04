#include <stdio.h>

int main()
{
	int a, b, sum, min, mul, rem;
	float div;

	printf("input a: ");
	scanf("%d", &a);

	printf("input b: ");
	scanf("%d", &b);

	sum = a + b;
	printf("addition = %d\n", sum);

	min = a - b;
	printf("subtraction = %d\n", min);

	mul = a * b;
	printf("multiplication = %d\n", mul);

	div = (float)a / b;
	printf("division = %.2f\n", div);

	rem = a % b;
	printf("remainder = %d", rem);

	return 0;
}