#include <iostream>

class Address
{
private:
    std::string city;
    int pincode;
    std::string state;

public:
    Address()
    {
        std::cout<<"Address def cons\n";

        city = "";
        pincode = 0;
        state = "";
    }
    Address(std::string ct, int pinc, std::string st) : city(ct), pincode(pinc), state(st)
    {
        std::cout<<"Address para cons\n";
    }

    ~Address()
    {
        std::cout<<"Address des\n";

    }
};
