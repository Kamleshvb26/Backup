//Find binary representation of decimal number 

#include<stdio.h>
#include"header.h"

int main(){

    int n;
    printf("Plese enter number :");
    scanf("%d",&n);
    int bin=printBinary(n);
    printf("Binary of %d is %d\n",n,bin);
    
}