#ifndef Manager_H
#define Manager_H

#include<iostream>
#include"employee.h"


class Manager:public Employee
{
    private:
        
        double salesAmount;
        double commRate;

    public:
        Manager();

        Manager(int ,double , const char *,double,double);

        void accept();

        void display();

        double calBonus();

        double calculateNetSalary();


        ~Manager();


        
};

#endif // Manager_H
