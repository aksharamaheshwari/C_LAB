#include <stdio.h>

int main()
{
    int a[10][10];
    int m, n, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix is:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}
