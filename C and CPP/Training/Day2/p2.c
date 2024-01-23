#include<stdio.h>

int main(){

    int length , breadth ;
    float radius;

    printf("Please enter length and breadth :");
    scanf("%d%d",&length,&breadth);

    int area=length*breadth;
    int perimeter=2*(length+breadth);

    printf("Perimeter is %d\n",perimeter);
    printf("Area is %d\n",area);

    printf("Please enter radius :");
    scanf("%f",&radius);

    float areaC=3.142*radius*radius;
    float circumference=2*3.142*radius;

    printf("Area of circle is %f\n",areaC);
    printf("circumference is %f\n",circumference);


    
    return 0;
}