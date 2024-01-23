#include<iostream>
using namespace std;

//pass by reference
void exchange(int &,int &);

int k=10;

int* getk()
{
    return &k;
}
int& geth(int t)
{
    return t;
}
int main()
{
    int h=20;
    int m= geth(h);
    cout<<m;

    int *z=getk();
    int c=10,d=20;
    exchange(c,d);
    cout<<"\n c= "<<c<<"d= "<<d;

    int e=30;
    int f=20;
    int &y=f;
    y=e;




    
}
void exchange(int &i,int &j)//formal 
{
    int t;
    t=i;
    i=j;
    j=t;
}

// int a[5]={10,20,30,40,50};
    // int *p=a;
    // p++;
    // cout<<*p;

    // int b=10;
    // int *p1=&b;
    // int c=30;
    // p1=&c;

    // int k=100;
    // int &r=k;
    // cout<<r;