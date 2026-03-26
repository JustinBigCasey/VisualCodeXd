#include <stdio.h>

int main()
{
    float SV[100];
    int n; // size
    int i;
    float dtb;
    int count = 0;

    printf("Input n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Grade for student #%d: ", i + 1);
        scanf("%f", &SV[i]);
        dtb += SV[i];
    }

    dtb = dtb / n;

    printf("\nAverage: %.2f\n", dtb);

    for (i = 0; i < n; i++)
    {
        if (SV[i] > dtb)
        {
            printf("\nStudent #%d higher than average with grade %.2f", i + 1, SV[i]);
            count++;
        }
    }

    printf("\n\n%d students higher than average", count);

    return 0;
}
