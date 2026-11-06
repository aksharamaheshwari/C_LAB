#include <stdio.h>

typedef struct
{
    int day;
    int month;
    int year;
} Date;

typedef struct
{
    int rollNo;
    char name[50];
    float cgpa;
    Date dob;         
} Student;
void printStudent(Student *s)
{
    printf("\nRoll Number   : %d", s->rollNo);
    printf("\nName          : %s", s->name);
    printf("\nCGPA          : %.2f", s->cgpa);
    printf("\nDate of Birth : %02d/%02d/%d",
           s->dob.day, s->dob.month, s->dob.year);
}
void checkScholarship(Student *s)
{
    if (s->cgpa >= 8.5)
        printf("Scholarship : Eligible for Merit Scholarship\n");
    else
        printf("Scholarship : Not Eligible for Merit Scholarship\n");
}

int main()
{
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    Student s[n];
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter Name: ");
        scanf(" %49s", s[i].name);

        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);

        printf("Enter Date of Birth (DD MM YYYY): ");
        scanf("%d %d %d",
              &s[i].dob.day,
              &s[i].dob.month,
              &s[i].dob.year);
    }
    printf(" STUDENT DETAILS \n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d", i + 1);

        printStudent(&s[i]);
        checkScholarship(&s[i]);
    }

    return 0;
}
