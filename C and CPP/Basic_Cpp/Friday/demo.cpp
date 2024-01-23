#include<iostream>
class A
{
    int a;
    public:
    A()
    {

    }
    void display()
    {
        std::cout<<"Hello"<<std::endl;
    }
};
int main()
{
    A *obj=new A();
    obj->display();
    delete obj;
    return 0;
}