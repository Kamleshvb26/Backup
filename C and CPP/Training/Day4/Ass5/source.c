//Write program to find angle between hour hand and minute hand when time is given 
#include<stdio.h>
#include"header.h"


float findAngle(float hour, float min){
    float minPos=6*min;

    float hourPos=hour*30+min*0.5;

    printf("%f %f\n",minPos,hourPos);

    float diff=(minPos-hourPos)<0?hourPos-minPos:minPos-hourPos;
    if(diff>180){
        return 360.0-diff;
    }

    return diff;
}