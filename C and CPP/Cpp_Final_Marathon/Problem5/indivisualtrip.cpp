#include <iostream>
#include "indivisualtrip.h"

IndivisualTrip::IndivisualTrip()
{
    indivisualTripDuraion=0;
}

void IndivisualTrip::accept()
{
    Trip::accept();
    std::cout<< "Enter Indivisual Trip Duraion : ";
    std::cin>> indivisualTripDuraion ;
}
void IndivisualTrip::display()
{
    Trip::display();
    std::cout<< "Indivisual Trip Duraion : "<<indivisualTripDuraion <<"\n";

}

float IndivisualTrip::calculateFare()
{
    return tripDistance*tripVehicleType;
}

float IndivisualTrip::calculateFare(float sur)
{
    return tripDistance*tripVehicleType*indivisualTripDuraion*sur;
}

bool IndivisualTrip::isTripAsPerStandard()
{
    if(tripVehicleType==REGULAR && tripRating>2 && (indivisualTripDuraion<=3*tripDistance)){
        return true;
    }else{
        return false;
    }
    if(tripVehicleType==COMFORT && tripRating>4 && (indivisualTripDuraion<=3*tripDistance)){
        return true;
    }else{
        return false;
    }
    if(tripVehicleType==PREMIUM && tripRating>4 && (indivisualTripDuraion<=4*tripDistance)){
        return true;
    }else{
        return false;
    }
    
}
