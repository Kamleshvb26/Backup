#include <iostream>

class Account
{
private:
    int balance;

public:
    Account(int b)
    {
        balance = b;
    }
    void withdraw(int amt)
    {
        if (amt < balance)
        {
            throw "Insufficient balance\n";
        }

        balance -= amt;
    }
    void display()
    {
        std::cout << "Balance : " << balance << "\n";
        
    }
};



int main()
{

    Account a(1000);

    try
    {
        a.withdraw(10000);
    }
    catch (const char *msg)
    {
        std::cout << msg;
    }

    
    return 0;
}






