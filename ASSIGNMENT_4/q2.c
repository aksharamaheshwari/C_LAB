#include <stdio.h>
int main()
{
    int a;
    float b,c;
    printf("Enter a integer number:");
    scanf("%d",&a);
    printf("Enter a floating-point number:");
    scanf("%f",&b);
   c = (float)a + b;
   printf("\nExplicit Type Conversion\n");
   printf("Addition = %.2f\n", c);
   c = (float)a - b;
    printf("Subtraction = %.2f\n", c);
    c = (float)a * b;
    printf("Multiplication = %.2f\n", c);
    c = (float)a / b;
    printf("Division = %.2f\n", c);
    return 0;
}
