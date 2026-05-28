#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("enterr a number:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        fact*=i;
    }
    printf("Factorial of %d is: %d",n,fact);
    return 0;
}