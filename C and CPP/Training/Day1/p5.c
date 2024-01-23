#include<stdio.h>

int main(){

    int num1,num2;
    printf("Enter numbers :");
    scanf("%d%d",&num1,&num1);
    if(num1>num2){
        printf("num1 is greater than num2 \n");
    }
    else if(num2>num1){
        printf("num2 is greater than num1 \n");
    }
    else{
        printf("Equal \n");
    }
    return 0;
}