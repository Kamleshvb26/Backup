#include <iostream>

class Employee
{
private:
    int empid;
    std::string empname;
    double basicSalary;
    double pf, ptax, hrAll, foodAll;
    void calculateAllowance();// private helper function
   
public:
    Employee();
    Employee(int, std::string, double);
    void accept();
    void display();
    double calNetSal();
    
};

