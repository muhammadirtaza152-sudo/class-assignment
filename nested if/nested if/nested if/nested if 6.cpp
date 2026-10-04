#include <iostream>
using namespace std;

int main() {
    int balance = 5000;
    int amount;

    cout << "Your current balance is: " << balance << endl;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount > 0) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Transaction Successful! Remaining balance: " << balance << endl;
        } else {
            cout << "Transaction Failed. Insufficient balance!" << endl;
        }
    } else {
        cout << "Invalid Amount! Please enter a positive value." << endl;
    }
    return 0;
}
