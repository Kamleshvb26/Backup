#include <iostream>
#include <cstring>
#include "header.h"

Rectangle::Rectangle()
{
    std::cout << "Constructor Called \n";
    length = 0;

    width = 0;
}
Rectangle::Rectangle(int l, int w)
{
    std::cout << "Constructor Called \n";

    length = l;
    width = w;
}

Rectangle Rectangle::add(Rectangle &rect)
{
    Rectangle res;
    res.length=this->length+rect.length;
    res.width=this->width+rect.width;

    return res ;

}

Rectangle Rectangle::subtract(Rectangle &rect)
{
    Rectangle res;
    res.length=this->length-rect.length;
    res.width=this->width-rect.width;

    return res ;
}

bool Rectangle::compare(Rectangle &r2)
{
    return (length==r2.length && width==r2.width);
}

int Rectangle::calculateArea()
{
    return length*width;
}

int Rectangle::calculatePerimeter()
{
    return 2*(length+width);

}

Rectangle::~Rectangle()
{
    std::cout << "Destructor called \n";
}
