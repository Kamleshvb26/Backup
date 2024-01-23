
#include<iostream>
#include<cstring>

class DateException : public std::exception
{
    char *name;
    public:
    DateException(const char*msg)
    {
        name = new char[60];
        strcpy(name,msg);
    }
    const char * what()
    {
        return name;
    }
};