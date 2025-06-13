#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string name, string accNumber, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;

        cout << "Account Created Successfully!" << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number (VUID): " << accountNumber << endl;
        cout << "Initial Balance: " << balance << endl << endl;
    }

    void deposit(double amount) {
        cout << "Depositing amount: " << amount << endl;
        balance += amount;
        cout << "Balance after deposit: " << balance << endl << endl;
    }

    void withdraw(double amount) {
        cout << "Withdrawing amount: " << amount << endl;
        if (amount <= balance) {
            balance -= amount;
            cout << "Balance after withdrawal: " << balance << endl << endl;
        } else {
            cout << "Insufficient Balance" << endl << endl;
        }
    }

    void displayDetails() {
        cout << "----- Account Summary -----" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    // Given VUID: BC240401363
    string name = "Muhaddsa Zainab";
    string vuid = "BC240401363";
    double initialBalance = 10000;
    double depositAmount = 1363;  // Last 4 digits
    double withdrawAmount = 2404; // First 4 digits

    BankAccount account(name, vuid, initialBalance);

    // Transaction operations
    account.deposit(depositAmount);
    account.withdraw(withdrawAmount);

    // Final account summary
    account.displayDetails();

    return 0;
}

