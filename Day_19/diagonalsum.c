#include <stdio.h>
int main()
{
    int matrix[10][10];
    int i, j, n, sum = 0;

    // Input size of matrix
    printf("Enter the order of square matrix: ");
    scanf("%d", &n);
    
    // Input matrix elements
    printf("\nEnter elements of matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display matrix
    printf("\nMatrix is:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Sum of main diagonal elements
    for(i = 0; i < n; i++)
    {
        sum = sum + matrix[i][i];
    }

    printf("\nSum of diagonal elements = %d", sum);

    return 0;
}