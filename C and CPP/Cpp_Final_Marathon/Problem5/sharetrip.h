#ifndef SHARETRIP_H
#define SHARETRIP_H

#include <iostream>
#include "trip.h"


class SharedTrip:Trip
{
    private:
        int SharedTripPassengers;

    public:
        SharedTrip();

        void accept();

        void display();

        float calculateFare();

        
        bool isTripAsPerStandard();
   
};

#endif // SHARETRIP_H
