#include<stdio.h>

int main(){

    int sum=0;

    for (int i = 100; i < 400; i++)
    {
        if(i%2==0){
            sum+=i;
        }
    }

    printf("Sum of odd number between 100 and 400 is %d\n",sum);
    
    return 0;
}