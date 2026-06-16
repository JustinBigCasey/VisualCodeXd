#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, maxi;

	printf("Input a: ");
	scanf("%f", &a);

	printf("Input b: ");
	scanf("%f", &b);

	if (a > b)
		maxi = a;
	else
		maxi = b;

	printf("Maximum number: %.2f", maxi);

	return 0;
}