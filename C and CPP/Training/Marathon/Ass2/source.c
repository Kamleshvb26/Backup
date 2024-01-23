#include<stdio.h>
#include<stdlib.h>
#include"header.h"


void accept(struct Product *ptr)
{
    for (int i = 0; i < 3; i++)
    {
        printf("Enter proctuct code :");
        scanf("%d",&ptr[i].product_code);
        printf("Enter proctuct name :");
        scanf("%d",ptr[i].name);
        printf("Enter proctuct code :");
        scanf("%d",&ptr[i].price);
        printf("Enter proctuct code :");
        scanf("%d",&ptr[i].category);
    }
}

void searchProduct(struct Product *ptr, int product_code){
    for(int i=0;i<3;i++){
        if(ptr[i].product_code==product_code){
            printf("searchProduct %d\n",i);
            break;
        }
    }
}

void searchInRange(struct Product *ptr, int low,int high){
    for(int i=0;i<3;i++){
        if(ptr[i].price >= low && ptr[i].price <= high){
            printf("searchInRange %d",i);
        }
    }
}

void DisplayCat(struct Product *ptr,int cat){
    for (int i = 0; i < 3; i++)
    {
        if(ptr[i].category==cat){
            printf("Display cat %d\n",i);
        }
    }
    
}


void DisplayM(struct Product *ptr){
    for (int i = 0; i < 3; i++)
    {
        if((ptr[i].name)[0]=='M'){
            printf("DisplayM cat %d\n",i);
        }
    }
}

