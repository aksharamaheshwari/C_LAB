#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    int num1, num2;

    printf("----- Calculator -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 7) {
        printf("Calculator closed");
        return 0;
    }

    if(choice < 1 || choice > 7) {
        printf("Invalid choice");
        return 0;
    }

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch(choice) {

        case 1:
            printf("Addition = %d", num1 + num2);
            break;

        case 2:
            printf("Subtraction = %d", num1 - num2);
            break;

        case 3:
            printf("Multiplication = %d", num1 * num2);
            break;

        case 4:
            if(num2 != 0)
                printf("Division = %.2f",
                       (float)num1 / num2);
            else
                printf("Cannot divide by zero");
            break;

        case 5:
            if(num2 != 0)
                printf("Modulus = %d", num1 % num2);
            else
                printf("Cannot divide by zero");
            break;

        case 6:
            printf("Power = %.2f", pow(num1, num2));
            break;

        case 7:
            printf("Exit");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
