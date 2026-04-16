#include <stdio.h>

int powerxn(int x, int n);

int main()
{
	int x, n;
	
	printf("Input x: ");
	scanf("%d", &x);
	
	printf("Input n: ");
	scanf("%d", &n);
	
	printf("power %d^%d = %d", x, n, powerxn(x, n));

return 0;
}

int powerxn(int x, int n)
{
	if(n == 0)
		return 1;
	
	return x * powerxn(x, n - 1);
}