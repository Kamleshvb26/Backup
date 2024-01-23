#include <iostream>
#include <cstring>
#include "employee.h"
#include "salesperson.h"
#include "manager.h"


template<class T>



class CastFailException : public std::exception
{
    char *name;
    public:
    CastFailException(const char*msg)
    {
        name = new char[60];
        strcpy(name,msg);
    }
    const char * what()
    {
        return name;
    }
};

class SmartPointer
{
private:
    Employee *sp;

public:
    SmartPointer()
    {
        std::cout<< "Smart Pointer Constructor called" <<"\n";
        sp = new SalesPerson;
        // sp->accept();
    }

    Employee *getPointer()
    {
        return sp;
    }

    Employee *operator->()
    {
        return sp;
    }

    ~SmartPointer()
    {
        std::cout<< "Smart pointer destructor called " <<"\n";
        delete sp;
    }
};

void updateName(Employee arr[], int n, int id)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i].getId() == id)
        {
            arr[i].update();
        }
    }
}

int main()
{

    // Employee *ptr = new SalesPerson;
    // Employee *ptr1 = new Manager;
    // std::cout << "\n e= " << typeid(ptr).name() << std::endl;
    // std::cout << "\n *e = " << typeid(*ptr).name() << std::endl;

    // ptr->accept();
    // ptr->display();

    // SalesPerson *newPtr;

    // if (typeid(*ptr1) == typeid(SalesPerson))
    // {
    //     std::cout<< "Entered " <<"\n";
    //     SalesPerson *newPtr = dynamic_cast<SalesPerson *>(ptr);
    // }
    // else
    // {
    //     std::cout << "Cant type cast "
    //               << "\n";
    // }
    

    SmartPointer obj;


    // try
    // {
    //     SalesPerson *newPtr = dynamic_cast<SalesPerson *>(obj.getPointer());
    //     newPtr->accept();

    //     if(newPtr==0){
    //         throw CastFailException("Dynamic cast failed ");
    //     }
    // }
    // catch(CastFailException c){
    //     std::cout<<c.what() <<"\n";
    // }


    return 0;
}