#include <stdio.h>

int main()
{
	char s[100];
	int i, count = 0;

	printf("Input a string: ");
	fgets(s, 100, stdin);

	for (i = 0; s[i] != '\0'; i++)
		count++;

	printf("Lenght of string: %d", count - 1);

	return 0;
}
