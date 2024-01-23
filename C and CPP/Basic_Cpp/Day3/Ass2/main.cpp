#include <iostream>
#include "header.h"

int main()
{

    Rectangle r1(2,5);
    Rectangle r2(2,5);

    Rectangle r3=r1.add(r2);
    Rectangle r4=r1.subtract(r2);

    std::cout<<"\nArea "<<r2.calculateArea()<<"\n";

    std::cout<<"Perimeter "<<r2.calculatePerimeter()<<"\n";

    if(r1.compare(r2)){
        std::cout<<"Both are equal \n\n";
    }else{
        std::cout<<"Not Equal  \n\n";

    }

    



    return 0;
}