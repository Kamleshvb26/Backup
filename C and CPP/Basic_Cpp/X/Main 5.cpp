#include<iostream>
#include"head.h"

int main()
{
    MyStack<int> m1;
    
    try
    {
    m1.push(10);
    m1.push(20);
    m1.push(33);
    }
    catch(Stackexception s)
    {
        std::cout<<s.what();
    }

    std::cout<<"element = "<<m1.pop()<<std::endl;
    std::cout<<"element = "<<m1.pop();
    
    
    MyStack<char> m2;

    MyStack<Product> m3;
    m3.push(Product(300));
    m3.push(Product(500));

    Product p1= m3.pop();
    p1.display();
    Product p2=m3.pop();
    p2.display();
}