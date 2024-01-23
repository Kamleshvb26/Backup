#include <iostream>
#include "sharetrip.h"

SharedTrip::SharedTrip()
{
    SharedTripPassengers=0;
}

void SharedTrip::accept()
{
    Trip::accept();
    std::cout<< "Enter Shared trip passengers : ";
    std::cin>> SharedTripPassengers ;
}
void SharedTrip::display()
{
    Trip::display();
    std::cout<< "Indivisual Trip Duraion : "<<SharedTripPassengers <<"\n";

}

float SharedTrip::calculateFare()
{
    if(tripVehicleType==REGULAR){
        return (tripDistance*tripVehicleType+SharedTripPassengers*5)*1.18;

    }
    if(tripVehicleType==COMFORT){
        return (tripDistance*tripVehicleType+SharedTripPassengers*10)*1.18;

    }
    if(tripVehicleType==PREMIUM){
        return (tripDistance*tripVehicleType+SharedTripPassengers*20)*1.18;

    }

    return 0;
}



bool SharedTrip::isTripAsPerStandard()
{
    if(tripVehicleType==REGULAR && tripRating>3){
        return true;
    }else{
        return false;
    }
    if(tripVehicleType==COMFORT && tripRating>4){
        return true;
    }else{
        return false;
    }
    if(tripVehicleType==PREMIUM && tripRating>4 ){
        return true;
    }else{
        return false;
    }
    
    
}
