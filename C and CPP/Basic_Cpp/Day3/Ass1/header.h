#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class Product
{
    int productId;
    char *name;
    double price;

public:
    Product();

    void foo();

    ~Product();
};

#endif // HEADER_H
