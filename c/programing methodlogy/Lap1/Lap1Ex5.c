#include <stdio.h>

int main()
{
	float cel, fah;
		
	printf("input Celsius: ");
	scanf("%f", &cel);
	
	fah = cel*(1.8)+32;
	
	printf("%.2fC = %.2fF",cel, fah);
	
	
	
	return 0;
}