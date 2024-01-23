#include <iostream>
#include "header.h"

Stack::Stack(int n)
{
    capacity = n;
    sz=0;
    tp = -1;

    ptr = new int[capacity];
}

Stack::~Stack(){
    delete ptr;
}

void Stack::push_back(int n)
{

    ptr[++tp] = n;
    sz++;

}

int Stack::size()
{
    return sz;
}

int Stack::pop()
{
    sz--;
    return ptr[tp--];
}

int Stack::top()
{
    if (sz == 0)
    {
        std::cout << "Stack is Empty \n";
        return 0;
    }
    else
    {
        return ptr[tp];
    }
}
bool Stack::isempty()
{
    return (sz == 0);
}

bool Stack::isfull()
{
    return (sz == capacity );
}

void Stack::print()
{
    for (int i = 0; i < sz; i++)
    {
        std::cout << ptr[i] << " ";
    }
    std::cout << "\n";
}