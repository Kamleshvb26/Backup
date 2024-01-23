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

    void setAccNo(int acc);

    int getAccNo();

    void setName(const char *);

    void setbalance(double bal);

    void modify(const char *nm){
        strcpy(name,nm);
    }

    void display();
};


bool search(Account arr[],int ,int );

void createAccount(Account arr[], int ,int );

void modify(Account arr[],const char *, int ,int);


#endif // HEADER_H
