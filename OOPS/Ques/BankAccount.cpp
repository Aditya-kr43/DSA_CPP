// Create a class BankAccount with private attributes accountNumber and 
// balance. Implement public methods deposit(), withdraw(), and getBalance() to 
// manage the account.

#include<iostream>
using namespace std;

class BankAccount
{
    private:
    int accountNumber;
    int balance;

    public:
    
    //constructor
    BankAccount(int accNo, int intialBalance)
    {
        accountNumber = accNo;
        balance = intialBalance;
    }
    void deposit(int amount)
    {
        balance = balance + amount;
        cout << "amount deposits: " << amount << endl;
    }

    void withdraw(int amount)
    {
        if(amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawn amount: " << amount << endl;
        }
        else{
            cout << "insuficent balance" << endl;
        }
        
    }
    void getbalance()
    {
        cout << "Balance: " << balance << endl;
    }

};

int main()
{
    BankAccount acc1(123456, 5000);
    acc1.deposit(1000);
    acc1.getbalance();

    acc1.withdraw(2000);
    acc1.getbalance();

    return 0;

}