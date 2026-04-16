#include <stdio.h>

// nhập mảng n số nguyên sau đó dùng con trò duyệt mảng, in phần tử mảng mà không dùng chỉ số a[i]
void inputArray(int *a, int n);
void printArray(int *a, int n);

// đảo ngược mảng bằng con trỏ, không dùng mảng phụ
void reverseArray(int *a, int n);

int main()
{
    int n;
    int a[100];

    printf("Input the number of elements: ");
    scanf("%d", &n);

    inputArray(a, n);

    printf("\nOriginal array:\n");
    printArray(a, n);

    reverseArray(a, n);
    printf("\n\nReversed array:\n");
    printArray(a, n);

    return 0;
}

void inputArray(int *a, int n)
{
    printf("Enter %d integers:\n", n);

    for (int *p = a; p < a + n; p++)
    {
        printf("Input element %d: ", p - a + 1);
        scanf("%d", p);
    }
}

void printArray(int *a, int n)
{

    for (int *p = a; p < a + n; p++)
    {
        printf("%d ", *p);
    }
}

void reverseArray(int *a, int n)
{

    for (int *p = a; p < a + n / 2; p++)
    {
        int temp = *p;

        *p = *(a + n - 1 - (p - a));
        *(a + n - 1 - (p - a)) = temp;
    }
}