#include <stdio.h>

void findSecondLargest(int a[], int n, int *largest, int *second, int *found)
{
    if (n == 0)
        return;

    findSecondLargest(a, n - 1, largest, second, found);

    if (a[n - 1] > *largest)
    {
        *second = *largest;
        *largest = a[n - 1];
        *found = 1;
    }
    else if (a[n - 1] < *largest)
    {
        if (*found == 0 || a[n - 1] > *second)
        {
            *second = a[n - 1];
            *found = 1;
        }
    }
}

int main()
{
    int a[100], n, i;
    int largest, second, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Fewer than two distinct elements exist.");
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];

    findSecondLargest(a, n, &largest, &second, &found);

    if (found == 0)
        printf("Fewer than two distinct elements exist.");
    else
        printf("Second-largest distinct element = %d", second);

    return 0;
}
