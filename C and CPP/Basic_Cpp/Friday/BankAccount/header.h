#ifndef ACCOUNT_H
#define ACCOUNT_H
 
class Account {
private:
    int accountNo;
    double balance;
 
public:
    Account();
 
    // Getter functions
    int getAccountNo() const;
    double getBalance() const;
 
    // Setter functions
    void setAccountNo(int newAccountNo);
    void setBalance(double newBalance);
 
    void input();
    void output();
    bool search(int query);
    void modify();
};
 
#endif // ACCOUNT_H