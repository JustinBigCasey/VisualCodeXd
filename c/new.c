#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
    float gpa;
    bool is_full_time;
} Student;

void printStudent(Student student);

int main()
{

    Student student1 = {0};
    strcpy(student1.name, "Fortnite");
    student1.age = 21;

    printStudent(student1);

    return 0;
}

void printStudent(Student student)
{
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full-time: %s\n", student.is_full_time ? "Yes" : "No");
    printf("\n");
}