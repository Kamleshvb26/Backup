#include <iostream>
#include "hospital.h"

int main()
{

    Hospital h("Hosp1", "Apple", 3);

    h.display();
    std::cout << h << "\n";

    
    

    return 0;
}