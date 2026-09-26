#include <stdio.h>

int main()
{
    int a[100];
    int n, i, sum = 0;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
        sum = sum + a[i];
    }

    average = sum / (float)n;

    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", average);

    return 0;
}
