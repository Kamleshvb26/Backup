#ifndef HEADER_H
#define HEADER_H

#include<iostream>
class Address
{
    std::string city;
    int pincode; 
    std::string state;
    public:
        Address()
        {
            std::cout<<"\n Address() called ";
            city="Pune";
            pincode=1234;
            state="MH";
        }
        Address(std::string ct,int pin,std::string st)
        :city(ct),pincode(pin),state(st)
        {
            std::cout<<"\n Address(......) called ";
        }
        void accept();
        void display();
        ~Address();
};
 
#endif // HEADER_H
