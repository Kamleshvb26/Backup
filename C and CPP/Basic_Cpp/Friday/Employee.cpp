#include <iostream>

class Employee
{
    int empid;
    std::string empname;
    double basicsalary;
    double pf, ptax, hrallow, foodallow;

    void calculateAllowances()
    {
        pf = basicsalary * 0.03;
        ptax = basicsalary * 0.02;
        hrallow = basicsalary * 0.02;
        foodallow = basicsalary * 0.03;
    }

public:
    Employee();
    Employee(int, std::string, double);
    void accept();
    virtual void display();
    virtual ~Employee();
    double calNetSal();
};

class salesperson : public Employee
{
    double salesamount;
    double commrate;

public:
    salesperson();
    salesperson(int, std::string, double, double, double);
    ~salesperson();
    void display();
    double calNetSal();
    double calcomm();
};
int main()
{
    Employee *obj = new salesperson(); // generic pointer
    obj->display();
    delete obj;
    // salesperson sp1(101,"Adesh",200000.00,20000.00,0.6);
    // sp1.display();
    //  Employee obj(1002,"Adesh",30000);
    //  obj.display();
    //  std::cout<<"\nNet salary : "<<obj.calNetSal()<<std::endl;
    // constructer cannot be virtual late binding / dynamic binding
    // vtable
    // virtual keyword should be written in base class only
    // dynamic_cast<salesperson*>(e); // specially used for down casting
    // typeid(*)
    // pure virtual function
    // object slicing
}

Employee::Employee()
{
    std::cout << "Employee()" << std::endl;
    empid = 2001;
    empname = "Adesh";
    basicsalary = 250000.00;
    calculateAllowances();
}

Employee::Employee(int eid, std::string enm, double bsal)
{
    std::cout << "Employee(....)" << std::endl;
    empid = eid;
    empname = enm;
    basicsalary = bsal;
    calculateAllowances();
}

void Employee::accept()
{
}

void Employee::display()
{
    std::cout << "\n"
              << empid << " " << empname << " " << basicsalary;
}

Employee::~Employee()
{
    std::cout << "~Employee()" << std::endl;
}

double Employee::calNetSal()
{
    return basicsalary - pf - ptax - foodallow - hrallow;
}

salesperson::salesperson()
{
    std::cout << "\n Salesperson() called";
    salesamount = 20000;
    commrate = 0.5;
}

salesperson::salesperson(int eid, std::string enm, double bsalary, double samt, double crate)
    : Employee(eid, enm, bsalary)
{
    salesamount = samt;
    commrate = crate;
}

salesperson::~salesperson()
{
    std::cout << "~salesperson() called" << std::endl;
}

void salesperson::display()
{
    Employee::display();
    std::cout << " " << salesamount << " " << commrate;
}

double salesperson::calcomm() // child specific function
{
    return 0.0;
}
