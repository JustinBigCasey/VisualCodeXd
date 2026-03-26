#include <stdio.h>

int main()
{
	float a, b, P, A;

	printf("Input Length: ");
	scanf("%f", &a);

	printf("Input Width: ");
	scanf("%f", &b);

	P = 2 * (a + b);
	printf("Perimeter = %.2f\n", P);

	A = a * b;
	printf("Area = %.2f", A);

	return 0;
}