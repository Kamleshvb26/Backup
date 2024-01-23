#include<stdio.h>

int sumOfDigit(int n){
    int rem;
    int sum=0;
    while (n>0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    return sum;
    
}
int main(){
    printf("Enter number :");
    int n;
    scanf("%d",&n);
    int ans =sumOfDigit(n);
    printf("Sum of Digit is :%d\n",ans);
    return 0;
}