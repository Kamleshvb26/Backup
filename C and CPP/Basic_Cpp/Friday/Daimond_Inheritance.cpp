#include<iostream>

class A
{
    int arr[10];
    int x,y,z,p,q,r;

};
class B: virtual public A
{
int m;
void shoe()
{

}
};
class C:virtual public A
{
    int k;
    void show()
    {

    }

};
class D:public B,public C
{
    int t;

};
int main()
{
    D obj;
    std::cout<<"size = "<<sizeof(obj)<<std::endl;
    return 0;
}