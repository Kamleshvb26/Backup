#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#define LIMIT 10     // limit

int main()
{

    int currentNumOfSym = 0; // Number of symbols currently stored
    int num = 0, ans, value;
    char symToSearch, symbol;

    struct SymbolDecoder symbols[LIMIT];

    while (1)
    {
        printf("Enter the number of symbols in the Magical Symbol Translator :");
        scanf("%d", &num);

        if (num > LIMIT)
        {
            printf("Please enter 10 or less\n");
            continue;
        }
        if (num <= 0)
        {
            // prompt for valid input
            printf("Please enter value between 1 to 10 \n");
            continue;
        }
        break;

    }

    int choice;

    while (1)
    {

        printf("\n\nEnter 1 to input mystical symbol \n");
        printf("Enter 2 to decode mystical symbol \n");
        printf("Enter 3 to input Exit \n\n");

        printf("Enter Choice :");
        scanf("%d", &choice); // Ask for choice 

        printf("\n\n");

        switch (choice)
        {
        case 1:
            if (currentNumOfSym == num)  //check if can insert symbol
            {
                printf("Stack is Full \n\n");
            }
            else
            {
                printf("Enter the mystical symbols and their corresponding numeric values \n\n");
                printf("Mystical Symbol %d :",currentNumOfSym+1);
                getchar();
                scanf("%c", &symbol);
                printf("Numeric Value %d :", currentNumOfSym + 1);
                getchar();

                scanf("%d", &value);
                if (validate(symbols, currentNumOfSym, symbol, value))
                {
                    //calling function to accept input 
                    accept(symbols, currentNumOfSym, symbol, value);
                    currentNumOfSym++;
                }
                else
                {
                    printf("\n\nNot a valid input, Retry \n\n");
                }
            }
            break;
        case 2:
            if (currentNumOfSym == 0)
            {
                printf("Stack is Empty \n\n");
            }
            else
            {
                printf("Enter symbol to decode :");
                getchar();

                scanf("%c", &symToSearch);
                ans = decodeSymbol(symbols, currentNumOfSym, symToSearch);
                printf("The numeric value of the mystical symbol %c is %d\n\n", symToSearch, ans);
            }
            break;
        case 3:
            //exit from code 
            exit(0);
            break;

        default:
            //if user entered other than given choice 
            printf("Please Enter Valid choice \\nn");
            break;
        }
    }

    return 0;
}