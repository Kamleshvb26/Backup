
// Create account
// Deposit
// Withdraw
// Close the account
// Balance enquiry
// Exit

#include <iostream>
#include <string>

class Bank
{
private:
    long Account_Number;
    std::string First_Name;
    std::string Last_Name;
    float Balance;
    static long NextAccountNumber;
    static int count;

public:
    Bank()
    {
        Account_Number = 0;
        First_Name = "first";
        Last_Name = "last";
        Balance = 0.00;
    }

    // Bank(std::string first_name, std::string last_name) : First_Name(first_name), Last_Name(last_name)
    // {
    //     Balance = 0.00;
    // }

    void create_account();
    void view_account_details();
    void deposite();
    void withdraw();
    void close_the_account();
    int balance_enquiry();
    static int total_account();

    std::string getfirstName() const { return First_Name; }
    void setFirst_Name(const std::string &firstName) { First_Name = firstName; }

    std::string getlastName() const { return Last_Name; }
    void setLast_Name(const std::string &lastName) { Last_Name = lastName; }

    int getaccountNumber() const { return Account_Number; }
    void setAccount_Number(int accountNumber) { Account_Number = accountNumber; }

    float getbalance() const { return Balance; }
    void setBalance(float balance) { Balance = balance; }
};

long Bank::NextAccountNumber = 1000;
int Bank::count=0;

void Bank::create_account()
{
    // std::cout << "Enter account Number: " << std::endl;
    // std::cin >> Account_Number;
    Account_Number = NextAccountNumber;
    Bank::setAccount_Number(NextAccountNumber);
    std::string fname;
    std::string lname;
    std::cout << "Enter first name: " << std::endl;
    std::cin >> fname;
    Bank::setFirst_Name(fname);
    std::cout << "Enter last name: " << std::endl;
    std::cin >> lname;
    Bank::setLast_Name(lname);
    NextAccountNumber++;
    count++;
}

void Bank::view_account_details()
{
    std::cout << "Account Number: " << getaccountNumber() << std::endl;
    std::cout << "First Name: " << getfirstName() << std::endl;
    std::cout << "Last Name: " << getlastName() << std::endl;
    std::cout << "Balance: " << getbalance() << std::endl;
}

void Bank::deposite()
{
    float bal;
    std::cout << "Enter Ammount : " << std::endl;
    std::cin >> bal;
    if(bal>=0)
    {
         Balance+=bal;
    }
    else{
        std::cout<< "Incorrect Ammount..."<<std::endl;
    }
   
}

void Bank::withdraw()
{
    int with;
    std::cout << "Enter Ammount : " << std::endl;
    std::cin >> with;
    Balance = Balance - with;
}

int Bank::balance_enquiry()
{
    return getbalance();
}

int Bank::total_account()
{
    return count;
}

int main()
{
    Bank obj[10];
    int index = 0;
    std::string n;
    int Ac_no,search;
    while (1)
    {
        int choice;
        std::cout << "\n<---------MENU--------->" << std::endl;
        std::cout << "1> Create Account\n2> Deposit\n3> Withdraw\n4> Close The Account\n5> Balance Enquiry\n6> Total Number of Account\n7> Show Account Details\n8> Exit\n"
                  << std::endl;
        std::cout << "Enter your choice : ";
        std::cin >> choice;
        std::cout<<std::endl;
        switch (choice)
        {
        case 1:
            obj[index].create_account();
            std::cout << "\nAccount Created Sucessfully...." << std::endl;
            std::cout << "Your Account Number is : " << obj[index].getaccountNumber() << std::endl;
            index++;
            break;
        case 2:
            std::cout << "Enter your account number " << std::endl;
            std::cin >> Ac_no;
            for (int i = 0; i < index; i++)
            {
                if (Ac_no == obj[i].getaccountNumber())
                {
                    obj[i].deposite();
                    break;
                }
            }
            break;
        case 3:
            std::cout << "Enter your account number " << std::endl;
            std::cin >> Ac_no;
            std::cout<<std::endl;
            for (int i = 0; i <= index; i++)
            {
                if (Ac_no == obj[i].getaccountNumber())
                {
                    obj[i].withdraw();
                    break;
                }
            }
            break;
        case 4:
            break;
        case 5:
            
            std::cout<<"Enter Account Number : ";
            std::cin>>search;
            for(int i=0;i<index;i++)
            {
                if(search==obj[i].getaccountNumber())
                {
                    std::cout<<"Available Balance : Rs"<<obj[i].balance_enquiry()<<std::endl;
                    break;
                }
            }
            
            
            break;
        case 6:
            std::cout<<"Total number of account : "<<Bank::total_account();
            break;
        case 7:
            
            std::cout << "Enter Account No : ";
            std::cin >> search;
            for (int i = 0; i < index; i++)
            {
                if (search == obj[i].getaccountNumber())
                {
                    obj[i].view_account_details();
                }
                // std::cout<<"found\n";
            }

            break;
        case 8:
            std::cout<<"Program Exited..."<<std::endl;
            return 0;

        default:
            break;
        }
    }
}
