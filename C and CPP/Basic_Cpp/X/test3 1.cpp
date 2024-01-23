#include<iostream>
template<class T>
void exchange(T &a,T &b)
{
    T t;
    t=a;
    a=b;
    b=t;
}
template<class T>
void sort( T arr[],int size )
{

}

int main()
{
    int n1=10,n2=20;
    exchange(n1,n2);
    std::cout<<"\n n1 = "<<n1<<"  n2 = "<<n2;

    double n3=10.555,n4=20.6666;
    exchange(n3,n4);
    std::cout<<"\n n3 = "<<n3<<"  n4 = "<<n4;

    char c1='A',c2='M';
    exchange(c1,c2);
    std::cout<<"\n c1 = "<<c1<<"  c2 = "<<c2;
}