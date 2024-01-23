#include <iostream>
#include "header.h"

int main()
{

    int n, choice = 5, ele;

    std::cout << "Enter size of stack : ";
    std::cin >> n;

    Stack st(n);

    do
    {

        std::cout << "\n1. Push element \n";
        std::cout << "2. Pop element \n";
        std::cout << "3. check  size \n";
        std::cout << "4. print stack \n";
        std::cout << "5. Exit \n\n";
        std::cout << "Enter choice :";
        std::cin >> choice;
        std::cout << "\n";

        switch (choice)
        {
        case 1:
            if (st.isfull())
            {
                std::cout << "Stack is Full  \n";
            }
            else
            {
                std::cout << "Enter element to push :";
                std::cin >> ele;
                st.push_back(ele);
            }
            break;
        case 2:
            if (st.isempty())
            {
                std::cout << "Stack is Empty  \n";
            }
            else
            {
                std::cout << st.pop() << " is poped \n";
            }

            break;
        case 3:
            std::cout << "Size is " << st.size();
            break;
        case 4:
            if (st.isempty())
            {
                std::cout<<"Stack is empty \n";
            }
            else
            {
                st.print();
            }
            break;
        case 5:
            choice = 0;
            break;

        default:
            std::cout << "Please enter valid choice \n";
            break;
        }
        std::cout << "\n";
    } while (choice);
    return 0;
}