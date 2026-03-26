#include <stdio.h>

int countDigit(int num);

int main()
{

	int number;
	
	printf("Input a number: ");
	scanf("%d", &number);
	
	printf("Number of digits: %d", countDigit(number));

	return 0;
}

int countDigit(int num)
{
	int count = 0;
	while (num != 0)
    {
        count++;
        num /= 10;
    }
	
	return count;
}
