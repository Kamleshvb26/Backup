//Header Guards
#ifndef HEADER_H
#define HEADER_H

#include <iostream>


class Flight
{

private:
  long int flightNumber;
  float distance;
  float fuel;
  float fare;
  static int numberOFObjects;

public:

    Flight();
   
   //parameterised constructor

    Flight(long int, float, float, float);

    int calculateFuelQuantity();

    //Input function 
    void feedInfo();

    //display function 
    void showInfo();

    //get for flight number
    int getFlightNumber();
    
    //static function for total objects created
    static void  calculateTotalFlightObjects();


};


#endif
