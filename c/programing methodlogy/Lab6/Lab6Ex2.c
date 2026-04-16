#include <stdio.h>

int factori(int n);

int main()
{
	int n;
	
	printf("Input n: ");
	scanf("%d", &n);
	
	printf("factorial of %d = %d", n, factori(n));

return 0;
}

int factori(int n)
{
	if(n == 0)
		return 1;
	
	return n * factori(n - 1);
}