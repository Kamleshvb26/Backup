// Header Guards
#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cstring>

class Student
{
    int rollno;
    char *sname;
    int arr[3];

public:
    Student();

    Student(int roll, const char *sname, int *);

    Student(Student &s1);

    int getRoll();

    char *getName();

    void setRoll(int r);

    void setName(const char *);

    float calculateAverageMarks();

    void accept();

    void display();

    int operator==(Student &s);

    char &operator[](int n);

    bool operator<(Student &s);

    friend std::ostream &operator<<(std::ostream &os, Student &s);

    ~Student();

};





class StudentClassException : public std::exception
{
    char *name;

public:
    StudentClassException(const char *msg)
    {
        name = new char[60];
        strcpy(name, msg);
    }
    const char *what()
    {
        return name;
    }

};

#endif