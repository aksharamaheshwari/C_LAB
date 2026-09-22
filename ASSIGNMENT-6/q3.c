#include <stdio.h>

int main()
{
    int n, o;
    int d, r = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a positive integer. ");
    }
    else
    {
        o = n;
        while (n != 0)
        {
            d = n % 10;
            r = r * 10 + d;
            n = n / 10;
        }

        if (o == r)
        {
            printf("%d is a palindrome number.", o);
        }
        else
        {
            printf("%d is not a palindrome number.", o);
        }
    }
    return 0;
}
