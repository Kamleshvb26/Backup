#include <iostream>
class A
{
public:
    void show()
    {
        std::cout << "Class A" << std::endl;
    };
    A()
    {
        std::cout << "Class A" << std::endl;
    }
};

class B : public A
{

public:
    B()
    {
        std::cout << "Class B" << std::endl;
    }
    void show()
    {
        std::cout << "Class B" << std::endl;
    }
};
class C : public B
{

public:
    C()
    {
        std::cout << "Class C" << std::endl;
    }
    void show()
    {
        std::cout << "Class C" << std::endl;
    }

}; 
int main()
{
    C *obj;
    std::cout<<"Size : "<<sizeof(obj);
    obj->A::show();
    return 0;
}