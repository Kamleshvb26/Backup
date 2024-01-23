#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class Account
{
    int accno;
    char name[20];
    double balance;

public:
    Account();

    Account(int no, const char *nm, double bal);

    void accept();

    int getAccNo();

    void display();
};

#endif // HEADER_H
