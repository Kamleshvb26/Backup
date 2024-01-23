#include<stdio.h>
#include"header.h"
void factorial(int number){
    int prod=1;
    for (int i = 2; i <= number; i++)
    {
        prod*=i;
    }

    printf("Factorial of %d is %d\n",number,prod);
    
}
void display(int number){
    
    printf("Table of %d\n\n",number);
    for (int i = 1; i < 11; i++)
    {
        printf("%d  x  %d  =  %d\n",number,i,number*i);
    }
    
}
void reverse(int number){
    int temp=number;
    int rev=0,rem;
    while(number!=0){
        rem=number%10;
        rev=rev*10+rem;
        number/=10;
    }
    printf("Reverse of %d  =  %d\n",temp,rev);
}
