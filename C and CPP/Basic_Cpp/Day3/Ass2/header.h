#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class Rectangle
{
    int length , width;

public:
    Rectangle();
    Rectangle(int ,int);

    Rectangle add(Rectangle &);

    Rectangle subtract(Rectangle &);

    bool compare(Rectangle &);

    int calculateArea();

    int calculatePerimeter();


    ~Rectangle();
};

#endif // HEADER_H
