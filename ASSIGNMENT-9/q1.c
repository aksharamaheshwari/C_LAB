#include <stdio.h>
    int add(int a, int b);
    int subtract (int a, int b);
    int multiply (int a, int b);
    int division (int a,int b);
    int mod (int a,int b);
int main()
{
    int a,b;
    printf("Enter two integer");
    scanf("%d %d",&a,&b);
    printf("Addition=%d\n",add(a,b));
    printf("Subtract=%d\n",subtract(a,b));
    printf("Multiply=%d\n",multiply(a,b));
    printf("Divide=%d\n",division(a,b));
    printf("Modulus=%d\n",mod(a,b));
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int subtract(int a,int b)
{
    return a-b;
}
int multiply (int a, int b)
{
    return a*b;
}
int division (int a,int b)
{
    if(b==0)
{
    printf("Division by zero is not possible.\n");
}
else
{
     printf("Division = %.2f\n", (float)a / b);
}
}
int mod(int a,int b)
{
     if(b==0)
     {
        printf("Modulus by zero is not possible.\n");
     }
     else
     {
        printf("Modulus = %d\n", a % b);
     }
}
