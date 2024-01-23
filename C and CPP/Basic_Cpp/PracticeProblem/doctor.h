#include <iostream>
#include "hospital.h"

class Doctor:public Hospital
{
private:
    int doctorID;
    std::string doctorName;
    std::string doctorSpeciality;
    std::string registeredHospName;
    float doctorFees;

public:
    Doctor();

    Doctor(int, std::string,std::string,std::string,float);

    void accept();

    void display();

    float calculateTax()
    {
        return 0.2 * doctorFees;
    }

    ~Doctor();
};


