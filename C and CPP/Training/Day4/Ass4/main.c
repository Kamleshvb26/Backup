// Write program to ckeck triangle is isosceles, equilateral or scalene

#include <stdio.h>
#include "header.h"

int main()
{

    int a1, a2, a3;
    printf("Plese enter sides :");
    scanf("%d%d%d", &a1, &a2, &a3);
    if (checkTrianleType(a1, a2, a3) == 1)
    {
        printf("Triangle is equilateral \n");
    }
    else if (checkTrianleType(a1, a2, a3) == 2)
    {
        printf("Triangle is isosceles \n");
    }
    else
    {
        printf("Triangle is scalen \n");
    }
    return 0;
}