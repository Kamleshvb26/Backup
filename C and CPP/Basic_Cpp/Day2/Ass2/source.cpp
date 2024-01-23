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

void Account::accept()
{
}

void Account::display()
{
    std::cout << "\naccount no :" << accno;
    std::cout << "\nname  :" << name;
    std::cout << "\nbalance no :" << balance;
}