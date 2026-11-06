#include <stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    float marks[3];
    float average;
};

int main()
{
    struct Student s[100];
    int n, i, j;
    float sum, highest;

    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter marks in 3 subjects: ");
        sum = 0;

        for (j = 0; j < 3; j++)
        {
            scanf("%f", &s[i].marks[j]);
            sum = sum + s[i].marks[j];
        }

        s[i].average = sum / 3;
    }
    printf("Student Averages:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s (Roll No: %d) - Average = %.2f\n",
               s[i].name, s[i].rollNo, s[i].average);
    }
    highest = s[0].average;

    for (i = 1; i < n; i++)
    {
        if (s[i].average > highest)
        {
            highest = s[i].average;
        }
    }
    printf("Student(s) with Highest Average:\n");

    for (i = 0; i < n; i++)
    {
        if (s[i].average == highest)
        {
            printf("Name: %s\n", s[i].name);
            printf("Roll No: %d\n", s[i].rollNo);
            printf("Average: %.2f\n", s[i].average);
        }
    }

    return 0;
}
