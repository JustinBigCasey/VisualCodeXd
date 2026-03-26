#include <stdio.h>
#include <string.h>

void firstLastName(char s[]);

int main()
{
	char s[100];
		
	printf("Input full name: ");
	fgets(s, 100, stdin);
	
	
	firstLastName(s);
	
	
	return 0;
}

void firstLastName(char s[])
{
	int i, j;
	
	printf("Last name: ");
	
	for(i = 0; i < strlen(s); i++)
	{	
		if(s[i] == ' ')
			break;
		
		printf("%c", s[i]);
	}
	
	printf("\nFirst name: ");
	for(j = i + 1; j < strlen(s); j++)
	{
		printf("%c", s[j]);
	}
}
