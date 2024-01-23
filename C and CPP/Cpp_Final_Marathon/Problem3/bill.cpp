#include <iostream>
#include <cstring>
#include "bill.h"

Bill::Bill()
{
 
    billNumber = 0;
    billAmount = 0;
}

void Bill::accept()
{
    std::cout << "Enter Bill Number : ";
    std::cin >> billNumber;

    cus.accept();
    dt.accept();
    std::cout << "Enter Bill Amount : ";
    std::cin >> billAmount;

    std::cout << "\n\n";
}

void Bill::display()
{
    std::cout << "Bill Number : " << billNumber << "\n";
    std::cout << "Customer Name : " << cus.getName() << "\n";
    std::cout << "Bill Date : " << dt.getDay() << "/" << dt.getMonth() << "/" << dt.getYear() 
              << "\n";

    std::cout << "Bill Amount : " << billAmount << "\n";

    std::cout << "\n\n";
}

std::ostream &operator<<(std::ostream &os, Bill &obj)
{

    os << "Bill Number : " << obj.billNumber << "\n";
    obj.cus.display();
    obj.dt.display();
    // os << "Customer Name : " << (obj.cus).getName() << "\n";
    // os << "Bill Date : " << (obj.dt).getDay() << "/" << (obj.dt).getMonth() << "/" << (obj.dt).getYear() 
    //    << "\n";
    os << "Bill Amount : " << obj.billAmount << "\n";

    return os;
}