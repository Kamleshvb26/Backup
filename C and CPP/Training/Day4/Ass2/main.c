//Check if number is prime or not 

#include<stdio.h>
#include"header.h"

int main(){

    int n;
    printf("Plese enter number :");
    scanf("%d",&n);
    if(checkPrime(n)){
        printf("Prime \n");
    } 
    else{
        printf("Not Prime \n");
    }   
    return 0;
}