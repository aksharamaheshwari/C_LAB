#include <stdio.h>

enum Day {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main(void)
{
    int num;

    printf("Enter a number (1-7): ");
    scanf("%d", &num);

    switch (num)
    {
        case MONDAY:
            printf("Monday\n");
            break;

        case TUESDAY:
            printf("Tuesday\n");
            break;

        case WEDNESDAY:
            printf("Wednesday\n");
            break;

        case THURSDAY:
            printf("Thursday\n");
            break;

        case FRIDAY:
            printf("Friday\n");
            break;

        case SATURDAY:
            printf("Saturday\n");
            break;

        case SUNDAY:
            printf("Sunday\n");
            break;

        default:
            printf("Invalid input! Enter a number from 1 to 7.\n");
    }

    return 0;
}
