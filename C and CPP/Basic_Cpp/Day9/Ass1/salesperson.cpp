#include<iostream>
#include"salesperson.h"


SalesPerson::SalesPerson()
{
    std::cout<< "Salesperson Default Constructor \n" ;
    salesAmount=0;
    commRate=0;
}

SalesPerson::SalesPerson(int i,double sal, const char *nm,double sAmt,double cmRt)
:Employee(i,sal,nm),salesAmount(sAmt),commRate(cmRt)
{
    std::cout<< "Salesperson Parameterized Constructor \n" ;

}

void SalesPerson::accept()
{
    Employee::accept();
    std::cout<< "Enter Salesperson sales amount : ";
    std::cin>> salesAmount ;
    std::cout<< "Enter Salesperson commision rate : ";
    std::cin>> commRate ;

}

void SalesPerson::display()
{
    Employee::display();
    std::cout<< "Bonus :"<<calBonus()<<"\n";
    std::cout<< "Total Salary including bonus :"<<calculateNetSalary()<<"\n";
    
}

double SalesPerson::calBonus()
{
    return commRate*salesAmount;
}

double SalesPerson::calculateNetSalary()
{
    return calBonus()+Employee::calculateNetSalary();
}

SalesPerson::~SalesPerson()
{
    std::cout<< "Salesperson  Destructor \n" ;

}


