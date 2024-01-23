#include<iostream>

class Employee
{
int empid;
    std::string empname;
    double basicsalary;
    double pf,ptax,hrallow,foodallow;
    void calculateAllowances()
    {
        pf=basicsalary*0.03;
        ptax=basicsalary*0.02;
        hrallow=basicsalary*0.02;
        foodallow=basicsalary*0.03;
    }

    public:
    Employee();
    Employee(int ,std::string,double);
    void accept();
    void display();
    ~Employee();
    double calNetSal();
};