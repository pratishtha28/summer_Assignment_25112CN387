#include <stdio.h>
int main()
{
    int n, i, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    temp = arr[n - 1];
    for(i = n - 1; i > 0; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    printf("Array after right rotation: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}