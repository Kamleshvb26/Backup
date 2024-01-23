#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{

    int number, choice;

    while (1)
    {
        printf("Pleasse enter a number :");
        scanf("%d", &number);
        printf("\n");
        choice=0;
        while (choice != 4) //Break from loop if choice is 4 to change the number
        {
            printf("Enter 1 to calculate factorial of the number \n");
            printf("Enter 2 display table of the number \n");
            printf("Enter 3 to reverse the number \n");
            printf("Enter 4 to Change the number \n");
            printf("Enter 5 to exit \n");

            printf("\nEnter choice :");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                printf("\nFactorial\n");
                factorial(number);
                printf("\n");
                break;
            case 2:
                printf("\nDisplay\n");
                display(number);
                printf("\n");
                break;
            case 3:
                printf("\nReverse\n");
                reverse(number);
                printf("\n");
                break;
            case 4:
                break;
            case 5:
                printf("\n......Exited.....\n");
                exit(0);
                break;

            default:
                printf("Please Enter valid choice \n");
                break;
            }
        }
        printf("\n\n");
    }

    return 0;
}