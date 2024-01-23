#include <iostream>
#include "header.h"

// Global Function to display All the Students
void displayAllStudents(Student *arr, int curr)
{
    for (int i = 0; i < curr; i++)
    {
        arr[i].display();
    }

    std::cout << "\n\n";
}

int main()
{

    int n; // number of students

    std::cout << "Enter number of students : ";
    std::cin >> n;

    Student students[n];

    // local variables
    int choice, i = 0, index;

    while (1) // To continously prompt user
    {

        // Menu

        std::cout << "\n\n";
        std::cout << "Enter 1 to add Student \n";
        std::cout << "Enter 2 to display all the students \n";
        std::cout << "Enter 3 for comparison operator ==\n";
        std::cout << "Enter 4 for comparison operator < \n";
        std::cout << "Enter 5 for [] operator  \n";
        std::cout << "Enter 6 to display object using cout <<  \n";
        std::cout << "Enter 7 to exit \n";

        std::cout << "\nEnter choice : ";
        std::cin >> choice; // Input Menu choice
        switch (choice)
        {
        // Input
        case 1:
            // if (i == n)
            // {
            //     std::cout << "Memory Full \n";
            // }
            // else
            // {
            //     students[i].accept();
            //     i++;
            // }
            // break;

            try{
                 students[i].accept();
            }catch(StudentClassException e){
                std::cout<< e.what() ;
            }

        // Display
        case 2:

            if (i == 0)
            {
                std::cout << "No Student \n";
            }
            else
            {
                displayAllStudents(students, i);
            }
            break;

        // == comparison operator
        case 3:
            //change index for other objects 
            if (!(students[0] == students[1]))
            {
                std::cout << "\nEqual \n";
            }
            else
            {
                std::cout << "\nNot Equal \n";
            }
            break;

        // < comparison operator
        case 4:

            //change index for other objects 
            if (students[0] < students[1])
            {
                std::cout << "\nFirst student has Less marks than second \n";
            }
            else
            {
                std::cout << "\nFirst student has More mask than second \n";
            }
            break;
        // [] Operator
        case 5:
            // change index 
            index = 2;
            std::cout <<"\ncharacter : "<< students[0][index];
            break;
        // display object using cout<<
        case 6:
            //Change index to display other object 
            std::cout<< students[0];

            break;
        // If Invalid choice is entered
        case 7:
            exit(0);

            break;
        // If Invalid choice is entered
        default:
            std::cout << "\nEnter Valid Choice \n";
            break;
        }
        std::cout << "\n";
    }

    return 0;
}