#include<stdio.h>

int main(){

    int n;
    printf("Enter number :");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("Perfect number \n");
    
    }
    else{
        printf("Not a perfect number \n");

    }
    return 0;
}