#ifndef INDIVISUALTRIP_H
#define INDIVISUALTRIP_H

#include <iostream>
#include "trip.h"


class IndivisualTrip:Trip
{
    private:
        int indivisualTripDuraion;

    public:
        IndivisualTrip();

      

        void accept();

        void display();

        float calculateFare();

        float calculateFare(float );
        
        bool isTripAsPerStandard();
   
};

#endif // INDIVISUALTRIP_H
