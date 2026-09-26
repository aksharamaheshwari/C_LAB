#include <stdio.h>

int main()
{
    int a[100];
    int n, i;
    int largest, secondLargest;
    int smallest, secondSmallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    smallest = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
            largest = a[i];

        if(a[i] < smallest)
            smallest = a[i];
    }

    secondLargest = smallest;
    secondSmallest = largest;

    for(i = 0; i < n; i++)
    {
        if(a[i] > secondLargest && a[i] < largest)
            secondLargest = a[i];

        if(a[i] < secondSmallest && a[i] > smallest)
            secondSmallest = a[i];
    }

    printf("Largest = %d\n", largest);
    printf("Second largest = %d\n", secondLargest);
    printf("Smallest = %d\n", smallest);
    printf("Second smallest = %d\n", secondSmallest);

    return 0;
}
