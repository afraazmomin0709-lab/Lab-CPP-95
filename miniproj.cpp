#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Class holding account blueprints and specific methods
class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(int accNum, string name, double initialDeposit) {
        accountNumber = accNum;
        accountHolderName = name;
        balance = initialDeposit;
    }

    // Getters
    int getAccountNumber() const { return accountNumber; }
    string getHolderName() const { return accountHolderName; }
    double getBalance() const { return balance; }

    // Core Transactions
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "\n[Success] Deposit of $" << fixed << setprecision(2) << amount << " processed successfully.";
        } else {
            cout << "\n[Error] Invalid deposit amount requested.";
        }
    }

    bool withdraw(double amount) {
        if (amount <= 0) {
            cout << "\n[Error] Invalid withdrawal amount requested.";
            return false;
        }
        if (amount > balance) {
            cout << "\n[Error] Insufficient funds available to process this request.";
            return false;
        }
        balance -= amount;
        cout << "\n[Success] Please dispense your cash: $" << fixed << setprecision(2) << amount;
        return true;
    }

    void displayAccountDetails() const {
        cout << "\n";
        cout << "\n Account Number: " << accountNumber;
        cout << "\n Account Holder: " << accountHolderName;
        cout << "\n Current Balance: $" << fixed << setprecision(2) << balance;
        cout << "\n";
    }
};

// Global vector mimicking a lightweight database pool
vector<BankAccount> bankDatabase;

// Helper function to locate a specific pointer references
BankAccount* findAccount(int accNum) {
    for (auto &acc : bankDatabase) {
        if (acc.getAccountNumber() == accNum) {
            return &acc;
        }
    }
    return nullptr;
}

int main() {
    int choice;
    cout << "=== Welcome to the Terminal Bank Management System ===" << endl;

    do {
        cout << "\n\n MAIN MENU ";
        cout << "\n1. Create New Account";
        cout << "\n2. Deposit Funds";
        cout << "\n3. Withdraw Funds";
        cout << "\n4. Check Balance / Statement";
        cout << "\n5. View All Registered Accounts";
        cout << "\n6. Exit Application";
        cout << "\nEnter choice index (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int accNum;
                string name;
                double initialDeposit;

                cout << "\nEnter a unique Account Number: ";
                cin >> accNum;
                
                // Primary Key check
                if (findAccount(accNum) != nullptr) {
                    cout << "\n[Error] Account ID " << accNum << " is already taken!";
                    break;
                }

                cin.ignore(); // Clean leftover stream characters
                cout << "Enter Account Holder's Full Name: ";
                getline(cin, name);
                cout << "Enter Opening Deposit Amount ($): ";
                cin >> initialDeposit;

                if (initialDeposit < 0) {
                    cout << "\n[Error] Initial balance cannot be negative.";
                } else {
                    bankDatabase.push_back(BankAccount(accNum, name, initialDeposit));
                    cout << "\n[Success] Registration finalized for " << name;
                }
                break;
            }
            case 2: {
                int accNum;
                double amount;
                cout << "\nEnter Account Number for deposit: ";
                cin >> accNum;
                BankAccount* acc = findAccount(accNum);
                if (acc != nullptr) {
                    cout << "Enter Amount to Deposit ($): ";
                    cin >> amount;
                    acc->deposit(amount);
                } else {
                    cout << "\n[Error] Account identification profile not found.";
                }
                break;
            }
            case 3: {
                int accNum;
                double amount;
                cout << "\nEnter Account Number for withdrawal: ";
                cin >> accNum;
                BankAccount* acc = findAccount(accNum);
                if (acc != nullptr) {
                    cout << "Enter Amount to Withdraw ($): ";
                    cin >> amount;
                    acc->withdraw(amount);
                } else {
                    cout << "\n[Error] Account identification profile not found.";
                }
                break;
            }
            case 4: {
                int accNum;
                cout << "\nEnter Account Number: ";
                cin >> accNum;
                BankAccount* acc = findAccount(accNum);
                if (acc != nullptr) {
                    acc->displayAccountDetails();
                } else {
                    cout << "\n[Error] Account identification profile not found.";
                }
                break;
            }
            case 5: {
                if (bankDatabase.empty()) {
                    cout << "\n[Notification] No institutional client logs saved in the temporary schema.";
                    break;
                }
                cout << "\n REGISTERED ACCOUNTS ";
                for (const auto &acc : bankDatabase) {
                    acc.displayAccountDetails();
                }
                break;
            }
            case 6:
                cout << "\nThank you for using our digital bank module terminal. Goodbye!\n";
                break;
            default:
                cout << "\n[Warning] Input outside standard index bounds. Try options 1 through 6.";
        }
    } while (choice != 6);

    return 0;
}