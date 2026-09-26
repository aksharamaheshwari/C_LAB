#include <stdio.h>

int main()
{
    int a[100];
    int n, i, p, data;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter insertion position: ");
    scanf("%d", &p);

    if(p < 1 || p > n + 1)
    {
        printf("Invalid position.\n");
        return 1;
    }

    printf("Enter value: ");
    scanf("%d", &data);

    for(i = n; i >= p; i--)
    {
        a[i] = a[i - 1];
    }

    a[p - 1] = data;
    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
