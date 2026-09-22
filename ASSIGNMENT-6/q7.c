#include <stdio.h>

int main()
{
    int n, remainder;
    long long binary = 0;
    long long place = 1;

    printf("Enter a positive decimal integer: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Please enter a positive integer.");
    }
    else if(n == 0)
    {
        printf("Binary equivalent = 0");
    }
    else
    {
        while(n > 0)
        {
            remainder = n % 2;
            binary = binary + remainder * place;

            n = n / 2;
            place = place * 10;
        }

        printf("Binary equivalent = %lld", binary);
    }

    return 0;
}
