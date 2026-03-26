#include <stdio.h>

int main()
{
	float a, b;

	printf("input a: ");
	scanf("%f", &a);

	if (a < 0)
		b = -a;
	else
		b = a;

	printf("Absolute a = %.2f", b);

	return 0;
}