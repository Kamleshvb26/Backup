#include <iostream>
#include "inventory.h"




Inventory::Inventory()
{
    productCode = 0;
    balanceStock = 21;
    descriptionOfProduct = "";
}
Inventory::Inventory(int code, int stock, std::string des) : productCode(code), balanceStock(stock), descriptionOfProduct(des)
{
  
     if(stock<=20){
        throw InventoryException("Minimum Stock should be 20");
    }
}
void Inventory::purchase()
{
    int n;
    std::cout<< "Enter number of stock to purchase" <<"\n";
    std::cin>> n ;
    balanceStock+=n;
}
void Inventory::sale()
{
    int n;
    std::cout<< "Enter number of stock to sale" <<"\n";
    std::cin>> n ;
    if(balanceStock-n<20){
        throw InventoryException("Low Stock");
    }else{

        balanceStock--;
    }
}



void Inventory::accept()
{
    std::cout << "Enter Product code : " ;
    std::cin>> productCode ;
    std::cout << "Enter Balance Stock : ";
    std::cin>> balanceStock ;
    if(balanceStock<=20){
        throw InventoryException("Stock should be greater than 20");
    }
    std::cout << "Enter Product description : ";
    std::cin>> descriptionOfProduct ;
}
void Inventory::display()
{
    std::cout << "Product code : " << productCode << "\n";
    std::cout << "Balance Stock : " << balanceStock << "\n";
    std::cout << "Product description : " << descriptionOfProduct << "\n";
}

int Inventory::getProductCode()
{
    return productCode;
}

int Inventory::getBalanceStock()
{
    return balanceStock;
}
void Inventory::setBalanceStock(int balanceStock_)
{
    balanceStock = balanceStock_;
}

std::string Inventory::getDescriptionOfProduct()
{
    return descriptionOfProduct;
}

void Inventory::setDescriptionOfProduct(std::string &descriptionOfProduct_)
{
    descriptionOfProduct = descriptionOfProduct_;
}

std::ostream &operator<<(std::ostream &os, Inventory &obj)
{
    os<< "Product code : " << obj.productCode << "\n";
    os<< "Balance Stock : " << obj.balanceStock << "\n";
    os<< "Product description : " << obj.descriptionOfProduct << "\n";

    return os;
}