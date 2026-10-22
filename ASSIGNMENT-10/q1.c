#include <stdio.h>

long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial is not defined for negative numbers.");
    else
        printf("Factorial of %d = %lld", n, factorial(n));

    return 0;
}
