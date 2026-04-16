#include <stdio.h>

// viết 1 hàm nhận vào giá trị con trỏ tới số nguyên, tăng giá trị đó lên 1
void increase(int *p);

int main()
{
    int num;

    printf("Input a number: ");
    scanf("%d", &num);

    increase(&num);
    printf("Increased number by 1: %d\n", num);

    return 0;
}

void increase(int *p)
{
    (*p)++;
}