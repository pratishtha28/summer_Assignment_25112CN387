#include <stdio.h>
int main()
{
    int n, i, j, sum;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the sum: ");
    scanf("%d", &sum);
    printf("Pairs:\n");
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
                printf("%d %d\n", arr[i], arr[j]);
        }
    }
    return 0;
}