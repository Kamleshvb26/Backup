#include<stdio.h>
#include"header.h"


float calavg(int *arr,int size){
    float sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    return sum/size;
    
}

int findmax(int *arr,int size){
    int  mx=*arr;
    for (int i = 0; i < size; i++)
    {
        mx=(mx<*arr)?*arr:mx;
        arr++;
    }

    return mx;
    
}