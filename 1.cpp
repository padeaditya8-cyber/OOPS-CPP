//Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    double balance;
public:
    // Constructor to initialize account number and balance     
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }
    // Function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }
    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds for withdrawal." << endl;
        } else {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }
    // Function to display the current balance
    void displayBalance() { 
        cout << "Current balance: $" << balance << endl;
    }
};  
int main(){
    // Create a BankAccount object
    BankAccount account(123456, 1000.0);
    
    // Display initial balance
    account.displayBalance();
    
    // Deposit money
    account.deposit(500.0);
    account.displayBalance();
    
    // Withdraw money
    account.withdraw(200.0);
    account.displayBalance();
    
    // Attempt to withdraw more than the balance
    account.withdraw(1500.0);
    
    // Attempt to deposit a negative amount
    account.deposit(-100.0);
    
    return 0;
}