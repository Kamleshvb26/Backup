#ifndef EMP_H
#define EMP_H

#include<iostream>

class Employee
{
    int empid;
    std::string empname;
    double basicsalary;
    double pf,ptax,hrallow,foodallow;
    
    void calculateAllowances()//private function- helper function 
    {
        pf=basicsalary*0.03;
        ptax=basicsalary*0.02;
        hrallow = basicsalary*0.02;
        foodallow = basicsalary*0.03;
    }

    public:
         Employee();
        Employee(int ,std::string,double );
        void accept();
       virtual void display();
       virtual double calNetSalary();
       virtual ~Employee();

       //virtual void print()=0;
        

};

#endif // EMP_H
