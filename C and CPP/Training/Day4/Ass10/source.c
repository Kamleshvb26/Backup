#include<stdio.h>
#include"header.h"


void acceptarray(int *ptr,int size){
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
}

void printarray(int *ptr,int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",ptr[i]);
    }

    printf("\n");
    
}