//A friend class can access private and protected 
//members of other class in which it is declared

#include<iostream>
class GFG
{
    private:
    int private_variable;

    protected:
    int protected_variable;
    public:
    GFG()
    {
        private_variable=10;
        protected_variable=99;
    }
    friend class F;
    friend void add2(GFG& obj);
};
void add2(GFG& obj)
{
    std::cout<<"Add() = "<<obj.protected_variable+obj.private_variable<<std::endl;
}
class F{
    public:
    void display(GFG& t)
    {
        std::cout<<"The value of private variable = "<<t.private_variable<<std::endl;
        std::cout<<"The value of protected variable = "<<t.protected_variable<<std::endl;
    }
    void add(GFG& obj)
    {
        std::cout<<"Add() = "<<obj.protected_variable+obj.private_variable<<std::endl;

    }
};

int main()
{
    GFG g;
    add2(g);
    F fri;
    fri.display(g);
    fri.add(g);
    return 0;
}