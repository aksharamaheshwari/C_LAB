#include <stdio.h>

int multiplyElement(int A[][10], int B[][10], int row, int col, int k, int c1)
{
    if (k == c1)
        return 0;

    return A[row][k] * B[k][col]
           + multiplyElement(A, B, row, col, k + 1, c1);
}

void multiplyMatrix(int A[][10], int B[][10], int C[][10],
                    int r1, int c1, int c2, int i, int j)
{
    if (i == r1)
        return;
    if (j == c2)
    {
        multiplyMatrix(A, B, C, r1, c1, c2, i + 1, 0);
        return;
    }
    C[i][j] = multiplyElement(A, B, i, j, 0, c1);

    multiplyMatrix(A, B, C, r1, c1, c2, i, j + 1);
}

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2;
    int i, j;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    multiplyMatrix(A, B, C, r1, c1, c2, 0, 0);

    printf("Resultant matrix:\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
