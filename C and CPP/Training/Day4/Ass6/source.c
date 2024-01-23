#include<stdio.h>
#include"header.h"

int fact(int n){
    if(n<=1){
        return 1;
    }

    return n*fact(n-1);

}


int permutation(int n,int r){
    return fact(n)/fact(n-r);
}