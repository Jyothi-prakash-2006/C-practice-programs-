```cpp
#include <iostream>
using namespace std;

int main() {
    double balance = 10000;
    double amount;
    int choice;

    do {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "\nCurrent Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "\nEnter deposit amount: Rs. ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Amount deposited successfully!\n";
                    cout << "New Balance: Rs. " << balance << endl;
                } else {
                    cout << "Invalid amount!\n";
                }
                break;

            case 3:
                cout << "\nEnter withdrawal amount: Rs. ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid amount!\n";
                }
                else if (amount > balance) {
                    cout << "Insufficient balance!\n";
                }
                else {
                    balance -= amount;
                    cout << "Please collect your cash.\n";
                    cout << "Remaining Balance: Rs. " << balance << endl;
                }
                break;

            case 4:
                cout << "\nThank you for using the ATM!\n";
                break;

            default:
                cout << "\nInvalid choice. Please try again.\n";
```
