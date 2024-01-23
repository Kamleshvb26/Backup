#include<iostream>
#include"manager.h"



Manager::Manager()
{
    std::cout<< "Manager Default Constructor \n" ;
    salesAmount=0;
    commRate=0;
}

Manager::Manager(int i,double sal, const char *nm,double sAmt,double cmRt)
:Employee(i,sal,nm),salesAmount(sAmt),commRate(cmRt)
{
    std::cout<< "Manager Parameterized Constructor \n" ;

}

void Manager::accept()
{
    Employee::accept();
    std::cout<< "Enter Manager sales amount : ";
    std::cin>> salesAmount ;
    std::cout<< "Enter Manager commision rate : ";
    std::cin>> commRate ;

}

void Manager::display()
{
    Employee::display();
    std::cout<< "Bonus :"<<calBonus()<<"\n";
    std::cout<< "Total Salary including bonus :"<<calculateNetSalary()<<"\n";
    
}

double Manager::calBonus()
{
    return commRate*salesAmount;
}

double Manager::calculateNetSalary()
{
    return calBonus()+Employee::calculateNetSalary();
}

Manager::~Manager()
{
    std::cout<< "Manager  Destructor \n" ;

}
