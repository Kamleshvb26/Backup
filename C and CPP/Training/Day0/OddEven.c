#include<stdio.h>

int oddEven(int n){
    return (n%2==0);
}

int main(){

    printf("Enter number :");
    int n;
    scanf("%d",&n);
    if(oddEven(n)){
    printf("Even\n");
    }else{
        printf("Odd\n");
    }
    return 0;
}