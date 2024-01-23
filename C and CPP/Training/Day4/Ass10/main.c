#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{

    int n;
    printf("Plese enter size of an array:");

    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));

    printf("adress %p\n", ptr);

    acceptarray(ptr, n);

    printarray(ptr, n);

    free(ptr);

    printf("adress %p\n", ptr);

    return 0;
}