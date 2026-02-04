#include <stdio.h>

int main()
{
    int variety;
    int numbers[100];
    int divider = 0;
    int count = 0;
    int nono = 0;
    int counter[100];

    printf("Variety numbers: ");
    scanf("%d", &variety);

    printf("Numbers: ");
    for (int i = 0; i < variety; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < variety; i++)
    {
        divider = 10000000000 * numbers[i];
        for (int j = 1; j <= divider; j++)
        {
            if (numbers[i] % j == 0)
            {
                count++;
            }
        }
        counter[++nono] = count;
    }

    for (int i = 0; i < variety; i++)
    {
        if (counter[i] == 9)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
