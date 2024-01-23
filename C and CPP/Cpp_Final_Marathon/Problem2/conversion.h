#ifndef CONVERSION_H
#define CONVERSION_H

#include <iostream>
#include <cstring>


class IndexException : public std::exception
{
    char *name;
    public:
    IndexException(const char*msg)
    {
        name = new char[60];
        strcpy(name,msg);
    }
    const char * what()
    {
        return name;
    }
};

class Conversion
{
private:
    float xDistance;
    float yDistance;
    int *arr;


public:
    Conversion();

    Conversion(Conversion &con);

    Conversion(float, float, int *);

    void accept();

    void display();

    Conversion operator+(Conversion &obj);

    friend void operator+(int n, Conversion &obj);

    Conversion &operator++();

    Conversion operator++(int n);

    int operator[](int n);

    bool operator==(Conversion &obj);

    float operator()();

    friend void operator+(int n, Conversion &obj);

    float getXDistance() const { return xDistance; }
    void setXDistance(float xDistance_) { xDistance = xDistance_; }

    float getYDistance() const { return yDistance; }
    void setYDistance(float yDistance_) { yDistance = yDistance_; }

    ~Conversion();
};

#endif // CONVERSION_H
