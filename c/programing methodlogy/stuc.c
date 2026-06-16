#include <stdio.h>

typedef struct
{
    char id[10];
    int birth_year;
    char Gender;
    float GPA;
} Student;

typedef struct
{
    float math, physics, chemistry, english, history;
} Grade;

int AvarageGrade(Grade g)
{
    return (g.math + g.physics + g.chemistry + g.english + g.history) / 5.0;
}

int main()
{
    Student s[100];
    Grade g[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the ID for student %d: ", i + 1);
        scanf("%s", &s[i].id);

        printf("Enter the birth year for student %d: ", i + 1);
        scanf("%d", &s[i].birth_year);

        printf("Enter the gender for student %d (M/F): ", i + 1);
        scanf(" %c", &s[i].Gender);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the grades for student %s:\n", s[i].id);
        printf("Math: ");
        scanf("%f", &g[i].math);
        printf("Physics: ");
        scanf("%f", &g[i].physics);
        printf("Chemistry: ");
        scanf("%f", &g[i].chemistry);
        printf("English: ");
        scanf("%f", &g[i].english);
        printf("History: ");
        scanf("%f", &g[i].history);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: %s\n", s[i].id);
        printf("Birth Year: %d\n", s[i].birth_year);
        printf("Gender: %c\n", s[i].Gender);
        printf("GPA: %.2f\n", s[i].GPA = AvarageGrade(g[i]));
    }

    return 0;
}