#include <iostream>
#include <cstring>
#include "header.h"


//constructor 
Electricity::Electricity()
{
    sanctionLoad = 0;
    presentReading = 0;
    previousReading = 0;
    electricityslab = E1;
}

void Electricity::accept()
{
    do{
    std::cout << "Enter sanction load, Enter 1, 3 or 5 only : ";
    std::cin >> sanctionLoad;
    }while(sanctionLoad!=1 && sanctionLoad!=3 && sanctionLoad!=5 );

    //Checking sanction load to set electricity slab
    switch (sanctionLoad)
    {
    case 1:
        electricityslab = E1;
        break;
    case 3:
        electricityslab = E2;

        break;
    case 5:
        electricityslab = E3;

        break;

    }
    std::cout << "Enter previous reading : ";
    std::cin >> previousReading;
    std::cout << "Enter present reading : ";
    std::cin >> presentReading;
}
void Electricity::display()
{
    std::cout<<"\n\nDetails \n";
    std::cout << "Sanction Load = " << sanctionLoad << "\n";
    switch (sanctionLoad)
    {
    case 1:
        std::cout << "Electricity Slab = E1\n";
        break;
    case 3:
        std::cout << "Electricity Slab = E2\n";
        break;
    case 5:
        std::cout << "Electricity Slab = E3\n";
        break;

    default:
        break;
    }

    std::cout << "Present Reading  = " << presentReading << "\n";
    std::cout << "Previous Reading = " << previousReading << "\n";
}


double Electricity::calculateElectricityBill()
{
    // if present reading is less than past then return 0;
    if (presentReading < previousReading)
    {
        return 0;
    }
    int f=sanctionLoad * electricityslab;
    int consumption = presentReading - previousReading;


    // Calculated final bill
    double ans = f+(consumption*electricityslab/100);

    return ans;
}




// Defining Getters
int Electricity::getSanctionLoad()
{
    return sanctionLoad;
}

int Electricity::getElectricityslab()
{
    return electricityslab;
}

long Electricity::getPreviousReading()
{
    return previousReading;
}
long Electricity::getPresentReading()
{
    return presentReading;
}

// Defining Setters
void Electricity::setSanctionLoad(int sload)
{
    sanctionLoad = sload;
}


void Electricity::setPreviousReading(long prev)
{
    previousReading = prev;
}

void Electricity::setPresentReading(long pres)
{
    presentReading = pres;
}


class DivideByZeroException : public std::exception
{
    char *name;
    public:
    DivideByZero(const char*msg)
    {
        name = new char[60];
        strcpy(name,msg);
    }
    const char * what()
    {
        return name;
    }
};