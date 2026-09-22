#include <stdio.h>

int main()
{
    int choice, n, original;
    int digit, reverse, sum, count;
    int isPrime, i, power;

    do
    {
        printf("\n--- NUMBER OPERATIONS ---\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count the Number of Digits\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 5)
        {
            printf("Enter a positive integer: ");
            scanf("%d", &n);
        }

        switch(choice)
        {
            case 1:
                original = n;
                reverse = 0;

                while(n != 0)
                {
                    digit = n % 10;
                    reverse = reverse * 10 + digit;
                    n = n / 10;
                }

                if(original == reverse)
                    printf("%d is a palindrome.\n", original);
                else
                    printf("%d is not a palindrome.\n", original);

                break;

            case 2:
                original = n;
                count = 0;

                do
                {
                    count++;
                    n = n / 10;
                }
                while(n != 0);

                n = original;
                sum = 0;

                do
                {
                    digit = n % 10;
                    power = 1;

                    for(i = 1; i <= count; i++)
                    {
                        power = power * digit;
                    }

                    sum = sum + power;
                    n = n / 10;
                }
                while(n != 0);

                if(sum == original)
                    printf("%d is an Armstrong number.\n", original);
                else
                    printf("%d is not an Armstrong number.\n", original);

                break;

            case 3:
                if(n < 2)
                {
                    printf("%d is not a prime number.\n", n);
                    break;
                }

                isPrime = 1;

                for(i = 2; i <= n / 2; i++)
                {
                    if(n % i == 0)
                    {
                        isPrime = 0;
                        break;
                    }
                }

                if(isPrime == 1)
                    printf("%d is a prime number.\n", n);
                else
                    printf("%d is not a prime number.\n", n);

                break;

            case 4:
                sum = 0;

                while(n != 0)
                {
                    digit = n % 10;
                    sum = sum + digit;
                    n = n / 10;
                }

                printf("Sum of digits = %d\n", sum);
                break;

            case 5:
                count = 0;

                do
                {
                    count++;
                    n = n / 10;
                }
                while(n != 0);

                printf("Number of digits = %d\n", count);
                break;

            case 6:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    }
    while(choice != 6);

    return 0;
}
