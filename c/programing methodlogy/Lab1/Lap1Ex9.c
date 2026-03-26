#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, maxi1, maxi2;
	
	printf("Input a: ");
	scanf("%f", &a);
	
	printf("Input b: ");
	scanf("%f", &b);
	
	printf("Input c: ");
	scanf("%f", &c);
	
	maxi1 = fmax(a,b);
	maxi2 = fmax(maxi1, c);
	
	printf("Maximum number: %.2f" ,maxi2);
	
	return 0;
}