#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	
	printf("Input a: ");
	scanf("%d", &a);
	
	if(a % 2 == 0)
	{
		printf("Number %d is EVEN", a);
	}
	else
	{
		printf("Number %d is ODD", a);
	}
	
	return 0;
}