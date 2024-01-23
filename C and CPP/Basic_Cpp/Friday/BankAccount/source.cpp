#include "header.h"
#include <iostream>
 
Account::Account() : accountNo(0), balance(0.0) {}
 
// Getter function implementations
int Account::getAccountNo() const {
    return accountNo;
}
 
double Account::getBalance() const {
    return balance;
}
 
// Setter function implementations
void Account::setAccountNo(int newAccountNo) {
    accountNo = newAccountNo;
}
 
void Account::setBalance(double newBalance) {
    balance = newBalance;
}
 
// void Account::input() {
//     std::cout << "Enter account number: ";
//     std::cin >> accountNo;
//     std::cout << "Enter initial balance: ";
//     std::cin >> balance;
// }
 
// void Account::output() {
//     std::cout << "Account Number: " << accountNo << std::endl;
//     std::cout << "Account Balance: $" << balance << std::endl;
// }
 
bool Account::search(int query) {
    return accountNo == query;
}
 
void Account::modify() {
    std::cout << "Enter new account number: ";
    std::cin >> accountNo;
    std::cout << "Enter new balance: ";
    std::cin >> balance;
}