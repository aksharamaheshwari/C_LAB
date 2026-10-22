#include <stdio.h>
long long fact(int n);
int main ()
{
    int n;
    printf("Enter a no.");
    scanf("%d\n",n);
    fact(n);
    return 0;
}
long long fact(int n)
{
    if(n==0||n==1)
    return 1; 
    else 
    return n*fact(n-1);
printf("factorial of n numbers are %d\n",n);
}
