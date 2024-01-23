#include <iostream>
#include "header.h"
 
int main() {
    Account accounts[5];
    int choice;
    int query;
 
    while (true) {
        std::cout << "\nAccount Management System Menu" << std::endl;
        std::cout << "1. Input Account\n2. Output Account\n3. Search Account\n4. Modify Account\n5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
 
        switch (choice) {
            case 1:
                for (int i = 0; i < 5; i++) {
                    if (accounts[i].getAccountNo() == 0) {
                        int accountNo;
                        double balance;
                        std::cout << "Enter account number: ";
                        std::cin >> accountNo;
                        std::cout << "Enter initial balance: ";
                        std::cin >> balance;
                        accounts[i].setAccountNo(accountNo);
                        accounts[i].setBalance(balance);
                        break;
                    }
                }
                break;
 
            case 2:
                std::cout << "Account List:" << std::endl;
                for (int i = 0; i < 5; i++) {
                    if (accounts[i].getAccountNo() != 0) {
                        std::cout << "Account Number: " << accounts[i].getAccountNo() << std::endl;
                        std::cout << "Account Balance: $" << accounts[i].getBalance() << std::endl;
                    }
                }
                break;
 
            case 3:
                std::cout << "Enter the account number to search: ";
                std::cin >> query;
                for (int i = 0; i < 5; i++) {
                    if (accounts[i].search(query)) {
                        std::cout << "Account found:" << std::endl;
                        std::cout << "Account Number: " << accounts[i].getAccountNo() << std::endl;
                        std::cout << "Account Balance: $" << accounts[i].getBalance() << std::endl;
                        break;
                    }
                }
                break;
 
            case 4:
                std::cout << "Enter the account number to modify: ";
                std::cin >> query;
                for (int i = 0; i < 5; i++) {
                    if (accounts[i].search(query)) {
                        int newAccountNo;
                        double newBalance;
                        std::cout << "Enter new account number: ";
                        std::cin >> newAccountNo;
                        std::cout << "Enter new balance: ";
                        std::cin >> newBalance;
                        accounts[i].setAccountNo(newAccountNo);
                        accounts[i].setBalance(newBalance);
                        break;
                    }
                }
                break;
 
            case 5:
                std::cout << "Exiting the program. Goodbye!" << std::endl;
                return 0;
 
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
 
    return 0;
}