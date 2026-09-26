#include <stdio.h>

int main()
{
    int a[10][10], b[10][10];
    int n, i, j;
    int symmetric = 1, skew = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    printf("Transpose of matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }

        printf("\n");
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != b[i][j])
            {
                symmetric = 0;
            }

            if(a[i][j] != -b[i][j])
            {
                skew = 0;
            }
        }
    }

    if(symmetric == 1)
    {
        printf("Matrix is symmetric.\n");
    }
    else if(skew == 1)
    {
        printf("Matrix is skew-symmetric.\n");
    }
    else
    {
        printf("Matrix is neither symmetric nor skew-symmetric.\n");
    }

    return 0;
}
