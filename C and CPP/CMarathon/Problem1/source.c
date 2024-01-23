#include <stdio.h>
#include "header.h"

void countPizzas(int Budget)
{
    int curr_bill = 0;    // Stores current bill
    int cost;
    int vegPizzas = 0;    // Counter for veg Pizzas
    int nonVegPizzas = 0; // Counter for non veg Pizzas

    while (curr_bill < Budget)
    {

        printf("Enter cost of pizza :");
        scanf("%d", &cost);
        if (cost != 5 && cost != 10)
        {
            // prompting user to enter valid input

            printf("Cost price can only be 5 or 10, Please re-enter valid cost\n");
        }
        else if (cost == 5)
        {
            // if user enter 5 then increment counter for veg pizza
            curr_bill += 5;
            vegPizzas++;
        }
        else
        {
            // if user enter 10 then increment counter for veg pizza
            if ((Budget - curr_bill) < 10)
            {
                printf("Cant take Non Veg Pizza\n");
            }
            else
            {
                curr_bill += 10;
                nonVegPizzas++;
            }
        }
    }

    printf("Summary \n");
    printf("Pizza Party Budget : %d\n", Budget);
    printf("Non Veg Pizza : %d\n", nonVegPizzas);
    printf("Veg Pizza : %d\n", vegPizzas);
}
