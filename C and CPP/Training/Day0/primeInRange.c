#include<stdio.h>

int isPrime(int n){
    int flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}

int main(){
    printf("Enter number :");
    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=2;i<=n;i++){
        count+=isPrime(i);
    }
    printf("Total prime number upto %d are %d\n",n,count);
    
    return 0;
}