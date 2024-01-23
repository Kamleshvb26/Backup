#include <iostream>
#include "header.h"

void Address::accept()
{
}

void Address::display()
{
    std::cout << "Address = " << city << " " << state << "   " << pincode << std::endl;
}
Address::~Address()
{
    std::cout << "\n ~Address() called ";
}
