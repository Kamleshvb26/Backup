#include <iostream>
#include <cstring>
#include "header.h"

Account::Account()
{
    accno = 12345;
    strcpy(name, "xyz");
    balance = 20000.00;
}

Account::Account(int no, const char *nm, double bal) : accno(no), balance(bal)
{
    strcpy(name, nm);
}

int Account::getAccNo()
{
    return accno;
}

void Account::display()
{
    std::cout << "\naccount no :" << accno;
    std::cout << "\nname  :" << name;
    std::cout << "\nbalance no :" << balance;
}

void Account::setAccNo(int acc)
{
    accno = acc;
}

void Account::setName(const char *nm)
{
    strcpy(name, nm);
}

void Account::setbalance(double bal)
{
    balance = bal;
}

void Account::accept()
{
    std::cout << "Enter account No : ";
    std::cin >> accno;
    std::cout << "Enter name  : ";
    std::cin >> name;
    std::cout << "Enter balance : ";
    std::cin >> balance;

}

bool search(Account arr[], int accno, int size)
{
    for (int i = 0; i < size; i++)
    {

        if (arr[i].getAccNo() == accno)
        {
            arr[i].display();
            std::cout << "\n";
            return 1;
        }
    }
    std::cout << "Not Found \n";
    return -1;
}

void createAccount(Account arr[], int i, int size)
{

    arr[i].accept();

    std::cout << "Added successfully \n";
}

void modify(Account arr[], const char *nm, int acc, int no)
{
    for (int i = 0; i < no; i++)
    {
        if (arr[i].getAccNo() == acc)
        {
            arr[i].setName(nm);
        }
    }
}
