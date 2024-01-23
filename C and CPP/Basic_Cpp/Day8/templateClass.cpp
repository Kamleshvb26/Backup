#include<iostream>

template<class T>

class Stack
{
    private:
        T *arr;    
        int size,top;

    public:
        Stack(int s){
            size=s;
            top=-1;
            arr=new T[s];
        }

        bool isFull(){
            return (top==size-1);
        }
        bool isEmpty(){
            return (top==-1);
        }

        void push(T ele){
            arr[++top]=ele;
        }

        T pop(){
            return arr[top--];
        }

    
        ~Stack(){
            delete arr;
        }
        
};

int main(){

    Stack<int> st(4);

    
    return 0;
}