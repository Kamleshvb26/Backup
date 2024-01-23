#include <iostream>
#include "header.h"

Flight::Flight()
{
    numberOFObjects++;
    flightNumber = 0;
    distance = 0;
    fuel = 0;
    fare = 0;
}

Flight::Flight(long int no, float dis, float fl, float fr) : flightNumber(no), distance(dis), fuel(fl), fare(fr)
{
    numberOFObjects++;
}

int Flight::numberOFObjects=0;

int Flight::calculateFuelQuantity()
{
    if(distance<=10000){
        return 5000;
    }

    if(distance>10000 && distance<=20000){
        return 11000;
    }
    else{
        return 11000;
    }
}

void Flight::feedInfo()
{
    std::cout << "\nEnter Flight number : ";
    std::cin >> flightNumber;
    std::cout << "Enter Distance  : ";
    std::cin >> distance;
    std::cout << "Enter Fuel  : ";
    std::cin >> fuel;
    std::cout << "Enter Flight fare : ";
    std::cin >> fare;
}
void Flight::showInfo()
{
    std::cout << "\n\nFlight number : "<<flightNumber<<"\n";
    std::cout << "Distance  : "<<distance<<"\n";
    std::cout << "Fuel  : "<<fuel<<"\n";
    std::cout << "Flight fare : "<<fare<<"\n";
}

    
int Flight:: getFlightNumber(){
    return flightNumber;
}

void Flight::calculateTotalFlightObjects()
{
    std::cout << "\nTotal bumber of objects are :" << numberOFObjects << "\n";

}