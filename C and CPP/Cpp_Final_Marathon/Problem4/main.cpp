#include <iostream>
#include <cstring>

#include "product.h"

void searchProductByType(Product arr[], int n, int prodType)
{
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i].getProductType() == prodType)
        {
            flag = 1;
            std::cout << arr[i] << "\n";
            break;
        }
    }

    if (!flag)
    {
        std::cout << "No Product found "
                  << "\n";
    }
}
void searchProductById(Product arr[], int n, int prodId)
{
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i].getProductId() == prodId)
        {
            flag = 1;
            std::cout << arr[i] << "\n";
            break;
        }
    }

    if (!flag)
    {
        std::cout << "No Product found "
                  << "\n";
    }
}
void searchProductByBrand(Product arr[], int n, const char *Pbrand)
{
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(arr[i].getProductBrand(), Pbrand))
        {
            flag = 1;
            std::cout << arr[i] << "\n";
            break;
        }
    }

    if (!flag)
    {
        std::cout << "No Product found "
                  << "\n";
    }
}
void displayProdWithHighPrice(Product arr[], int n)
{
    int mx = 0;
    int ind;
    for (int i = 0; i < n; i++)
    {
        if (mx < arr[i].getPrice())
        {
            mx = arr[i].getPrice();
            ind = i;
        }
    }

    std::cout<< arr[ind] <<"\n"; 
}
float calculateAvgPrice(Product arr[], int n)
{
    float sum=0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i].getPrice();
    }

    return sum / n;
}

float calculateTotalTaxAmount(Product arr[], int n)
{
    float sum=0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i].getTaxAmount();
    }

    return sum;
}

int main()
{
    Product arr[3];

    for (int i = 0; i < 3; i++)
    {
        arr[i].accept();
    }
    // local variables
    int choice, id, type;
    char Pbrand[20];
    int flag = 0;
    while (1) // To continously prompt user
    {
        // Menu
        std::cout << "\n\n";
        std::cout << "Enter 1 to display\n";
        std::cout << "Enter 2 to find product by id\n";
        std::cout << "Enter 3 to find product by type\n";
        std::cout << "Enter 4 to find product by brand\n";
        std::cout << "Enter 5 to display product with highest price  \n";
        std::cout << "Enter 6 to calculate average price  \n";
        std::cout << "Enter 7 to calculate total tax \n";
        std::cout << "Enter 8to exit  \n";
        std::cout << "\nEnter choice : ";
        std::cin >> choice; // Input Menu choice
        switch (choice)
        {
        // Display
        case 1:
            for (int i = 0; i < 3; i++)
            {
                std::cout << arr[i] << "\n";
            }

            break;
        //   Search
        case 2:
            std::cout << "Enter Id to search : ";
            std::cin >> id;
            searchProductById(arr, 3, id);
            break;
        // Search
        case 3:
            std::cout << "Enter Id to search : ";
            std::cin >> type;
            searchProductById(arr, 3, type);
            break;
        // Search
        case 4:
            std::cout << "Enter Id to search : ";
            std::cin >> Pbrand;
            searchProductByBrand(arr, 3, Pbrand);
            break;
        case 5:
            displayProdWithHighPrice(arr,3) ;
            break;
        case 6:
            std::cout<< "Average price : "<<calculateAvgPrice(arr,3) <<"\n";
            break;
        case 7:
            std::cout<< "Total Tax : "<<calculateTotalTaxAmount(arr,3) <<"\n";
            break;
        //
        case 8:
            exit(0);
            break;
        // If Invalid choice is entered
        default:
            std::cout << "Enter Valid Choice \n";
            break;
        }
        std::cout << "\n\n";
    }

    return 0;
}