#include<iostream>
#include<cstring>


class Product
{
    char pname[30];
    public:
        Product()
        {
            strcpy(pname,"Laptop");
        }
        Product(char *p)
        {
            strcpy(pname,p);
        }
        char& operator[](int index)
        {
            return pname[index];
        }
        void operator()()
        {
            std::cout<<pname;
        }
};
int main()
{
    Product p1;
    char ch = p1[0];
    std::cout<<"ch = "<<ch<<std::endl;

    p1[1]='A';
    
    p1();


    return 0;
}