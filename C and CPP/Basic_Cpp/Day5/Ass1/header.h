#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class Rectangle
{
    int length, width;

public:
    Rectangle();
    Rectangle(int, int);

    Rectangle operator+(Rectangle &);

  

    Rectangle operator+(int);

    friend Rectangle operator+(int n,Rectangle&);

    // friend void operator<<(std::ostream os,Rectangle&);

    friend std::ostream& operator<<(std::ostream &os,const Rectangle&);

    Rectangle operator-(Rectangle &);

    Rectangle operator-();

    Rectangle operator-(int );

    Rectangle& operator++();

    Rectangle operator++(int );
    
    // Rectangle operator<<(Rectangle& r4 );


    bool operator==(Rectangle &);

    bool operator!=(Rectangle &);

    int calculateArea();

    int calculatePerimeter();

    void display();

    ~Rectangle();
};

#endif // HEADER_H
