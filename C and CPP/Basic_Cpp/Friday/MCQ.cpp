#include <iostream>

class student
{
    int marks;

public:
    student()
    {
        std::cout << "Dfault" << std::endl;
    }
    student(const int &x)
    {
        std::cout << "Param" << std::endl;
        marks = x;
    }
    ~student()
    {
        std::cout << "~student()" << std::endl;
    }
    void setval(int newval)
    {
        marks=newval;
    }
    void modify(student &obj)
    {
        obj.setval(10);
    }
};

int main()
{
    //int a = 100;
    student obj(100);
    obj.modify(obj);
    // student s2;
    // student s3=100;
    return 0;
}