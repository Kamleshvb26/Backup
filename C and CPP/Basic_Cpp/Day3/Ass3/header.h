#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class Product
{
    int productId;
    char name[20];
    double price;

public:
    Product();
    Product(int , const char *, double);

    bool compare(Product &);

    ~Product();
};

#endif // HEADER_H
