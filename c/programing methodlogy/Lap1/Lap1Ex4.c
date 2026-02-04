#include <stdio.h>

int main()
{
	int a, day, week, year;

	printf("input days: ");
	scanf("%d", &a);

	year = a / 365;
	week = (a % 365) / 7;
	day = (a % 365) % 7;

	printf("years = %d\n", year);
	printf("weeks = %d\n", week);
	printf("days = %d\n", day);

	return 0;
}