#include <iostream>
#include <cstring>
#include "header.h"

int main()
{

    int size, i = 0, acc;
    char *nm;

    std::cout << "Enter number of accounts :";

    std::cin >> size;

    Account newAccounts[size];

    int choice = 5;

    do
    {

        std::cout << "\n1. Add Account \n";
        std::cout << "2. Display Account \n";
        std::cout << "3. Search Account \n";
        std::cout << "4. Modify Account \n";
        std::cout << "5. Exit \n\n";
        std::cout << "Enter choice :";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            if (i == size)
            {
                std::cout << "Full  \n";
            }
            else
            {
                createAccount(newAccounts, i, size);
                i++;
            }

            break;
        case 2:
            if (i == 0)
            {
                std::cout << "Empty \n";
            }
            else
            {
                for (int x = 0; x < i; x++)
                {
                    newAccounts[i].display();
                }
            }

            break;
        case 3:
            std::cout << "Enter account number to search : ";
            std::cin >> acc;
            search(newAccounts, acc, i);
            break;
        case 4:
            std::cout << "Enter account number to modify : ";
            std::cin >> acc;
            std::cout << "Enter new name : ";
            std::cin >> nm;
            modify(newAccounts, nm,acc, i);
            break;
        case 5:
            choice = 0;
            break;

        default:
            std::cout << "Please enter valid choice \n";
            break;
        }
    } while (choice);

    return 0;
}