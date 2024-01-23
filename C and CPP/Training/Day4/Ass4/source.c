#include"header.h"


int checkTrianleType(int a1,int a2, int a3){
    if(a1==a2 && a2==a3){
        return 1;
    }
    if(a1==a2 || a2==a3 || a1==3){
        return 2;
    }
    else{
        return 3;
    }
}
