#include <iostream>
#include <cstring>
#include "header.h"

Rectangle::Rectangle()
{
    // std::cout << "Constructor Called \n";
    length = 0;

    width = 0;
}
Rectangle::Rectangle(int l, int w)
{
    // std::cout << "Constructor Called \n";

    length = l;
    width = w;
}

// Overloaded  binary + operator
Rectangle Rectangle::operator+(Rectangle &rect)
{
    Rectangle res;
    res.length = this->length + rect.length;
    res.width = this->width + rect.width;

    return res;
}

// Overloaded  binary + operator with object and primitive data
Rectangle Rectangle::operator+(int n)
{
    Rectangle res;
    res.length = this->length + n;
    res.width = this->width + n;

    return res;
}

// Overloaded  binary + operator with object and primitive data using friend function
Rectangle operator+(int n, Rectangle &r3)
{
    Rectangle res;
    res.length = r3.length + n;
    res.width = r3.width + n;

    return res;
}

// Overloaded  binary + operator with object and primitive data
Rectangle Rectangle::operator-(int n)
{
    Rectangle res;
    res.length = this->length - n;
    res.width = this->width - n;

    return res;
}

Rectangle Rectangle::operator-(Rectangle &rect)
{
    Rectangle res;
    res.length = this->length - rect.length;
    res.width = this->width - rect.width;

    return res;
}

Rectangle Rectangle::operator-()
{
    Rectangle tmpObj;

    tmpObj.length = -this->length;
    tmpObj.width = -this->width;

    return tmpObj;
}

bool Rectangle::operator==(Rectangle &r2)
{
    return (length == r2.length && width == r2.width);
}

bool Rectangle::operator!=(Rectangle &r2)
{
    return (length != r2.length || width != r2.width);
}

Rectangle &Rectangle::operator++()
{
    ++this->length;
    ++this->width;
    return *this;
}

Rectangle Rectangle::operator++(int n)
{
    Rectangle tmpObj = *this;
    ++this->length;
    ++this->width;
    return tmpObj;
}

std::ostream& operator<<(std::ostream &os,const Rectangle &obj){
    os<<"Length : "<<obj.length<<"\n";
    os<<"Width : "<<obj.width<<"\n";

    return os;
}


int Rectangle::calculateArea()
{
    return length * width;
}

int Rectangle::calculatePerimeter()
{
    return 2 * (length + width);
}

void Rectangle::display()
{
    std::cout << "\nLength : " << length << "\n";
    std::cout << "Width : " << width << "\n\n";
}

Rectangle::~Rectangle()
{
    // std::cout << "Destructor called \n";
}
