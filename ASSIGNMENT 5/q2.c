#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float d, root1, root2;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
     
    if (a == 0)
    {
        printf("Invalid quadratic equation");
    }
    else
    {
        d = b * b - 4 * a * c;

        printf("Discriminant: %.2f\n", d);

        if (d > 0)
        {
            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are real and different.\n");
            printf("Root 1: %.2f\n", root1);
            printf("Root 2: %.2f\n", root2);
        }
        else if (d == 0)
        {
            root1 = root2 = -b / (2 * a);
            printf("Roots are real and same.\n");
            printf("Root 1: %.2f\n", root1);
            printf("Root 2: %.2f\n", root2);
        }
        else
        {
            float realPart = -b / (2 * a);
            float imaginaryPart = sqrt(-d) / (2 * a);
            printf("Roots are complex and different.\n");
            printf("Root 1: %.2f + %.2fi\n", realPart, imaginaryPart);
            printf("Root 2: %.2f - %.2fi\n", realPart, imaginaryPart);
        }
    }
    return 0;
}
