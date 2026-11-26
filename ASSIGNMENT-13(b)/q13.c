#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct Employee emp;
    struct Employee *ptr = &emp;
    printf("Enter employee ID: ");
    scanf("%d", &ptr->id);
    printf("Enter employee name: ");
    scanf("%49s", ptr->name);
    printf("Enter employee salary: ");
    scanf("%f", &ptr->salary);
    printf("Before modification:\n");
    printf("ID     : %d\n", ptr->id);
    printf("Name   : %s\n", ptr->name);
    printf("Salary : %.2f\n", ptr->salary);
    printf("Enter new salary: ");
    scanf("%f", &ptr->salary);
    printf("After modification:\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Salary: %.2f\n", ptr->salary);
    return 0;
}
