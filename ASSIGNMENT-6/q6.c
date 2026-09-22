#include <stdio.h>

int main()
{
    int rows, i, j;
    int n = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    if(rows <= 0)
    {
        printf("Please enter a positive number.");
    }
    else
    {
        for(i = 1; i <= rows; i++)
        {
            for(j = 1; j <= i; j++)
            {
                printf("%d ", n);
                n++;
            }

            printf("\n");
        }
    }

    return 0;
}
