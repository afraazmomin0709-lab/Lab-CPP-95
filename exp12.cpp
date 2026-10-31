
#include <iostream>
#include <fstream>
using namespace std;


class Bank
{
protected:
    int accNo;
    string name;
    double balance;

public:
   
    Bank(int a, string n, double b)
    {
        accNo = a;
        name = n;
        balance = b;
    }

    
    virtual void display()
    {
        cout << "\nAccount No: " << accNo;
        cout << "\nName: " << name;
        cout << "\nBalance: Rs." << balance << endl;
    }

    
    void deposit(double amount)
    {
        balance += amount;
    }

    void deposit(double amount, double bonus)
    {
        balance += amount + bonus;
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal successful!\n";
        }
        else
            cout << "Insufficient balance!\n";
    }

    double getBalance()
    {
        return balance;
    }

    virtual ~Bank() {}
};


class Savings : public Bank
{
public:
    Savings(int a, string n, double b)
        : Bank(a, n, b) {}

    void display() override
    {
        cout << "\n--- Savings Account ---";
        Bank::display();
    }
};

int main()
{
    Savings s(101, "Siddarth", 5000);

    Bank* ptr = &s;

    int choice;
    double amount;

    do
    {
        cout << "\n===== BANKING SYSTEM =====";
        cout << "\n1. Display Account";
        cout << "\n2. Deposit";
        cout << "\n3. Withdraw";
        cout << "\n4. Check Balance";
        cout << "\n5. Save Details";
        cout << "\n6. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            ptr->display();
            break;

        case 2:
            cout << "Enter amount: ";
            cin >> amount;
            if (amount > 0)
                s.deposit(amount);
            else
                cout << "Invalid amount!\n";
            break;

        case 3:
            cout << "Enter amount: ";
            cin >> amount;
            s.withdraw(amount);
            break;

        case 4:
            cout << "Balance: Rs." << s.getBalance();
            break;

        case 5:
        {
            ofstream file("bank.txt");
            file << "Account: " << 101;
            file << "\nName: Siddarth";
            file << "\nBalance: " << s.getBalance();
            file.close();
            cout << "Details saved successfully!\n";
            break;
        }

        case 6:
            cout << "Thank you for banking!";
            break;

        default:
            cout << "Invalid choice!";
        }

    } while (choice != 6);

    return 0;
}