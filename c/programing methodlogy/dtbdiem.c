#include <stdio.h>

int main()
{
    float SV[100];
    int n; // size
    int i, imax = 0;
    float dtb, maxgrade = 0;

    printf("Input n: ");
    scanf("%d", &n);

    // avarage
    for (i = 0; i < n; i++)
    {
        printf("Grade for student %d: ", i + 1);
        scanf("%f", &SV[i]);
        dtb += SV[i];
    }

    dtb = dtb / n;

    printf("\nAverage: %.2f", dtb);

    // max
    for (i = 0; i < n; i++)
    {
        if (SV[i] > imax)
        {
            imax = i + 1;
            maxgrade = SV[i];
        }
    }

    printf("\nStudent with highest grade: #%d with %2.f", imax, maxgrade);

    return 0;
}
