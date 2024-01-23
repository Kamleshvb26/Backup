#include <iostream>
#include "header.h"

int main()
{
    Account newAccounts[2] = {{12341, "Jay", 123456}, {12342, "Viru", 765432}};

    Account *ptr = new Account;

    ptr->display();
    std::cout << "\n";

    for (int i = 0; i < 2; i++)
    {
        newAccounts[i].display();
        std::cout << "\n";
    }

    delete ptr;

    return 0;

    return 0;
}