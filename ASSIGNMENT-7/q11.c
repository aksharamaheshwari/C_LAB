#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int m, p, q, n;
    int i, j, k;

    printf("Enter rows and columns of A: ");
    scanf("%d %d", &m, &p);

    printf("Enter rows and columns of B: ");
    scanf("%d %d", &q, &n);

    if(p != q)
    {
        printf("Multiplication is not possible.\n");
        return 1;
    }

    printf("Enter first matrix:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < p; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for(i = 0; i < q; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            c[i][j] = 0;

            for(k = 0; k < p; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of matrices:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]);
        }

        printf("\n");
    }

    return 0;
}
