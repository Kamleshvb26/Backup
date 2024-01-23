#include<stdio.h>

int main(){

    int n, pw;
    printf("Enter a numbers :");
    scanf("%d%d", &n, &pw);

    int ans=1;
    for(int i=0;i<pw;i++){
        ans=ans*n;
    }

    printf("Power is :%d\n",ans);
    return 0;
}