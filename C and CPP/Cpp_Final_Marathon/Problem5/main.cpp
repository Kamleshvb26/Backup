#include <iostream>
#include "trip.h"
#include "sharetrip.h"
#include "indivisualtrip.h"

int main()
{
    IndivisualTrip i;
    SharedTrip s;

    i.accept();
    s.accept();

    i.display();

    s.display();

    if (i.isTripAsPerStandard())
    {

        std::cout << "Trip is Standard : "
                  << "\n";
    }
    else
    {
        std::cout << "Trip is Standard : "
                  << "\n";
    }


    if (s.isTripAsPerStandard())
    {

        std::cout << "Trip is Standard : "
                  << "\n";
    }
    else
    {
        std::cout << "Trip is Not Standard : "
                  << "\n";
    }

    std::cout<< i.calculateFare() <<"\n";
    std::cout<< i.calculateFare(0.125) <<"\n";

    std::cout<< s.calculateFare() <<"\n";




    return 0;
}