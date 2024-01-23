#include<iostream>
#include"header.cpp"


class student
{
private:
    int roll;
    std::string name;
    Address add;
public:
    student(int r,std::string nm,std::string ct,int pin,std::string st){
        
        std::cout<<"student def cons\n";
        
    }
    student(){
        std::cout<<"Student para  cons\n";

    }
    ~student(){
        std::cout<<"student  des\n";

    }
};


