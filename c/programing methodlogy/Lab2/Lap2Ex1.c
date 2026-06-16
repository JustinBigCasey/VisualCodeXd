#include <stdio.h>

int main()
{
    int n, sum, i;

    do
    {
        printf("Input number: ");
        scanf("%d", &n);
    } while (n <= 0);

    // Dòng lặp while sử dụng khi không biết trước số lần lặp và thực hiện kiểm tra điều kiện lặp trước rồi sau đó mới thực hiện hành động lặp
    sum = 0;
    i = 2;
    while (i <= n)
    {
        sum += i;
        i += 2;
    }
    printf("Sum even While = %d\n", sum);

    // Dòng lặp do while sử dụng khi không biết trước số lần lặp và thực hiện hành động lặp trước rồi mới kiểm tra điều kiện lặp
    sum = 0;
    i = 2;
    do
    {
        sum += i;
        i += 2;
    } while (i <= n);
    printf("Sum even Do While = %d\n", sum);

    // Dòng lặp for sử dụng khi biết trước số lần lặp
    sum = 0;
    for (i = 2; i <= n; i += 2)
        sum += i;

    printf("Sum even For = %d\n", sum);

    return 0;
}