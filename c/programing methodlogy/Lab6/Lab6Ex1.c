#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n, int i);

int main()
{
	int n;
	
	printf("Input n: ");
	scanf("%d", &n);
	
	if(isPrime(n, 2))
		printf("%d is a prime number", n);
	else
		printf("%d is NOT a prime number" ,n);
	
	return 0;
}

bool isPrime(int n, int i)
{	
	if (n < 2) 
		return false;
	
	if (i * i > n)
		return true;
	
	if (n % i == 0)
		return false;
	
	return isPrime(n, i + 1);
}