#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char a[5][100];

	FILE *fr;
	fr = fopen("input02.txt", "r");

	for (i = 0; i < 5; i++)
		fscanf(fr, "%s", &a[i]);

	fclose(fr);

	FILE *fw;
	fw = fopen("output02.txt", "w+");

	for (i = 0; i < 5; i++)
		fprintf(fw, "length of string %d: %d \r\n", i + 1, strlen(a[i]));

	fclose(fw);

	return 0;
}