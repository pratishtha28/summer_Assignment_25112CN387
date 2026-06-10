#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements are: ");
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    return 0;
}