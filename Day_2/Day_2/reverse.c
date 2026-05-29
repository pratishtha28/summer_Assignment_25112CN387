#include<stdio.h>
int main(){
    int n,r,rev=0;
    printf("enter a nuber:\n");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    printf("Reverse of the number is: %d",rev);

}