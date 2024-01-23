#include <iostream>
#include <cstring>
#include "inventory.h"

void search(Inventory *arr, int n, int prodCode)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].getProductCode() == prodCode)
        {
            std::cout << arr[i] << "\n";
            flag = 1;
            break;
        }
    }
    if (!flag)
    {
        std::cout << "No product found with this product code"
                  << "\n";
    }
}
void Display(Inventory *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << "\n";
    }
}

int main()
{

    Inventory *arr = new Inventory[3];

    
    

    for (int i = 0; i < 3; )
    {
        try
        {
            std::cout<< "Product "<<i+1<<" :" <<"\n";
            arr[i].accept();
            i++;
        }
        catch (InventoryException &e)
        {
            std::cout << e.what() << "\n";
        }
    }

    Display(arr, 3);

    // Purchase Product;
    arr[0].purchase();

    std::cout << arr[0] << "\n";

    arr[1].sale();

    std::cout << arr[1] << "\n";

    delete []arr;

    return 0;
}