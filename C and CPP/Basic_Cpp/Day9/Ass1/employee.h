#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>

class Employee
{
    protected:
        int id;
        char *name;
        double salary,pf,hra,tra;

        void calculateAllowance(){
            pf=0.3*salary;
            hra=0.2*salary;
            tra=0.1*salary;
        }

    public:
        Employee();

        Employee(int ,double , const char *);

        virtual void accept();

        virtual void display();

        void update();

        int getId();
        
        double calculateNetSalary();

        virtual ~Employee();

};

#endif // EMPLOYEE_H
