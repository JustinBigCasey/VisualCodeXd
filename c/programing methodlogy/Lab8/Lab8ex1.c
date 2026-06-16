#include <stdio.h>

int main()
{
	int i, sum = 0;
	int a[100];

	FILE *fr;
	fr = fopen("input01.txt", "r");

	for (i = 0; i < 20; i++)
	{
		fscanf(fr, "%d", &a[i]);
		sum += a[i];
	}
	fclose(fr);

	FILE *fw;
	fw = fopen("output01.txt", "w+");
	fprintf(fw, "sum of 20 integers: %d", sum);
	fclose(fw);

	return 0;
}