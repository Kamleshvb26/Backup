#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include"header.h"
class Student // container class
{
    int rollno;
    std::string sname;
    Address padd;//contained object

    public:
        Student();
        void display();
        ~Student();
        Student(int,std::string ,std::string,int,std::string);
    
};

#endif // STUDENT_H
