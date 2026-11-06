#include <stdio.h>

typedef struct
{
    int rollNo;
    char name[50];
    float marks[3];
    char grade;
} Student;
void displayStudent(Student s)
{
    int i;

    printf(" Student Details");
    printf("Roll Number : %d\n", s.rollNo);
    printf("Name        : %s\n", s.name);

    printf("Marks       : ");
    for (i = 0; i < 3; i++)
    {
        printf("%.2f ", s.marks[i]);
    }

    printf("\nGrade       : %c\n", s.grade);
}
float totalMarks(Student s)
{
    float total = 0;
    int i;

    for (i = 0; i < 3; i++)
    {
        total = total + s.marks[i];
    }

    return total;
}

void updateGrade(Student *s, char newGrade)
{
    s->grade = newGrade;
}

int main()
{
    Student s;
    char newGrade;
    int i;

    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter name: ");
    scanf(" %s", s.name);

    printf("Enter marks in 3 subjects: ");
    for (i = 0; i < 3; i++)
    {
        scanf("%f", &s.marks[i]);
    }

    printf("Enter grade: ");
    scanf(" %c", &s.grade);
    displayStudent(s);

    printf("Total Marks = %.2f\n", totalMarks(s));
    printf("Enter new grade: \n");
    scanf(" %c", &newGrade);

    updateGrade(&s, newGrade);

    printf("After updating grade:\n");
    displayStudent(s);

    return 0;
}
