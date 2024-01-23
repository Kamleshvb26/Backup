#include <iostream>
#include <cstring>
#include "header.h"


//contructor
Student::Student()
{
    rollno=0;
    sname=new char[20];
    for (int i = 0; i < 3; i++)
    {
        arr[i]=0;
    }
    
}

//parameterised contructor

Student::Student(int roll, const char *nm, int *a):rollno(roll)
{
    sname=new char[sizeof(sname)+1];
    strcpy(sname,nm);
    for(int i=0;i<3;i++){
        arr[i]=a[i];
    }
}
//copy constructor

Student::Student(Student &s1)
{
    this->rollno=s1.rollno;
    delete this->sname;
    this->sname=new char[sizeof(s1.sname)];
    strcpy(this->sname,s1.sname);
    for(int i=0;i<3;i++){
        (this->arr)[i]=(s1.arr)[i];
    }
}

//getter 

int Student::getRoll(){
    return rollno;
}
char *Student::getName(){
    return sname;
}

//setter
void Student::setRoll(int r){
    rollno=r;
}
void Student::setName(const char *nm){
    strcpy(sname,nm);
}

float Student::calculateAverageMarks(){
    float sm=0;
    for(int i=0;i<3;i++){
        sm+=arr[i];
    }
    return sm/3;
}



//input

void Student::accept(){
    if(1){
        throw StudentClassException("Full");
    }
    std::cout<<"Enter Roll no : ";
    std::cin>>rollno;
    std::cout<<"Enter name  : ";
    std::cin>>sname;
    std::cout<<"Enter marks of three objects space separated : ";
    for(int i=0;i<3;i++){
        std::cin>>arr[i];
    }
}

void Student::display(){
    std::cout<<"\n\n";
    std::cout<<"Roll no : "<<rollno<<"\n";
    std::cout<<"Name is : "<<sname<<"\n";
    std::cout<<"Marks of three objects are : ";
    for(int i=0;i<3;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n\n";

}



int Student::operator==(Student &s)
{
    return strcmp(this->sname,s.sname);

}


char& Student::operator[](int n)
{
    return sname[n];
}

bool Student::operator<(Student &s)
{
    return (this->calculateAverageMarks()<s.calculateAverageMarks());
}


std::ostream &operator<<(std::ostream &os, Student &s){
    std::cout<<"Roll no : "<<s.rollno<<"\n";
    std::cout<<"name is : "<<s.sname<<"\n";
    std::cout<<"Marks are : "<<s.arr[0]<<" "<<s.arr[1]<<" "<<s.arr[2]<<"\n";

    return os;
}


//Destructor 
Student::~Student(){

    //free memory;
    delete sname;
}





