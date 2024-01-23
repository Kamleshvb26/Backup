#ifndef DATE_H
#define DATE_H

#include<iostream>
#include <cstring>
#include "customer.h"


class Date
{
    private:
        int day;
        int month;
        int year;

    public:

        Date();

        Date(int , int , int );

        void accept();

        void Date::display(){
            
        }

        //Getters  and Setters 

        int getMonth() const { return month; }
        void setMonth(int month_) { month = month_; }

        int getDay() const { return day; }
        void setDay(int day_) { day = day_; }

        int getYear() const { return year; }
        void setYear(int year_) { year = year_; }

        
        friend std::ostream& operator<<(std::ostream&os, Date &obj);


        
};
#endif // DATE_H
