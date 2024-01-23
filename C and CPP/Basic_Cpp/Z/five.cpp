#include <iostream>
#include <cstring>

class Product
{
    int productno;
    char *pname;
    double price;
public:
    Product() // default constructor
    {
        productno = 10111;
        pname = new char[7];
        strcpy(pname, "Laptop");
        price = 55000;
    }
    // parameterized ctor
    Product(int pno,const char*pnm,double p):productno(pno),price(p)
    {
        pname=new char[20];
        strcpy(pname,pnm);
    }
    Product(const Product &p3)
    {
        productno = p3.productno;
        pname = new char[strlen(p3.pname)+1];
        strcpy(pname, p3.pname);
        price = p3.price;
    }

    void display()
    {
        std::cout << "\n Product number = " << productno;
        std::cout << "\n Product name = " << pname;
        std::cout << "\n Product price = " << price;
    }
    void accept()
    {
        std::cout << "\nAEnter Product number = ";
        std::cin >> productno;
        char temp[50];        
        std::cout << "\nAEnter Product name = ";
        std::cin >> temp;
        pname = new char[strlen(temp)+1];
        strcpy(pname,temp);
        std::cout << "\nAEnter Product price = ";
        std::cin >> price;
    }
    ~Product()
    {
        delete pname;
        std::cout << "\n ~Product() called ";
    }
    bool compare(Product &p3)
    {
        if(price == p3.price)
            return true;
        else
            return false;
    }
};
int main()
{
    Product p1(1011,"Mobile",45000);
    Product p2(p1);
    Product p4(2033,"Bag",1000);
    if(p1.compare(p4))
        std::cout<<"\n products have same price";
    else
        std::cout<<"\n products have different price";
    return 0;
}
