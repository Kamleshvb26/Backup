#include<stdio.h>
#include"header.h"


int printBinary(int n){
    int mult=1;
    int bin=0;     
    while(n!=0){
        bin+=mult*(n%2);
        n/=2;
        mult*=10;
    }
    return bin;

}