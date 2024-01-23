#include <iostream>
#include <cstring>
#include "customer.h"

Customer::Customer()
{
    name = new char[20];
    strcpy(name, "Noname");
}
Customer::Customer(const char *nm)
{
    name = new char[strlen(nm)];
    strcpy(name, "Noname");
}
void Customer::accept()
{
    std::cout<< "Enter Name : ";
    std::cin>> name ;
}
void Customer::display()
{
    std::cout<< "Name : " <<name<<"\n";
}

Customer::Customer(Customer &obj){
    delete name;

    name=new char[strlen(obj.name)];

    strcpy(name,obj.name);
}

std::ostream &operator<<(std::ostream &os, Customer &obj)
{
    os << "Product code : " << obj.name << "\n";

    return os;
}

Customer::~Customer()
{
    delete name;
}


