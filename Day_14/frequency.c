#include <stdio.h>
int main()
{
    int n, i, key, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");    
    scanf("%d", &key);
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
            count++;
    }
    printf("Frequency = %d", count);
    return 0;
}