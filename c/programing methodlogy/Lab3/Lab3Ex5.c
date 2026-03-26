#include <stdio.h>

void first(int number);
void last(int number);

int main()
{
	int number;
	
	printf("Input a number: ");
	scanf("%d", &number);

	first(number);
	last(number);

	return 0;
}


void first(int number)
{
	int first;
	
	while(number >= 10)
		number /= 10;
	
	first = number;	
	
	printf("First digit = %d\n", first);
	
}

void last(int number)
{
	int last;
	
	last = number % 10;
	
	printf("Last digit = %d\n", last);
	
}