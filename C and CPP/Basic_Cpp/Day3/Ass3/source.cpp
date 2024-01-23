#include <iostream>
#include <cstring>
#include "header.h"

Product::Product()
{
    std::cout<<"Constructor Called \n";
    productId = 12345;
    strcpy(name,"56789");

    price = 0.00;
}
Product::Product(int pid,const char *nm,double prc){
    std::cout<<"Constructor Called \n";

    productId=pid;
    price=prc;
    strcpy(name,nm);
}



bool Product::compare(Product &p3)
{
    return (price==p3.price);
}


Product::~Product(){
    std::cout<<"Destructor called \n";
}



