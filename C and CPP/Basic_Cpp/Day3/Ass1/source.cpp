#include <iostream>
#include <cstring>
#include "header.h"

Product::Product()
{
    std::cout<<"Constructor Called \n";
    productId = 12345;
    name=new char[20];
    price = 0.00;
}
void Product::foo()
{
    std::cout<<"Accessed  "<<productId<<"\n";
}


Product::~Product(){
    std::cout<<"Destructor called \n";
    delete name;
    name=NULL;
}



