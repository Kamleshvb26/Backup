#ifndef TRIP_H
#define TRIP_H

#include<iostream>

enum Ride{REGULAR=25,COMFORT=30,PREMIUM=50};

class Trip
{
    protected:
        std::string tripId;
        std::string tripDriver;
        int tripDistance;
        int tripRating;
        enum Ride tripVehicleType;

    public:
        Trip();

       

        void accept();

        void display();

        virtual float calculateFare()=0;

    

        
};

#endif // TRIP_H
