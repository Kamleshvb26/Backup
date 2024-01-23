#include <iostream>
#include "trip.h"

Trip::Trip()
{
    tripId = "";
    tripDriver = "";
    tripDistance = 0;
    tripRating = 0;
    tripVehicleType = REGULAR;
}

void Trip::accept()
{
    std::cout << "Enter Trip Id : ";
    std::cin >> tripId;
    std::cout << "Enter Trip Driver Name : ";
    std::cin >> tripDriver;
    std::cout << "Enter Trip Distance : ";
    std::cin >> tripDistance;
    std::cout << "Enter Trip Rating : ";
    std::cin >> tripRating;
    int n=tripRating;
   // std::cin >> n;
    switch (n)
    {
    case 1:
        tripVehicleType = REGULAR;
        break;
    case 2:
        tripVehicleType = COMFORT;

        break;
    case 3:
        tripVehicleType = PREMIUM;

        break;

    default:
        std::cout << "Enter Valid number"
                  << "\n";
        break;
    }
}


void Trip::display()
{
     std::cout << " Trip Id : ";
    std::cout << tripId;
    std::cout << "Trip Driver Name : ";
    std::cout << tripDriver;
    std::cout << "Trip Distance : ";
    std::cout << tripDistance;
    std::cout << "Trip Rating : ";
    std::cout << tripRating;
}



