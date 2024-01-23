#include <iostream>
#include <cstring>
#include "employee.h"

Employee::Employee()
{
    std::cout << "Employee Default Constructor \n";
    id = 0;
    salary = 0;
    name = new char[50];
    calculateAllowance();
}

Employee::Employee(int i, double sal, const char *nm)
{
    std::cout << "Employee Parameterized Constructor \n";
    id = i;
    salary = sal;
    name = new char[50];
    strcpy(name, nm);
    calculateAllowance();
}

void Employee::accept()
{
    std::cout << "Enter id : ";
    std::cin >> id;
    std::cout << "Enter name : ";
    std::cin >> name;
    std::cout << "Enter salary : ";
    std::cin >> salary;
}

void Employee::display()
{
    std::cout << "id :" << id << "\n";
    std::cout << "name :" << name << "\n";
    std::cout << "salary :" << salary << "\n";
    std::cout << "Net Salary :" << calculateNetSalary() << "\n";
}

void Employee::update()
{
    std::cout << "Enter new name : ";
    std::cin >> name;
}

int Employee::getId()
{
    return id;
}

double Employee::calculateNetSalary()
{
    return salary + pf + hra + tra;
}

Employee::~Employee()
{
    std::cout << "Employee Destructor \n";
    delete name;
}
