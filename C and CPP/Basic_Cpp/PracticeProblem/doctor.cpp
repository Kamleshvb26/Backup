#include <iostream>
#include "doctor.h"

Doctor::Doctor()
{
    doctorID = 0;
    doctorName = "";
    doctorSpeciality = "";
    registeredHospName = "";
    doctorFees = 0;
}

Doctor::Doctor(int id, std::string nm, std::string dsp , std::string hospname, float fees)
:doctorID(id),doctorName(nm),doctorSpeciality(dsp),registeredHospName(hospname),doctorFees(fees)
{
    
}
void Doctor::accept()
{
     std::cout<< "Enter Doctor ID : " <<"\n";
    std::cin>> doctorID ;
    std::cout<< "Enter Doctor Name : " <<"\n";
    std::cin>> doctorName ;
    std::cout<< "Enter Doctor Speciality : " <<"\n";
    std::cin>> doctorSpeciality ;
}
void Doctor::display()
{
    std::cout<< "Doctor ID :" <<doctorID<<"\n";
    std::cout<< "Doctor Name :" <<doctorName<<"\n";
    std::cout<< "Doctor Speciality :" <<doctorSpeciality<<"\n";
    std::cout<< "Hospital Name :" <<registeredHospName<<"\n";
    std::cout<< "Consultancy Fees :" <<doctorFees<<"\n";
}
Doctor::~Doctor()
{
}