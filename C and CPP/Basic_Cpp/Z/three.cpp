#include<iostream>

class Mystack
{
    int size;
    int top;
    int *arr;
    public:
        Mystack()
        {
            size=2;
            top=-1;
            arr=new int[size];
        }
         Mystack(int s)
        {
            size=s;
            top=-1;
            arr=new int[size];
        }
        void push(int ele)
        {
            if(top!=size-1)
                arr[++top]=ele;
            else
                std::cout<<"\n stack overflow";
        }
        int pop()
        {
            if(top!=-1)
                return arr[top--];
            else
                std::cout<<"\n stack underflow";
        }
        void display()
        {
            for(int i=0;i<=top;i++)
            {
                std::cout<<arr[i]<<std::endl;
            }
        }
        ~Mystack()
        {
            delete arr;
        }
};
class CreateObject
{
    Mystack *m;
    public:
        CreateObject()
        {
            m=new Mystack;
        }
        CreateObject(int s)
        {
            m=new Mystack(s);
        }
        ~CreateObject()
        {
            delete m;
        }
        Mystack& operator*()
        {
            return *m;
        }
        Mystack* operator->()
        {
            return m;
        }
};
int main()
{
    CreateObject obj;
    obj->push(10);
    obj->push(20);
    obj->display();

    //(*obj).push(10);

    //(*obj).display();
}