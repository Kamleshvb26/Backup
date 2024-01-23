#ifndef SALESPERSON_H
#define SALESPERSON_H

#include<iostream>
#include"employee.h"


class SalesPerson:public Employee
{
    private:
        
        double salesAmount;
        double commRate;

    public:
        SalesPerson();

        SalesPerson(int ,double , const char *,double,double);

        void accept();

        void display();

        double calBonus();

        double calculateNetSalary();


        ~SalesPerson();


        
};


#endif // SALESPERSON_H
