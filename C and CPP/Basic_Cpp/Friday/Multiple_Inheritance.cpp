#include<iostream>

class A
{
    public:
    void show()
    {
        std::cout<<"Class A"<<std::endl;
    }

};
class B
{
    public:
    void show()
    {
        std::cout<<"Class B"<<std::endl;
    }
};
class C:public A,public B
{
public:
    void show()
    {
        std::cout<<"Class C"<<std::endl;
    }
};

int main()
{
    C obj;
    obj.A::show();
    return 0;
}