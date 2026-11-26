#include <stdio.h>
int main()
{
    int matrix[10][10];
    int rows, cols, i, j,*p,sum;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    p = &matrix[0][0];
    printf("Sum of each row:\n");
    for (i = 0; i < rows; i++)
    {
        sum = 0;
        for (j = 0; j < cols; j++)
        {
            sum = sum + *(p + i * cols + j);
        }
        printf("Row %d = %d\n", i + 1, sum);
    }
    printf("Sum of each column:\n");
    for (j = 0; j < cols; j++)
    {
        sum = 0;
        for (i = 0; i < rows; i++)
        {
            sum = sum + *(p + i * cols + j);
        }
        printf("Column %d = %d\n", j + 1, sum);
    }
    return 0;
}
