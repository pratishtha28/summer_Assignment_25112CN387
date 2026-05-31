#include<stdio.h>
int main(){
    int n, sum = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n && n!=1){
        printf("Strong Number");
    }
    else{
        printf("Not a Strong Number");
    }
    return 0;
}