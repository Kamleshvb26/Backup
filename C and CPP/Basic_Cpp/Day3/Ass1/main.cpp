#include <iostream>
#include "header.h"

int main()
{

    Product *ptr = new Product;
    ptr->foo();
    delete ptr;

    return 0;
}