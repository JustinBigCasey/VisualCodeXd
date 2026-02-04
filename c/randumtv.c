#include <stdio.h>

int main()
{
    int cnt = 0;
    int variety;
    int numbers[100];

    scanf("%d", &variety);

    for (int i = 0; i < variety; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int j = 0; j < variety; j++)
    {
        cnt = 0;

        for (int i = 1; i * i <= numbers[j]; i++)
        {

            if ((numbers[j]) % i == 0)
            {
                cnt++;
                if (i != numbers[j] / i)
                    cnt++;
            }
        }

        if (cnt == 9)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}