#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<iostream>
#include<cstring>


class Customer
{
    private:
        char *name;

    public:
        Customer();

        Customer(Customer &obj);

        Customer(const char  *);

        char * getName(){
            return name;
        }
        void  setName(const char *nm){
            strcpy(name,nm);
        }

        void accept();

        void display();

        friend std::ostream& operator<<(std::ostream&os, Customer &obj);

        ~Customer();

        
};

#endif // CUSTOMER_H
