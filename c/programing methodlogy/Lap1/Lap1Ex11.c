#include <stdio.h>
#include <ctype.h>

int main()
{	
	char a;
		
	printf("Input a character: ");
	scanf("%c", &a);
	
	if(isalnum(a))
	{
		printf("%c is alphanumeric", a);
	}
	else
	{
		printf("%c is NOT alphanumeric", a);
	}
	
	return 0;
}