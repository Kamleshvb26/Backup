#include<stdio.h>
#include"header.h"


int fndcoin(int* arr,int size, int newCoin,int *flag){

    
    for(int i=0;i<size-1;i++){ //checking for duplicate elements 
        if(arr[i]==arr[i+1]){
            return -1;         // if found duplicate returned -1
        }
    }

    for(int i=0;i<size;i++){
        if(arr[i]>newCoin){   //Checking if can place element at current index;
            *flag=1;
            return i;       
        }
        if(arr[i]==newCoin){   //Checking if can place element at current index;
            *flag=2;
            return i;       
        }
        
    }

    return size;              //if not find right place then place at last index 
}
