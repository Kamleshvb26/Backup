#include <iostream>
#include <cstring>
using namespace std;

class Account
{
    int accno;
    char name[20];
    double balance;

public:
    Account()
    {
        accno = 12345;
        strcpy(name, "xyz");
        balance = 20000.00;
    }

    Account(int no, const char *nm, double bal) : accno(no), balance(bal)
    {
        strcpy(name, nm);
    }

    void accept();

    void display()
    {
        cout << "\naccount no :" << accno;
        cout << "\nname  :" << name;
        cout << "\nbalance no :" << balance;
    }
};

int main()
{

    Account newAccounts[2] = {{12341, "Jay", 123456}, {12342, "Viru", 765432}};

    Account *ptr = new Account;

    ptr->display();
    cout << "\n";

    for (int i = 0; i < 2; i++)
    {
        newAccounts[i].display();
        cout << "\n";
    }

    delete ptr;

    return 0;
}

void Account::accept()
{

    cout << "Enter account no" << endl;
    cin >> this->accno;
    cout << "Please Enter name" << endl;
    cin >> this->name;
    cout << "Please Enter balance" << endl;
    cin >> this->balance;
}