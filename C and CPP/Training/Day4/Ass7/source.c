#include<stdio.h>
#include"header.h"


void areaAndPerimeter(int r,float *area, float *perimeter){
    printf("Here");
    *area=3.142*r*r;
    
    *perimeter=3.142*2*r;
}