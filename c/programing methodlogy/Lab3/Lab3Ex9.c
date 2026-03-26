#include <stdio.h>
#include <math.h>

int swapDigit(int num);

int main()
{
	
	int number;
	
	printf("Input a number: ");
	scanf("%d", &number);
	
	printf("Number of swap digits: %d", swapDigit(number));

	return 0;
}

int swapDigit(int num)
{
	int first, last, digits;
	
	last = num % 10;
	digits = (int)log10(num);
	first = num / pow(10,digits);
	
	num = num - first * pow(10, digits) - last;
	num = last * pow(10, digits) + num + first;
	
	return num;
	
}
