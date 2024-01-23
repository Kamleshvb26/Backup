#include "emp.h"
#include<iostream>

Employee::Employee()
{
    std::cout<<"\n Employee() called ";
    empid=2001;
    empname="Joy";
    basicsalary=25000.00;
    calculateAllowances();
}

Employee::Employee(int eid, std::string enm, double bsalary)
{
    std::cout<<"\n Employee(....) called ";
    empid=eid;
    empname=enm;
    basicsalary=bsalary;
    calculateAllowances();
}

void Employee::accept()
{

}

void Employee::display()
{
    std::cout<<"\n "<<empid<<" "<<empname<<"  "<<basicsalary;
}

Employee::~Employee()
{
     std::cout<<"\n ~Employee() called ";
}

double Employee::calNetSalary()
{
    return basicsalary-pf-ptax-foodallow-hrallow;
}
