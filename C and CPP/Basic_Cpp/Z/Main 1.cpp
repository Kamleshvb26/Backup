#include <iostream>
#include "header.h"

void input(Account a[], int index)
{
    a[index].accept();
}
void output(Account a[], int cnt)
{
    for (int j = 0; j < cnt; j++)
    {
        a[j].display();
    }
}
int main()
{
    Account arr[5];
    int choice = 1, i = 0;
    do
    {
        std::cout << "\n MENU 1>ADD 2>DISPLAY 3>SEARCH 4>MODIFY 5>EXIT\n";
        std::cout << "Enter choice ";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            if (i >= 5)
                std::cout << "\n Memory full ";
            else
            {
                input(arr, i);
                i++;
            }
            break;
        case 2:
            if (i == 0)
                std::cout << "\n No records to display";
            else
            {
                output(arr, i);
            }
            break;
        case 3:
            exit(0);
        }
    } while (1);
    return 0;
}