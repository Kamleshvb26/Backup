#include"header.h"


Employee::Employee()
{
    std::cout<<"Employee()"<<std::endl;
    empid=2001;
    empname="Adesh";
    basicsalary=250000.00;
    calculateAllowances();
}

Employee::Employee(int eid, std::string enm, double bsal)
{
    std::cout<<"Employee(....)"<<std::endl;
    empid=eid;
    empname=enm;
    basicsalary=bsal;
    calculateAllowances();
}

void Employee::accept()
{
}

void Employee::display()
{
    std::cout<<"\n"<<empid<<" "<<empname<<" "<<basicsalary;
}

Employee::~Employee()
{
    std::cout<<"~Employee()"<<std::endl;
}

double Employee::calNetSal()
{
    return basicsalary-pf-ptax-foodallow-hrallow;
}
