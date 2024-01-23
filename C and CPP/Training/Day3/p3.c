#include<stdio.h>

int main(){

    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    int sum=0;
    int val=0;
    for (int i = 0; i < n; i++)
    {
        val=val*10+1;
        sum+=val;
    }

    printf("Sum is %d\n",sum);
    
    return 0;
}