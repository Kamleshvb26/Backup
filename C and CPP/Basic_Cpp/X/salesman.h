#ifndef SALESMAN_H
#define SALESMAN_H

#include<iostream>
#include"emp.h"

class Salesperson :public Employee
{
    double salesamount;
    double commrate;

    public: 
        Salesperson();
        void display();
        ~Salesperson();
        Salesperson(int ,std::string,double ,double,double);   
        void accept();
        double calNetSalary();   
        double calculateCommission();  

};

#endif // SALESMAN_H
