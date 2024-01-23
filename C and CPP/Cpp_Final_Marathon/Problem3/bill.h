#ifndef BILL_H
#define BILL_H

#include<iostream>
#include"date.h"
#include"customer.h"


class Bill
{
    private:
        int billNumber;
        Customer cus;
        Date dt;
        int billAmount;

    public:
        
        Bill();

        void accept();

        int getBillAmount(){
            return billAmount;
        }

        char * getCustomerName(){
            return cus.getName();
        }

        void display();

        friend std::ostream& operator<<(std::ostream&os, Bill &obj);


        
};

#endif // BILL_H
