#include<stdio.h>
int main(){
    int i,n,count=0;
    printf("enter a number:\n");
    scanf("%d",&n);
    if(n==0||n==1){
        printf("not a prime number");
    }
    else{
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                count++;
                break;
            }
        }
        if(count==0){
            printf("prime number");
        }
        else{
            printf("not a prime number");
        }
    }
    return 0;
}