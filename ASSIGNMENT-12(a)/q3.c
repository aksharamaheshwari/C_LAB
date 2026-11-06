#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    char name[50];
    int id;
    float salary;
    struct Date joiningDate;
};

int main()
{
    struct Employee emp[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter details of Employee %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %s", emp[i].name);

        printf("Enter employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);

        printf("Enter date of joining ");
        scanf("%d %d %d",
              &emp[i].joiningDate.day,
              &emp[i].joiningDate.month,
              &emp[i].joiningDate.year);
    }

    printf(" Employee Details\n");

    for (i = 0; i < 3; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("\nName            : %s\n", emp[i].name);
        printf("\nEmployee ID     : %d\n", emp[i].id);
        printf("\nSalary          : %.2f\n", emp[i].salary);
        printf("\nDate of Joining : %02d/%02d/%04d\n",
               emp[i].joiningDate.day,
               emp[i].joiningDate.month,
               emp[i].joiningDate.year);
    }

    return 0;
}
