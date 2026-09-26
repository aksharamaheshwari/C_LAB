#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int m1, n1, m2, n2;
    int i, j;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m1, &n1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &m2, &n2);

    if(m1 != m2 || n1 != n2)
    {
        printf("Matrix addition is not possible.\n");
        return 1;
    }

    printf("Enter first matrix:\n");

    for(i = 0; i < m1; i++)
    {
        for(j = 0; j < n1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for(i = 0; i < m2; i++)
    {
        for(j = 0; j < n2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < m1; i++)
    {
        for(j = 0; j < n1; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of matrices:\n");

    for(i = 0; i < m1; i++)
    {
        for(j = 0; j < n1; j++)
        {
            printf("%d ", sum[i][j]);
        }

        printf("\n");
    }

    return 0;
}
