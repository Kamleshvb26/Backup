//Header Guards
#ifndef HEADER_H
#define HEADER_H

#include <iostream>

//Enum for ElectricitySlabs
enum ElectricitySlabs
{
    E1 = 125,
    E2 = 150,
    E3 = 200
};

class Electricity
{
private:
    int sanctionLoad;
    enum ElectricitySlabs electricityslab;
    long presentReading;
    long previousReading;

public:

    Electricity();

    void accept();
    void display();

    //Getters 
    int getSanctionLoad();
    int getElectricityslab();
    long getPreviousReading();
    long getPresentReading();

    //Setters
    void setSanctionLoad(int sload);
    // void setElectricityslab(int n);
    void setPreviousReading(long prev);
    void setPresentReading(long pres);

    double calculateElectricityBill();


};

#endif
