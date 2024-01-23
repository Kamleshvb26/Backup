#include<iostream>
template<class T>
class MyStack
{
    T *arr;
    int size, top;

public:
    MyStack()
    {
        size = 2;
        top = -1;
        arr = new T[size];
    }
    MyStack(int s)
    {
        size = s;
        top = -1;
        arr = new T[size];
    }
    bool isFull()
    {
        return top == size - 1;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    void push(T ele)
    {
        if (!isFull())
            arr[++top] = ele;
        else
            throw "Stack is full";
    }
    T pop()
    {
        if (isEmpty())
            throw "Stack is Empty";
    
         return arr[top--];       
    }
};

class Product
{
    int price;
    public :
    Product()
    {
        price=1000;
    }
    Product(int p)
    {
        price=p;
    }
    void display()
    {
        std::cout<<"\n Price= "<<price;
    }
};
int main()
{
    MyStack<int> m1;
    m1.push(10);
    m1.push(20);
   // m1.push(30);
    
    MyStack<char> m2;

    MyStack<Product> m3;
    m3.push(Product(300));
    m3.push(Product(500));

    Product p1= m3.pop();
    p1.display();
    Product p2=m3.pop();
    p2.display();

}