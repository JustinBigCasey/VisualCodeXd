#include <stdio.h>

int main()
{
	int angle1, angle2, angle3, sum;

	printf("Input angle 1: ");
	scanf("%d", &angle1);

	printf("Input angle 2: ");
	scanf("%d", &angle2);

	printf("Input angle 3: ");
	scanf("%d", &angle3);

	sum = angle1 + angle2 + angle3;

	if (angle1 > 0 && angle2 > 0 && angle3 > 0 && sum == 180)
	{
		printf("Triangle is valid");
	}
	else
	{
		printf("Triangle is NOT valid");
	}

	return 0;
}