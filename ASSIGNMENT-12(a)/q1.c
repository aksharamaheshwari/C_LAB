#include <stdio.h>

struct student
{
    int roll_no;
    char name[20];
    float marks[3];
};

int main()
{
    struct student s;
    float avg, total = 0.0f;
    char grade;

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter student name: ");
    scanf(" %19[^\n]", s.name);

    printf("Enter marks in three subjects: ");
    scanf("%f %f %f", &s.marks[0], &s.marks[1], &s.marks[2]);

    total = s.marks[0] + s.marks[1] + s.marks[2];
    avg = total / 3.0f;

    if (avg >= 90)
        grade = 'A';
    else if (avg >= 80)
        grade = 'B';
    else if (avg >= 70)
        grade = 'C';
    else if (avg >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("\n--- Student Details ---\n");
    printf("Roll Number : %d\n", s.roll_no);
    printf("Name        : %s\n", s.name);
    printf("Total Marks : %.2f\n", total);
    printf("Average     : %.2f\n", avg);
    printf("Grade       : %c\n", grade);

    return 0;
}
