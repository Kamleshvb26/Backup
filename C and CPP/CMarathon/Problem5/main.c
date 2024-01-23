#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#define LIMIT 10

int main()
{

    int arr[] = {7, 2, 9, 1, 5, 5, 8, 3, 4, 11};
    int size, magicNumber, ans, ind;

    while (1)
    {
        printf("Enter number of elements : ");
        scanf("%d", &size);
        if (size > 10 || size <= 0)
        {
            printf("Please enter valid input, valid inputs from 1 to 10 \n\n");
        }
        break;
    }

    int *ptr = (int *)malloc(size * sizeof(int));

    int choice;

    while (1)
    {
        printf("\n\nEnter 1 to accept array or change existing array \n");
        printf("Enter 2 to call ModifyArray Function \n");
        printf("Enter 3 Exit \n\n");
        printf("Enter Choice : ");

        scanf("%d", &choice);
        printf("\n\n");

        switch (choice)
        {
        case 1:
            printf("Enter array inputs \n");
            accept(ptr, size);
            break;
        case 2:
            printf("Enter Magic Number : ");
            scanf("%d", &magicNumber);
            ind = magicIndex(ptr, magicNumber, size);
            if (ind == -1)
            {
                printf("\n\n-1, Magic number is not present, Please Retry \n\n");
            }
            else
            {
                ans = ModifyArray(ptr, magicNumber, size, ind);
                printf("Starting Index of Magic Number: %d", ans);
            }
            break;
        case 3:
            free(ptr);
            exit(0);
            break;

        default:
            printf("Please Enter valid choice from 1 2 and 3 \n");
            break;
        }
    }
    
    //Free memory 
    free(ptr);

    return 0;
}