#include <stdio.h>

int main()
{	
	int Phys, Chem, Bio, Math, IT;
	float Perc;
		
	printf("Physics marks: ");
	scanf("%d", &Phys);
	
	printf("Chemistry marks: ");
	scanf("%d", &Chem);
	
	printf("Biology marks: ");
	scanf("%d", &Bio);
	
	printf("Mathematics marks: ");
	scanf("%d", &Math);
	
	printf("Computer marks: ");
	scanf("%d", &IT);
	
	Perc = (Phys + Chem + Bio + Math + IT)/5;
	
	if(Perc >= 90)
	{
		printf("Percentage %.2f%% / Grade A", Perc);
	}
	else if(Perc >= 80)
	{
		printf("Percentage %.2f%% / Grade B", Perc);
	}
	else if(Perc >= 70)
	{
		printf("Percentage %.2f%% / Grade C", Perc);
	}
	else if(Perc >= 60)
	{
		printf("Percentage %.2f%% / Grade D", Perc);
	}
	else if(Perc >= 40)
	{
		printf("Percentage %.2f%% / Grade E", Perc);
	}
	else
	{
		printf("Percentage %.2f%% / Grade F", Perc);
	}
	
	return 0;
}