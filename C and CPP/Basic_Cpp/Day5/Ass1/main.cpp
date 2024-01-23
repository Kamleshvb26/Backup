#include <iostream>
#include "header.h"

int main()
{

    Rectangle r1(2, 5);
    Rectangle r2(2, 5);

    Rectangle r3 = r1 + r2;
    Rectangle r4 = r1 + r2;

    std::cout << "\nArea " << r2.calculateArea() << "\n";

    std::cout << "Perimeter " << r2.calculatePerimeter() << "\n";

    std::cout << "\nArea " << r3.calculateArea() << "\n";

    std::cout << "Perimeter " << r4.calculatePerimeter() << "\n";

    if (r1 == r2)
    {
        std::cout << "\nBoth are equal \n\n";
    }
    else
    {
        std::cout << "Not Equal  \n\n";
    }

    if (r3 != r4)
    {
        std::cout << "Both are equal  \n\n";
    }
    else
    {

        std::cout << "\nNot Equal\n\n";
    }

    r1.display();
    r2.display();

    r3=++r1;
    r4=r2++;

    r3.display();
    r4.display();

    r4=-r3;
    r4.display();

    r1=r2+100000;
    r1.display();
    r2=100000+r1;
    r2.display();

    Rectangle r6(99,87);

    std::cout<<r6;
 

    return 0;
}