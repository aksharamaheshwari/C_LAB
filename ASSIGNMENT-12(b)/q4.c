#include <stdio.h>

enum MenuChoice
{
    ADD = 1,
    SUBTRACT = 2,
    MULTIPLY = 3,
    DIVIDE = 4,
    EXIT = 5
};

int main()
{
    enum MenuChoice choice;
    int option;
    float num1, num2;

    while (1)
    {
        printf("CALCULATOR MENU \n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &option);

        choice = (enum MenuChoice)option;
        if (choice == EXIT)
        {
            printf("Exiting calculator...\n");
            break;
        }
        if (choice < ADD || choice > DIVIDE)
        {
            printf("Invalid choice! Please try again.\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (choice)
        {
            case ADD:
                printf("Result = %.2f\n", num1 + num2);
                break;

            case SUBTRACT:
                printf("Result = %.2f\n", num1 - num2);
                break;

            case MULTIPLY:
                printf("Result = %.2f\n", num1 * num2);
                break;

            case DIVIDE:
                if (num2 == 0)
                {
                    printf("Error: Division by zero is not allowed.\n");
                }
                else
                {
                    printf("Result = %.2f\n", num1 / num2);
                }
                break;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
