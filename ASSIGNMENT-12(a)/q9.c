#include <stdio.h>

struct Employee
{
    int id;

    union
    {
        int hourly_rate;
        float monthly_salary;
    };  
};

int main()
{
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Monthly Salary: ");
    scanf("%f", &emp.monthly_salary);

    printf("Employee Details\n");
    printf("Employee ID    : %d\n", emp.id);
    printf("Monthly Salary : %.2f\n", emp.monthly_salary);

    return 0;
}
