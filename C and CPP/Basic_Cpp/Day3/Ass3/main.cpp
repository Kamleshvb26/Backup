#include <iostream>
#include "header.h"

int main()
{

    Product p1(123,"abc",200.00);

    Product p2(124,"xyz",2002.00);

    if(p1.compare(p2)){
        std::cout<<"Equal\n";
    }else{
        std::cout<<"Not Equal\n";
    }


    return 0;
}