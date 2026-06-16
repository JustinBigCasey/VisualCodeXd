#include <stdio.h>

int main()
{
	char a;

	printf("Input a character: ");
	scanf("%c", &a);

	if ((a >= '0' && a <= '9') ||
		(a >= 'A' && a <= 'Z') ||
		(a >= 'a' && a <= 'z'))
		printf("%c is an alphanumeric character", a);

	else
		printf("%c is NOT an alphanumeric character", a);

	return 0;
}