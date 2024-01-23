#include <stdio.h>
#include "header.h"

int main()
{

    int arr[] = {10, 20, 40, 80};
    float avg = calavg(arr, 4);
    int mx = findmax(arr, 4);

    
    printf("Average is : %f\n",avg);
    printf("Max number  is : %d\n",mx);
    
    return 0;
}
