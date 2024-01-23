#include<iostream>

class add
{
    int a;
    int b;
    
    public:
    add()
    {
        a=0;
        b=0;
    }
    add(int a,int b):a(a),b(b)
    {
    }
    add(add &r)
    {
        this->a=r.a;
        this->b=r.b;
    }
    int s()
    {
        return a+b;
    }
};


int main()
{
    add obj(10,20);
    add obj1;
    obj.s();
    return 0;
}