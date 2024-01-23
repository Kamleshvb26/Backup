//write a programm to find permutation if n and r is given  

#include<stdio.h>
#include"header.h"

int main(){

    int n,r;
    printf("Plese enter number :");
    scanf("%d%d",&n,&r);
    int ans=permutation(n,r);
    printf("Permutaion is %d\n",ans);

    return 0;
}