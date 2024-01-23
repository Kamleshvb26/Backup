#include<stdio.h>

int reverse(int n){
    int rem;
    int rev=0;
    while (n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    return rev;
    
}
int main(){
    printf("Enter number :");
    int n;
    scanf("%d",&n);
    int ans =reverse(n);
    printf("Reverse :%d\n",ans);
    return 0;
}