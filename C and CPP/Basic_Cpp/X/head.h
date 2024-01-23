#include <iostream>
#include<cstring>


class Stackexception :public std::exception
{
    char arr[60];
    public:
    Stackexception(const char * msg)
    {
        strcpy(arr,msg);
    }

        const char *what()
        {
            return arr;
        }

};

template <class T>
class MyStack
{
    T *arr;
    int size, top;

public:
    MyStack();
    MyStack(int s);
    bool isFull()
    {
        return top == size - 1;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    void push(T ele);   
    T pop();    
};

template <class T>
MyStack<T>::MyStack()
{
    size = 2;
    top = -1;
    arr = new T[size];
}

template <class T>
MyStack<T>::MyStack(int s)
{
    size = s;
    top = -1;
    arr = new T[size];
}

template<class T>
void MyStack<T>::push(T ele)
 {
        if (!isFull())
            arr[++top] = ele;
        else
            throw Stackexception("Stack is full");
 }

template<class T>
T MyStack<T>::pop()
{
        if (isEmpty())
            throw Stackexception("Stack is empty");

        return arr[top--];
}


class Product
{
    int price;

public:
    Product()
    {
        price = 1000;
    }
    Product(int p)
    {
        price = p;
    }
    void display()
    {
        std::cout << "\n Price= " << price;
    }
};