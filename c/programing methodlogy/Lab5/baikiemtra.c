#include <stdio.h>
#include <string.h>
#include <ctype.h>

// viet trương trình sử dụng hàm đếm các giá trị là số có trong chuỗi
int countNum(char s[]);

int main()
{
	char s[100];
		
	printf("Input string with numbers: ");
	fgets(s, 100, stdin);
	
	printf("Number in string: %d", countNum(s));
	
	return 0;
}

int countNum(char s[])
{	
	int i;
	int count = 0;
	for (i = 0; i < strlen(s); i++)
	{
		if(isdigit(s[i]))
			count++;
	}
	
	return count;
}

