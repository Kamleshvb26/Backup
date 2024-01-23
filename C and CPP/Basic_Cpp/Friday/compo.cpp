//containment 
//composition
//aggregation
#include<iostream>

class Address
{
    std::string city;
    int pincode;
    std::string state;
    public:
    Address()
    {
        std::cout<<"Address() called"<<std::endl;
        city="Pune";
        pincode=1234;
        state="MH";

    }
    Address(std::string ct,int pin,std::string st):city(ct),pincode(pin),state(st)
    {
        std::cout<<"Address(....) called"<<std::endl;
    }
    void accept();
    void display();
    ~Address()
    {
        std::cout<<"~Address() called"<<std::endl;
    }
};

class Student
{
    int rollno;
    std::string name;
    Address padd;

    public:
    Student()
    {
        rollno=0;
        name="xyz";
    }
    Student(int r,std::string nm,std::string ct,int pin,std::string st):
    rollno(r),name(nm),padd(ct,pin,st)
    {
        std::cout<<"\n Student(.....) called ";
    }
    void display();
};

void Student::display()
{
    std::cout<<"\n"<<name<<" "<<rollno<<" ";
    padd.display();
}


void Address::accept()
{

}
void Address::display()
{
    std::cout<<"Address = "<<city<<" "<<state<<" "<<pincode<<"\n";
    
}
int main()
{
    Student s1(101,"Adesh","pune",411044,"MH");
    s1.display();
    return 0;
}