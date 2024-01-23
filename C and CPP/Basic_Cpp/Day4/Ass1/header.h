#include<iostream>


class Stack{

    int capacity;
    int sz;
    int tp;
    int *ptr;

    public:

    Stack(int );

    void push_back(int );

    int pop();

    int top();

    bool isempty();

    bool isfull();

    void print();

    int size();

    ~Stack();
};