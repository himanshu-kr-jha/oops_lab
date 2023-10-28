#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string name;
    string accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize data members
    BankAccount(const string& _name, const string& _accountNumber, const string& _accountType, double _balance) {
        name = _name;
        accountNumber = _accountNumber;
        accountType = _accountType;
        balance = _balance;
    }
   // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Invalid amount for deposit. Amount must be greater than 0." << endl;
        }
    }
 // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew $" << amount << ". New balance: $" << balance << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds for withdrawal." << endl;
        } else {
            cout << "Invalid amount for withdrawal. Amount must be greater than 0." << endl;
        }
    }

    // Function to display account details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: $" << balance << endl;
    }
};
int main() {
    // Example usage:
    BankAccount account("John Doe", "1234567890", "Savings", 1000.0);
   account.displayDetails();
    account.deposit(500.0);
    account.withdraw(200.0);
    account.displayDetails();
    cout << "Made by Himanshu Kumar Jha \n";

   return 0;
}