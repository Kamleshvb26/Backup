#include <stdio.h>
#include "header.h"

int main()
{

    int arr[] = {2, 4,4, 6, 8};

    int size=4, newCoin;

    printf("Enter newCoin to insert : ");
    scanf("%d", &newCoin);

    int flag = 1;

    int ans = fndcoin(arr, size, newCoin, &flag);

    if (ans == -1)      //Array contains duplicate elements 
    {
        printf("-1, Sorted array has duplicate number. Hence output is -1\n");
    }
    else if (flag == 1)//flag 1 means target not found
    {
        printf("%d, The target value is nont found at index. But the right place is index %d to maintain ascending order. Hence output is %d\n", ans,ans,ans);
    }
    else               //Target Found 
    {
        printf("%d, The target value found at the index %d. Hence output is %d\n",ans,ans,ans);
    }
    return 0;
}