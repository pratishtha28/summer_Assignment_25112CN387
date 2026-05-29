#include<stdio.h>
int main(){
    int n,r,rev=0,n1;
    printf("enter a nuber:\n");
    scanf("%d",&n);
    n1=n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    if(n1==rev){
        printf("The number is a palindrome.");
    }
    else{
        printf("The number is not a palindrome.");
    }
    return 0;
}