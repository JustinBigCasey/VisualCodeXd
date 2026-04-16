#include <stdio.h>
#include <math.h>

int factori(int n);

int exA(int n);
float exB(float n);
int exC(int n);
float exD(float n);
int exE(int n);

int main()
{
	int n;
	
	printf("Input n: ");
	scanf("%d", &n);
	
	printf("a = %lld\n", exA(n));
	
	printf("b = %.2lf\n", exB(n));
	
	printf("c = %lld\n", exC(n));
	
	printf("d = %.5lf\n", exD(n));
	
	printf("e = %lld\n", exE(n));
	
return 0;
}

int factori(int n)
{
	if(n == 0)
		return 1;
	
	return n * factori(n - 1);
}

int exA(int n)
{	
	if(n == 1)
		return 3;
	
	return (2*n + 1) + exA(n - 1);
}

float exB(float n)
{	
	if(n == 1)
		return 0.5;
	
	return (n / 2) + exB(n - 1);
}

int exC(int n)
{
	if(n == 1)
		return 1;
	
	return factori(n) + exC(n - 1); 
}

float exD(float n)
{
	if(n == 1)
		return sqrt(1);
	
	return sqrt(n) + exD(n - 1);
}

int exE(int n)
{
	if(n == 1)
		return 1;
	
	return factori(n) * exE(n - 1); 
}