#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, maxi;
	
	printf("Input a: ");
	scanf("%f", &a);
	
	printf("Input b: ");
	scanf("%f", &b);
	
	maxi = fmax(a,b);
	
	printf("Maximum number: %.2f" ,maxi);
	
	return 0;
}