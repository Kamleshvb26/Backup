#include <iostream>
#include <cstring>
#include "header.h"
// return_type classname::functioname(){  }
float Account::rateofInterest = 8.5f;

void Account::setAccno(int ano)
{
    accno = ano;
}
void Account::setName(const char *nm)
{
    strcpy(name, nm);
}
void Account::setBalance(double b)
{
    balance = b;
}
double Account::getBalance() const
{
    return balance;
}
char *Account::getName()
{
    return name;
}
Account::Account()
{
    std::cout << "\nAccount() called .... ";
    accno = 10111;
    strcpy(name, "Yash");
    balance = 55000;
}
Account::Account(int n, const char *nm, double b)
    : accno(n), balance(b)
{
    strcpy(name, nm);
}
void Account::showRateofInterest()
{
    std::cout << "\n Rateof Interest = " << rateofInterest;
}
void Account::display() const
{
    std::cout << "\n Account number =" << accno;
    std::cout << "\n name =" << name;
    std::cout << "\n Account balance =" << balance;
    switch(acctype)
    {
        case 1:
            std::cout<<" \n ACCOUNT type = SAVING";
            break;
         case 2:
            std::cout<<"\n ACCOUNT type = CURRENT ";
            break;
    }
    
}
void Account::accept()
{
    int k;
    std::cout << "\n Enter Account number =";
    std::cin >> accno;
    std::cout << "\n Enter name =";
    std::cin >> name;
    std::cout << "\n Enter Account balance =";
    std::cin >> balance;
    std::cout<<"\n Enter SAVING-1  CURRENT-2 ";
    std::cin>>k;
    switch(k)
    {
        case 1:
            acctype=SAVING;
            break;
         case 2:
            acctype=CURRENT;
            break;
    }
    

}