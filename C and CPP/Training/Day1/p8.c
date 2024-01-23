#include<stdio.h>

int main(){

    int costPrice,sellingPrice;
    printf("Enter cost price and selling price :");
    scanf("%d%d",&costPrice,&sellingPrice);
    if(costPrice>sellingPrice){
        printf("Loss \n");
    }
    else if(sellingPrice>costPrice){
        printf("Profit \n");
    }
    else{
        printf("Not profit nor loss \n");
    }
    return 0;
}