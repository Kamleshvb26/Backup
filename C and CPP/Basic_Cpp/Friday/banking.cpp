#include<iostream>
class LowBalanceException:public std::exception{};
class Account
{
    int balance;
    public:
    Account(int b=5000)
    {
        balance=b;
    }
    void withdraw(int amount)
    {
        if(balance-amount<3000)
        {
            throw "Low Balance...";
        }
        balance-=amount;
    }
};
int main()
{
Account obj(5000);

    try
    {
        /* code */
        obj.withdraw(5000);
    }
    // catch(const char *msg)
    // {
    //     std::cout<<msg;
    // }
    catch(...)
    {
        std::cout<<"Error...";
    }
    


return 0;
}