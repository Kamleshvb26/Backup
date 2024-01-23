#include <stdio.h>
#include "header.h"

int main()
{

    int r;
    printf("Plese enter radius :");
    scanf("%d", &r);
    float area, perimeter;
    areaAndPerimeter(r,&area,&perimeter);
    printf("Area is %f\n",area);
    printf("Perimeter is %f\n",perimeter);

    

    return 0;
}