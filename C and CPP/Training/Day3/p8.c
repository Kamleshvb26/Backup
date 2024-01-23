#include<stdio.h>

int isPrime(int n){
    int flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}

int main(){

    int n;
    printf("Enter a number of prime numbers :");
    scanf("%d", &n);

    int ct=0;
    int i=2;
    while (ct!=n){
        if(isPrime(i)){
            printf("%d ",i);
            ct++;
        }
        i++;
    }

    printf("\nprime numbers in range 100 to 200 are :\n");

    for (int i = 100; i < 400; i++)
    {
        if(isPrime(i)){
            printf("%d ",i);
        }
    }
    return 0;
}