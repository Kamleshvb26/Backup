#ifndef HEADER_H
#define HEADER_H

#include<iostream>

enum Accounttype{SAVING=1, CURRENT=2};

class Account
{
    int accno;
    char name[20];
    double balance;
    static float rateofInterest;
    enum Accounttype acctype;

    public:
       static void showRateofInterest();
       Account();//declaration
       Account(int ,const char *,double);
       void display()const ;
       void accept();
       void setAccno(int );
       void setName(const char *);
       void setBalance(double );
       double getBalance()const ;
       char * getName();
};

#endif // HEADER_H

