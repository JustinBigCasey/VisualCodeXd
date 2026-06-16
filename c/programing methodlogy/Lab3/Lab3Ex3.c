#include <stdio.h>

void table(int num);

int main()
{
	int number;

	printf("Input a number: ");
	scanf("%d", &number);

	table(number);

	return 0;
}

void table(int num)
{
	int i;

	for (i = 1; i <= 10; i++)
		printf("%d x %d = %d \n", num, i, num * i);
}