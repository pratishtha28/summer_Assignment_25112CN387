#include <stdio.h>
int armstrong(int n)
{
    int sum = 0, temp = n, rem;
    while(temp > 0)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    return sum == n;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(armstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}