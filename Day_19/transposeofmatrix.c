#include <stdio.h>
int main()
{
    int matrix[10][10], transpose[10][10];
    int i, j, rows, cols;

    // Matrix ka size input karenge
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // matrix ke elements input karenge
    printf("\nEnter elements of matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // transpose matrix calculate karenge
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display original matrix
    printf("\nOriginal Matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Display transpose matrix
    printf("\nTranspose Matrix:\n");
    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}