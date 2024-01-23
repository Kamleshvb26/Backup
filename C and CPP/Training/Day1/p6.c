#include<stdio.h>

int main(){

    int age;
    printf("Enter age :");
    scanf("%d",&age);
    if(age>=18){
        printf("You can vote \n");
    }
    else{
        printf("You are minor \n");
    }
    return 0;
}