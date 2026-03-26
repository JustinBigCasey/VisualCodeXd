#include <stdio.h>
#include <string.h>

void reverse(char s[]); 

int main()
{
	char s[100];
		
	printf("Input string: ");
	fgets(s, 100, stdin);
	
	reverse(s);
	 
	return 0;
}

void reverse(char s[])
{
	int i;
	
	printf("Reverse string: ");
	
	for(i = strlen(s); i >= 0; i--)
		printf("%c", s[i]);
	
}

