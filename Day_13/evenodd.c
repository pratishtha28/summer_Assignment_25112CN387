#include <stdio.h>
int main()
{
    int n, i, even = 0, odd = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even = %d\n", even);
    printf("Odd = %d", odd);
    return 0;
}