#include <iostream>
using namespace std;
#include <cstring>

class Account
{
private:
    int balance;
    char *name;
    int *arr;

public:
    Account()
    {
        balance = 0;
        name = new char[20];
        arr = new int[10];
        strcpy(name, "noname");
    }

    Account(const char *nm)
    {
        balance = 0;
        name = new char[20];
        arr = new int[10];
        strcpy(name, nm);
    }

    void accept()
    {
        std::cin >> balance;
        std::cin >> name;
        for (int i = 0; i < 10; i++)
        {
            std::cin >> arr[i];
        }
    }
    void display()
    {
        cout << "Balance" << balance << endl;
        cout << "Name" << name << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << arr[i];
        }
    }

    ~Account()
    {
        delete name;
        delete arr;
    }
};

class SmartClass
{
private:
    Account *ptr;

public:
    SmartClass()
    {
        ptr = new Account;
    }

    ~SmartClass()
    {
        delete ptr;
    }

    Account *operator->()
    {
        return ptr;
    }

    Account *getAddress()
    {
        return ptr;
    }
};

int main()
{

    // Account a1;

    // Account *ptr=new Account("yash");
    // ptr->accept();
    // ptr->display();
    // delete ptr;

    SmartClass obj;

    // Account *p=obj.getAddress();

    obj->accept(); //
    obj->display();

    return 0;
}
