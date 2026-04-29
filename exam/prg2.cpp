#include<iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    float balance;
    string ownerName;

public:

    void setData() {
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter owner name: ";
        cin >> ownerName;
        cout << "Enter initial balance: ";
        cin >> balance;
    }

 
    void credit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance = balance + amount;
        cout << "Amount credited successfully.\n";
    }

   
    void debit() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        
        if(amount > balance) {
            cout << "Insufficient balance!\n";
        } else {
            balance = balance - amount;
            cout << "Amount debited successfully.\n";
        }
    }


    void display() {
        cout << "\nAccount Details:\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b1;

    b1.setData();   
    b1.credit();    
    b1.debit();     
    b1.display();   

}