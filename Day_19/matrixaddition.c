#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int i, j, r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Checking condition for addition
    if(r1 != r2 || c1 != c2)
    {
        printf("Matrix addition is not possible.");
        return 0;
    }

    printf("\nEnter elements of first matrix:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Addition of matrices
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of Matrices:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}