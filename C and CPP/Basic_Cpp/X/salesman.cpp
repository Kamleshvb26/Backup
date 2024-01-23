#include "salesman.h"



Salesperson::Salesperson()
{
    std::cout<<"\n Salesperson() called ";
    salesamount=200000;
    commrate=0.5;
}
Salesperson::Salesperson(int eno, std::string name, double sal,double samt,double crate)
 :Employee(eno,name,sal)
{
    salesamount=samt;
    commrate=crate;
}

void Salesperson::accept()
{

}

double Salesperson::calNetSalary()
{
    return Employee::calNetSalary()+ (salesamount*commrate);
}

double Salesperson::calculateCommission()// child specific function
{
    return (salesamount*commrate);
}

void Salesperson::display()
{
    Employee::display();
    std::cout<<" "<<salesamount<<" "<<commrate<<std::endl;
}
Salesperson::~Salesperson()
{
    std::cout<<"\n ~Salesperson() called ";
    
}