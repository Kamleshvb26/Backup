#include<stdio.h>

int isArmstrong(int n){
    int rem;
    int sum=0;
    int temp=n;
    while (n>0)
    {
        rem=n%10;
        sum+=(rem*rem*rem);
        n/=10;
    }
    return sum==temp;
}

int main(){

    printf("Enter number :");
    int n;
    scanf("%d",&n);
    if(isArmstrong(n)){
    printf("Armstrong\n");
    }else{
        printf("Not Armstrong\n");
    }
    return 0;
}