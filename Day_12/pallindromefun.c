#include <stdio.h>
int palindrome(int n)
{
    int rev = 0, temp = n;
    while(temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(palindrome(n))
        printf(" %d is a palindrome.", n);
    else
        printf(" %d is not a palindrome.", n);
    return 0;
}