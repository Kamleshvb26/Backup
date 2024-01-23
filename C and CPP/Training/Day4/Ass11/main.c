#include<stdio.h>
// #include"header.h"/

int main(){

    int n;
    printf("Plese enter number :");
    scanf("%d",&n);
    // test()
    int arr[n];

    for(int i=0;i<n;i++){
        arr[i]=5;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}