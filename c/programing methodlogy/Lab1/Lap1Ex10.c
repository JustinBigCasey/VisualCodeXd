#include <stdio.h>
#include <math.h>

int main()
{
	int a;

	printf("Input a: ");
	scanf("%d", &a);

	if (a % 2 == 0)
		printf("%d is an EVEN number", a);
	else
		printf("%d is an ODD number", a);

	return 0;
}