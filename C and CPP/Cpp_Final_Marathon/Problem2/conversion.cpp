#include <iostream>
#include "conversion.h"


//Default Constructor
Conversion::Conversion()
{
    xDistance = 0;
    yDistance = 0;
    arr = new int[5];
}


//Parameterized Constructor 
Conversion::Conversion(float x, float y, int *a) : xDistance(x), yDistance(y)
{
    arr = new int[5];
    for(int i=0;i<5;i++){
        arr[i]=a[i];
    }
}

Conversion::Conversion(Conversion &con)
{
    this->xDistance = con.xDistance;
    this->yDistance = con.yDistance;
    arr=new int[5];

    for (int i = 0; i < 5; i++)
    {
        (this->arr)[i] = (con.arr)[i];
    }
}


//Input Function 
void Conversion::accept()
{
    std::cout<< "Enter X distance : ";
    std::cin>> xDistance ;
    std::cout<< "Enter Y distance : ";
    std::cin>> yDistance ;
    std::cout<< "Enter array elements " <<"\n";
    for(int i=0;i<5;i++){
        std::cin>> (this->arr)[i];
    }
    std::cout<<"\n\n";

}

//Display function
void Conversion::display()
{
    std::cout<< "X distance "<<xDistance <<"\n";
    std::cout<< "Y distance "<<yDistance <<"\n";
    std::cout<< "Array Elements : ";
    for(int i=0;i<5;i++){
        std::cout<< (this->arr)[i]<<" ";
    }
    std::cout<<"\n\n";
}

//Binary + operator
Conversion Conversion::operator+(Conversion &obj)
{
    Conversion temp;

    temp.xDistance = this->xDistance + obj.xDistance;
    temp.yDistance = this->yDistance + obj.yDistance;

    return temp;
}
void operator+(int n,Conversion &obj)
{


    obj.xDistance = obj.xDistance + n;
    obj.yDistance = obj.yDistance + n;

}

//pre Increment
Conversion &Conversion::operator++()
{

    this->xDistance++;
    this->yDistance++;

    return *this;
}

//Post increment
Conversion Conversion::operator++(int n)
{
    Conversion temp;

    temp.xDistance = this->xDistance+1;
    temp.yDistance = this->yDistance+1;

    return temp;
}



int Conversion::operator[](int n){
    if(n>5 || n<0){
        throw IndexException("Index out of range");
    }
    return (this->arr)[n];
}


//Comparison operator
bool Conversion::operator==(Conversion &obj)
{
    return (this->xDistance == obj.xDistance && this->yDistance == obj.yDistance);
}


//overload ()

float Conversion:: operator()(){
    float sum=0;
    for(int i=0;i<5;i++){
        sum+=(this->arr)[i];
    }

    return sum/5;
}

//Destructor
Conversion::~Conversion()
{
    delete arr;
}
