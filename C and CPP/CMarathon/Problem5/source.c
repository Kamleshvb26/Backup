#include <stdio.h>
#include <stdlib.h>
#include "header.h"


// Function to modify array using magic number
int ModifyArray(int *ptr, int magicNumber, int size, int ind)
{

    int pos = 0, temp;

    int *ans = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        if (ptr[i] < magicNumber)
        {
            pos++;
        }
    }
    int final=pos;

    //swapping elements 
    temp = ptr[ind];
    ptr[ind] = ptr[pos];
    ptr[pos] = temp;
    int i = 0, j = size - 1;

    for(int x=0;x<size;x++){
        if(ptr[x]<magicNumber){
            ans[i]=ptr[x];
            i++;
        }
        else if(ptr[x]>magicNumber){
            ans[j]=ptr[x];
            j--;
        }
        else{
            ans[pos]=ptr[x];
            pos++;
        }
    }
    printArray(ans,size);
    free(ans);
    return final;
}

// Function to accept array input from user
void accept(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("\n\n");
}

int magicIndex(int *ptr, int magicNumber, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] == magicNumber)
        {
            return i;  //return index of magic number 
        }
    }
    return -1; // Returned -1 if magic number is not present
}

//Function to display array 
void printArray(int *ptr, int size)
{
    printf("\n\nModified Array: [");
    for (int i = 0; i < size; i++)
    {
        printf("%d ,", ptr[i]);
    }
    printf("\b]\n\n");
}
