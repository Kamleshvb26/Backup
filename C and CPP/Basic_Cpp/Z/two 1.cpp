#include<iostream>
#include<cstring>
using namespace std;


class Account
{
    // data members/attributes/ 
    int accno;
    char name[20];
    double balance;
    
    public:
    // member functions
    Account()//default constructor
    {
        accno=10111;
        strcpy(name,"Yash");
        balance=55000;
    }
    //parameterized ctor
    Account(int no,const char *nm,double b):accno(no),balance(b)
    {
        strcpy(name,nm);
    }
    void display()
    {
        
        cout<<"\nAccount number = "<<accno;
        cout<<"\nAccount name = "<<name;
        cout<<"\nAccount balance = "<<balance;
    } 
    void accept()
    {
        cout<<"\nAEnter account number = ";
        cin>>accno;
        cout<<"\nAEnter account name = ";
        cin>>name;
        cout<<"\nAEnter account balance = ";
        cin>>balance;       
        
    }
};
int main()
{
    Account arr[3]={{3011,"Heena",2000.55}, {3012,"Anup",67000.45},{3013,"Ganesh",45000.33}};
    for(int i=0;i<3;i++)
    {
        arr[i].display();
    }

    Account *ptr=new Account();
    ptr->display();
    // create object/instance
    Account obj;
  //  obj.accept();
    obj.display();    
    Account obj2(20112,"Jay",56000.55);
    obj2.display();


    delete ptr;
    return 0;
}



