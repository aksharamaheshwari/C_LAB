#include <stdio.h>
int ascending(int a, int b)
{
    return a > b;
}
int descending(int a, int b)
{
    return a < b;
}
void sort(int arr[], int n, int (*compare)(int, int))
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (compare(arr[j], arr[j + 1]))
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[100], n, choice;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("1. Ascending order\n");
    printf("2. Descending order\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1)
        sort(arr, n, ascending);
    else if (choice == 2)
        sort(arr, n, descending);
    else
    {
        printf("Invalid choice.\n");
        return 0;
    }
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
