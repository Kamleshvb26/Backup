#include<iostream>
#include"Student.h"

Student::Student()
{
     std::cout<<"\n Student() called ";
     rollno=1011;
     sname="Jay";     
}

void Student::display()
{
    std::cout<<"\nRollno = "<<rollno;
    std::cout<<"\tName = "<<sname<<"\t";
    padd.display();
}
Student::~Student()
{
     std::cout<<"\n ~Student() called ";
}

Student::Student(int r,std::string nm,std::string ct,int pin,std::string st):
 rollno(r),sname(nm),padd(ct,pin,st)
{
  std::cout<<"\n Student(.........) called ";
  
}