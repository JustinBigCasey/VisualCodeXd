#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct Employee{
	char id[11];
	char name[100];
	char sex;
	int birthyear;
	char phoneNumber[11];
	float salary;
} Employee;

void inputStruct(Employee *a, int n);
void printStruct(Employee *a, int n);
void searchEmployee(Employee *a, int n, char *keyid);
void countSex(Employee *a, int n);

int main()
{
	Employee e[10];
	char keyid[11];
	int choice;
	int cho = 1;
	
	int n = sizeof(e) / sizeof(e[0]);
	
	inputStruct(e, n);
	
	while (cho)
	{
		printf("\n\n------- Employee Management -------\n");
		printf("1. Print all Employee\n");
		printf("2. Find Employee by id\n"); 
		printf("3. Print number of male/female employee\n"); 
		printf("4. Exit\n");
	
		printf("Enter: ");
		scanf("%d", &choice); 
		getchar();
	
		switch (choice){
			case 1:
			printStruct(e, n);
			break;
			
			case 2:
			printf("Input id key: ");
			fgets(keyid, 11, stdin);
			keyid[strlen(keyid) - 1] = '\0';
			searchEmployee(e, n, keyid);
			break;
			
			case 3:
			countSex(e, n);
			break;
			
			case 4:
			printf("Bye bye");
			cho = 0;
			break;
			
			default:
			printf("\n ! Error Input ! \n");
			break;
		}
	}
	
	
	return 0;
}	

void inputStruct(Employee *a, int n)
{
	int i;
	
	for(i = 0; i < n; i++)
	{
		printf("Input id for employee %d: ", i + 1);
		fgets(a[i].id, 11, stdin);
		a[i].id[strlen(a[i].id) - 1] = '\0';
			
		printf("Input name for employee %d: ", i + 1);
		fgets(a[i].name, 100, stdin);
		a[i].name[strlen(a[i].name) - 1] = '\0';
		
		printf("Input sex for employee %d (M/F): ", i + 1);
		scanf("%c", &a[i].sex);
		
		
		printf("Input birth year for employee %d: ", i + 1);
		scanf("%d", &a[i].birthyear);
		getchar();
		
		printf("Input phone number for employee %d: ", i + 1);
		fgets(a[i].phoneNumber, 11, stdin);
		a[i].phoneNumber[strlen(a[i].phoneNumber) - 1] = '\0';
		
		printf("Input salary for employee %d: ", i + 1);
		scanf("%f", &a[i].salary);
		getchar();
	}
	printf("\n");
}

void printStruct(Employee *a, int n)
{	
	int i;
	
	for(i = 0; i < n; i++)
	{
		printf("Employee #%d id: %s\n", i + 1, a[i].id);
		printf("Employee #%d name: %s\n", i + 1, a[i].name);
		printf("Employee #%d sex: %c\n", i + 1, a[i].sex);
		printf("Employee #%d birth year: %d\n", i + 1, a[i].birthyear);
		printf("Employee #%d phone number: %s\n", i + 1, a[i].phoneNumber);
		printf("Employee #%d salary: $%.2f\n", i + 1, a[i].salary);
	}
}

void searchEmployee(Employee *a, int n, char *keyid)
{
	int i, found = 0;
	
	for(i = 0; i < n; i++)
	{
		if(strcmp(a[i].id, keyid) == 0)
		{													  
			printf("Employee #%d id: %s\n", i + 1, a[i].id);
			printf("Employee #%d name: %s\n", i + 1, a[i].name);
			printf("Employee #%d sex: %c\n", i + 1, a[i].sex);
			printf("Employee #%d birth year: %d\n", i + 1, a[i].birthyear);
			printf("Employee #%d phone number: %s\n", i + 1, a[i].phoneNumber);
			printf("Employee #%d salary: $%.2f\n", i + 1, a[i].salary);
			found = 1;	
			break;
		}
	}
	
	if(found == 0)
		printf("No employee with id: %s\n", keyid);
}

void countSex(Employee *a, int n)
{
	int i, ma = 0, fe = 0;
    
    for(i = 0; i < n; i++)
    {
        char currentSex = toupper(a[i].sex);
        if(currentSex == 'M')
            ma += 1;
        else if(currentSex == 'F')
            fe += 1;
    }
    
    printf("\nNumber of Male: %d\n", ma);
    printf("Number of Female: %d\n", fe);
}