#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
    char name[100];
    int birth_year;
    float gpa;

} Student;

int main()
{
    int number = 0;
    char buffer[100];

    while (true)
    {
        printf("Enter number of students: ");
        fgets(buffer, sizeof(buffer), stdin);
        if (sscanf(buffer, "%d", &number) == 1 && number > 0)
        {
            break;
        }

        printf(" ! Please enter a valid number greater than 0 !\n");
    }

    Student students[number];

    for (int i = 0; i < number; i++)
    {
        printf("Enter name for student #%d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strlen(students[i].name) - 1] = '\0';

        while (true)
        {
            printf("Enter birth year for student #%d: ", i + 1);
            fgets(buffer, sizeof(buffer), stdin);
            if (sscanf(buffer, "%d", &students[i].birth_year) == 1 && students[i].birth_year > 0 && students[i].birth_year <= 2010 && students[i].birth_year >= 1900)
            {
                break;
            }

            printf(" ! Please enter a valid birth year !\n");
        }

        while (true)
        {
            printf("Enter GPA for student #%d: ", i + 1);
            fgets(buffer, sizeof(buffer), stdin);
            if (sscanf(buffer, "%f", &students[i].gpa) == 1 && students[i].gpa >= 0 && students[i].gpa <= 4)
            {
                break;
            }

            printf(" ! Please enter a valid GPA between 0 and 4 !\n");
        }
    }

    printf("\n  ===== Student Information =====\n");
    printf("%-5s %-20s %-9s %-10s \n", "No.", "Name", "Birth", "GPA");
    printf("---------------------------------------------\n");
    for (int i = 0; i < number; i++)
    {
        printf("#%-2d | %-19s | %-7d | %-10.2f\n", i + 1, students[i].name, students[i].birth_year, students[i].gpa);
    }

    return 0;
}