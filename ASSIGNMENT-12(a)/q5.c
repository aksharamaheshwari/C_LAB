#include <stdio.h>

typedef struct
{
    int rollNo;
    char name[50];
    float cgpa;
} Student;

int main()
{
    Student s[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter Student Name: ");
        scanf(" %49s", s[i].name);

        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);
    }
    printf(" Student Details\n");

    for (i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].rollNo);
        printf("Name        : %s\n", s[i].name);
        printf("CGPA        : %.2f\n", s[i].cgpa);
    }

    return 0;
}
