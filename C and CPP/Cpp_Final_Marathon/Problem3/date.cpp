#include <iostream>
#include <cstring>
#include "date.h"
#include "dateexp.h"



//Default Constructor
Date::Date()
{
    day=1;
    month=1;
    year=2000;
}

//Parameterized Constructor
Date::Date(int d, int m, int y):day(d),month(m),year(y)
{
}

void Date::accept(){
    std::cout<< "Enter month :";
    std::cin>> month ;
    if(month<0 || month>12){
        throw DateException("Date Exception .....Enter 1-12");
    }
    std::cout<< "Enter day :";
    std::cin>> day ;
    if(day>31){
        throw DateException("Date Exception Invalid");
    }
    if(month==2 && day>28){
        throw DateException("Date Exception Enter 1-28");

    }
    if( month==4 || month==6 ||month==9 ||month==11 && day>30 ){
        throw DateException("Date Exception Enter 1-30");

    }
    
    
    
    std::cout<< "Enter year :";
    std::cin>> year ;
}

std::ostream &operator<<(std::ostream &os, Date &obj)
{
    os << "Day : " << obj.day << "\n";
    os << "Month : " << obj.month << "\n";
    os << "Year : " << obj.year << "\n";

    return os;
}

