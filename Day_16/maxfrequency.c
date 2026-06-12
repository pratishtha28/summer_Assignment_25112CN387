#include <stdio.h>
int main()
{
    int n, i, j, maxCount = 0, element;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        int count = 1;
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > maxCount)
        {
            maxCount = count;
            element = arr[i];
        }
    }
    printf("Element = %d\nFrequency = %d", element, maxCount);
    return 0;
}