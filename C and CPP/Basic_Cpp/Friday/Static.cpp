#include<iostream>

class student
{
    int roll;
    std::string name;
    static int count;
    //int count=0;


    public:
    student()
    {
        roll=0;
        name="NA";
        count++;
    }
    student(int roll,std::string name):roll(roll),name(name)
    {
        count++;
    }
    void accept();
    void display();
    static int objcount();
    //int objcount();

};
int student:: objcount()
{
    return count;
}

void student:: accept()
{
    std::cout<<"Enter roll no : "<<std::endl;
    std::cin>>roll;
    std::cout<<"Enter name : "<<std::endl;
    std::cin>>name;
}

void student:: display()
{
    std::cout<<"roll no : "<<roll<<std::endl;
    std::cout<<"name : "<<name<<std::endl;
    
}

int student:: count=0;

int main()
{
    student obj;
    obj.accept();
    obj.display();
    std::cout<<"count "<<obj.objcount()<<std::endl;
    student obj1;
    obj1.accept();
    obj1.display();
    std::cout<<"count "<<obj1.objcount()<<std::endl;

    return 0;
}