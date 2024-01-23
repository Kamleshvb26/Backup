#include <stdio.h>
#include "header.h"

int main()
{

    float hr, mn;
    printf("Plese enter hour and minnute :");
    scanf("%f%f", &hr, &mn);
    float angle = findAngle(hr, mn);
    printf("Angle is %f\n",angle);

    return 0;
}