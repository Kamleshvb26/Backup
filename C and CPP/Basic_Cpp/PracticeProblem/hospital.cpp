#include<iostream>
#include"hospital.h"

Hospital::Hospital()
{
    hospitalId = "";
    hospitalName = "";
    rt = NORATING;
}


Hospital::Hospital(std::string id, std::string name, int r) : hospitalId(id), hospitalName(name)
{
    if (r == 1)
    {
        rt = POOR;
    }
    else if (r == 2)
    {
        rt = AVERAGE;
    }
    else if (r == 3)
    {
        rt = DECENT;
    }
    else if (r == 4)
    {
        rt = GOOD;
    }
    else
    {
        rt = NORATING;
    }
}

std::ostream& operator<<(std::ostream &os,Hospital &obj){
    os<< "Hospital ID :" <<obj.hospitalId<<"\n";
    os<< "Hospital Name :" <<obj.hospitalName<<"\n";
    switch (obj.rt)
    {
    case 1:
        os<< "Rating : POOR" <<"\n";
        break;
    
    case 2:
        os<< "Rating : Average" <<"\n";
        break;
    
    case 3:
        os<< "Rating : Decent" <<"\n";
        break;
    
    case 4:
        os<< "Rating : Good" <<"\n";
        break;
    
    default:
        os<< "Rating : No Rating" <<"\n";

        break;
    }

    return os;
}



void Hospital::accept()
{
    std::cout<< "Enter Hospital ID : " <<"\n";
    std::cin>> hospitalId ;
    std::cout<< "Enter Hospital Name : " <<"\n";
    std::cin>> hospitalName ;
    std::cout<< "Enter Hospital Rating : " <<"\n";
    int r;
    std::cin>> r ;
    switch (r)
    {
    case 1:
        rt=POOR;
        break;
    case 2:
        rt=AVERAGE;
        break;
    case 3:
        rt=DECENT;
        break;
    case 4:
        rt=GOOD;
        break;
    
    default:
    rt=NORATING;
        break;
    }
}


void Hospital::display()
{
    std::cout<< "Hospital ID :" <<hospitalId<<"\n";
    std::cout<< "Hospital Name :" <<hospitalName<<"\n";
    switch (rt)
    {
    case 1:
        std::cout<< "Rating : POOR" <<"\n";
        break;
    
    case 2:
        std::cout<< "Rating : Average" <<"\n";
        break;
    
    case 3:
        std::cout<< "Rating : Decent" <<"\n";
        break;
    
    case 4:
        std::cout<< "Rating : Good" <<"\n";
        break;
    
    default:
        std::cout<< "Rating : No Rating" <<"\n";

        break;
    }
    
}


Hospital::~Hospital()
{
    std::cout<< "No work ....Enjoying " <<"\n";
}