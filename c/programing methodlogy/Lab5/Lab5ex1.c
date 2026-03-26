#include <stdio.h>
#include <string.h>

	
int main()
{
	char s[100];
		
	printf("Input string: ");
	fgets(s, 100, stdin);
	
	printf("\nString's lenght: %d", strlen(s) - 1);
	 
	return 0;
}
