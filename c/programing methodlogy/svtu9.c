#include <stdio.h>

void nhaparr(float SV[], int n);
void xuatarr(float SV[], int n);

int high9(float SV[], int n);

int main()
{
    float SV[100];
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    nhaparr(SV, n);
    xuatarr(SV, n);

    printf("\n\nNumber of student grade higher than 9: %d", high9(SV, n));

    return 0;
}

void nhaparr(float SV[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Grade for student #%d: ", i + 1);
        scanf("%f", &SV[i]);
    }
}

void xuatarr(float SV[], int n)
{
    int i;

    printf("Grade inputed:", n);
    for (i = 0; i < n; i++)
    {
        printf(" %.2f", SV[i]);
    }
}

int high9(float SV[], int n)
{
    int i, count = 0;

    for (i = 0; i < n; i++)
    {
        if (SV[i] >= 9.0)
            count++;
    }

    return count;
}
