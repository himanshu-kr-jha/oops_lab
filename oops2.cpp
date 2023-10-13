#include <iostream>
#include <string>
class BankAccount {
private:
    std::string name;
    std::string accountNumber;
    std::string accountType;
    double balance;

public:
    // Constructor to initialize data members
    BankAccount(const std::string& _name, const std::string& _accountNumber, const std::string& _accountType, double _balance) {
        name = _name;
        accountNumber = _accountNumber;
        accountType = _accountType;
        balance = _balance;
    }
   // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid amount for deposit. Amount must be greater than 0." << std::endl;
        }
    }
 // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew $" << amount << ". New balance: $" << balance << std::endl;
        } else if (amount > balance) {
            std::cout << "Insufficient funds for withdrawal." << std::endl;
        } else {
            std::cout << "Invalid amount for withdrawal. Amount must be greater than 0." << std::endl;
        }
    }

    // Function to display account details
    void displayDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};
int main() {
    // Example usage:
    BankAccount account("John Doe", "1234567890", "Savings", 1000.0);
   account.displayDetails();
    account.deposit(500.0);
    account.withdraw(200.0);
    account.displayDetails();
   return 0;
}