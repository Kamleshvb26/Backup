#include <iostream>
#include "header.h"


//Global Function to display All the Flights 
void displayAllFlight(Flight *arr, int curr)
{
    for (int i = 0; i < curr; i++)
    {
        arr[i].showInfo();
    }

    std::cout<<"\n\n";
}

//Global Search function to search flight 
int searchFlight(Flight *arr, int fno, int curr)
{
    for (int i = 0; i < curr; i++)
    {
        if (fno == arr[i].getFlightNumber())
        {
            arr[i].showInfo();
            return 1;
        }
    }

    //Return 0 if not found 
    return 0;
}

int main()
{

    
    int n;//number of flights

    std::cout << "Enter number of flights : ";
    std::cin >> n;

    Flight arr[n];

    //local variables
    int choice, currFlights = 0, fno;
    int flag = 0;

    while (1) //To continously prompt user 
    {

        //Menu 

        std::cout<<"\n\n";
        std::cout << "Enter 1 to add flight \n";
        std::cout << "Enter 2 to display all the flights \n";
        std::cout << "Enter 3 to search a flight \n";
        std::cout << "Enter 4 to show total number of flights \n";
        std::cout << "Enter 5 to exit \n";

        std::cout << "\nEnter choice : ";
        std::cin >> choice;  //Input Menu choice 
        switch (choice)
        {
        //Input 
        case 1:
            if (currFlights == n)
            {
                std::cout << "Memory Full \n";
            }
            else
            {
                arr[currFlights].feedInfo();
                currFlights++;
            }
            break;

        //Display
        case 2:
            if (currFlights == 0)
            {
                std::cout << "No Flights \n";
            }
            else
            {
                displayAllFlight(arr, currFlights);
            }

            break;

        //Search 
        case 3:
            std::cout << "Enter flight number to search : ";
            std::cin >> fno;
            flag = searchFlight(arr, fno, currFlights);
            if (flag == 0)
            {
                std::cout << "No flight found \n";
            }

            break;
        //Exit 
        case 4:
            Flight::calculateTotalFlightObjects();

            break;
        //Exit 
        case 5:
            exit(0);

            break;
        //If Invalid choice is entered 
        default:
            std::cout << "Enter Valid Choice \n";
            break;
        }
        std::cout<<"\n\n";

    }

    return 0;
}