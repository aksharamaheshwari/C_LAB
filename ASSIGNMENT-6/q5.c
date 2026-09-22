#include <stdio.h>

int main()
{
    int lower, upper;
    int n, i;
    int isPrime, count = 0;

    printf("Enter lower limit: ");
    scanf("%d", &lower);

    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers are:\n");

    for(n = lower; n <= upper; n++)
    {
        if(n < 2)
            continue;

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
        {
            printf("%d ", n);
            count++;
        }
    }

    printf("\nTotal prime numbers = %d", count);

    return 0;
}
