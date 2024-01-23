//Find number is Odd or Even;

#include<stdio.h>
#include"header.h"

int main(){

    int n;
    printf("Plese enter number :");
    scanf("%d",&n);
    if(check(n)){
        printf("Number is Even\n");
    } 
    else{
        printf("Number is Odd\n");
    }   
    return 0;
}