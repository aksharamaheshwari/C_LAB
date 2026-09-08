#include <stdio.h>
int main() {
int marks;
float percentage;
char grade;
const int total_marks = 500;

printf("Enter the marks obtained (out of 500): ");
scanf("%d", &marks);

percentage = ((float)marks / total_marks) * 100;

if (percentage >= 90) 
{
    grade = 'A';
    printf("Excellent\n");
}
else if (percentage >= 75)
{
    grade = 'B';
    printf("Very Good\n");
}
else if (percentage >= 60) 
{
    grade = 'C';
    printf("Good\n");
}
else if (percentage >= 50) 
{
    grade = 'D';
    printf("Average\n");
}
else 
{
    grade = 'F';
    printf("Fail\n");
}
printf("Percentage: %.2f%%\n", percentage);
printf("Grade: %c\n", grade);

return 0;
}
