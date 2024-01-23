#include <iostream>
#include <cstring>
#include "product.h"

class IndexException : public std::exception
{
    char *name;

public:
    IndexException(const char *msg)
    {
        name = new char[60];
        strcpy(name, msg);
    }
    const char *what()
    {
        return name;
    }
    ~IndexException(){
        delete name;
    }
};

Product::Product()
{
    productId=0;
    name="";
    strcpy(brand,"");
    price=0;
    typeOfProduct=MOBILE_PHONE;
    taxAmount=0;
}

void Product::accept()
{
    std::cout<< "Enter id : ";
    std::cin>> productId ;
    std::cout<< "Enter name : ";
    std::cin>> name ;
    std::cout<< "Enter brand : ";
    std::cin>> brand ;
    std::cout<< "Enter price : ";
    std::cin>> price ;
    std::cout<< "Enter 1. Mobile Phone 2.Laptop 3.TV : ";
    int n;
    std::cin>> n ;
    switch (n)
    {
    case 1:
        typeOfProduct=MOBILE_PHONE;
        break;
    case 2:
        typeOfProduct=LAPTOP;
       
        break;
    case 3:
        typeOfProduct=TV;
        
        break;

    default:
        std::cout<< "Enter Valid number" <<"\n";
        break;
    }
    if(price>10000){
        taxAmount=price*0.05;
    }
    taxAmount=0;
}

std::ostream &operator<<(std::ostream &os, Product &obj)
{
    std::cout << "Product Id : " << obj.productId << "\n";
    std::cout << "Name : " << obj.name << "\n";
    std::cout << "Brande : " << obj.brand << "\n";
    std::cout << "Price : " << obj.price << "\n";
    switch (obj.typeOfProduct)
    {
    case 1:
        std::cout << "Type of Product : Mobile Phone "
                  << "\n";
        break;
    case 2:
        std::cout << "Type of Product : Laptop "
                  << "\n";

        break;
    case 3:
        std::cout << "Type of Product : TV "
                  << "\n";

        break;

    default:
    
        break;
    }
    std::cout << "Tax Amount : " << obj.taxAmount << "\n";
    return os;
}

char &Product::operator[](int n)
{
    if (n < 0 || n > strlen(brand))
    {
        throw IndexException("Index out of range");
    }
    return (this->brand)[n];
}

bool Product::operator==(Product &p)
{
    return !strcmp(this->brand, p.brand);
}
