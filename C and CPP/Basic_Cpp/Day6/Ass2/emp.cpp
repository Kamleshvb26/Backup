#include <iostream>
#include "emp.h"

Employee::Employee()
{
}
Employee::Employee(int id, std::string nm, double sal)
{
}
void Employee::accept()
{
}
void Employee::display()
{
    
}
void Employee::calculateAllowance()
{
    pf = basicSalary * 0.3;
    ptax = basicSalary * 0.02;
    hrAll = basicSalary * 0.02;
    foodAll = basicSalary * 0.03;
}
double Employee::calNetSal()
{
    return 0;
}
