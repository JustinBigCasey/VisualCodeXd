#include <stdio.h>

int main()
{
	int n, dc, dg, lg;
	char w[100];
	
	FILE *fr;
	fr = fopen("input.txt", "r");
	fscanf(fr, "%d %d %d %d %s", &n, &dc, &dg, &lg, w);
	fclose(fr);
	
	printf("%d %d %d %d %s", n, dc, dg, lg, w);
	
	
	FILE *fw;
	fw = fopen("output.txt", "w");
	fprintf(fw, "%d %d %d %d %s", n, dc, dg, lg, w);
	fclose(fw);
	
	
return 0;
}