#include<stdio.h>

int fact(int n){
    int prod=1;
    for (int i = 1; i <=n; i++)
    {
        prod*=i;
    }
    return prod;
    
}

int main(){
    
    printf("Enter number :");
    int n;
    scanf("%d",&n);
    int ans=fact(n);
    printf("Factorial is :%d\n", ans);
    return 0;
}