#include <stdio.h>
int even_odd(int);
int positive_negative_zero(int);
int prime(int);
int perfect(int);
int main()
{
    int a;
    printf("Enter an integer: ");
    scanf("%d",&a);
    printf("Even/Odd: %d\n",even_odd(a));
    printf("Positive/Negative/Zero: %d\n",positive_negative_zero(a));
    printf("Prime: %d\n",prime(a));
    printf("Perfect:%d\n",perfect(a));
    return 0;
}
int even_odd(int n)
{
    if(n%2==0)
    {
         printf("Even/Odd: Even\n");
    }
    else
    {
         printf("Even/Odd: Odd\n");
    }
}
int positive_negative_zero(int n)
{
    if(n>0)
     printf("Sign: Positive\n");
     else  if(n<0)
     printf("Sign: Negative\n");
     else
     printf("Sign: Zero\n");
}
int prime(int n)
{
    int i,c=1;
    if (n<=1)
    c=1;
    else
    {
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                c=0;
                break;
            }
        }
    }
    if(c==1)
     printf("Prime: Yes\n");
     else
      printf("Prime: No\n");
}
int perfect(int n)
{
    int i,sum=0;
    if (n > 0)
    {
        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
                sum = sum + i;
        }
    }

    if (n > 0 && sum == n)
        printf("Perfect: Yes\n");
    else
        printf("Perfect: No\n");
}
