#include <iostream>
using namespace std;
int main() {
    double balance, usedGB, price, extraGB;
    char package, student, roaming;
    cout << "Balance: ";
    cin >> balance;
    cout << "Data Used (GB): ";
    cin >> usedGB;
    cout << "Package (B=Basic, P=Premium): ";
    cin >> package;
    cout << "Student? (Y/N): ";
    cin >> student;
    cout << "Roaming? (Y/N): ";
    cin >> roaming;
    if (package == 'B') {
        price = 1000;
        if (usedGB > 10) {
            extraGB = usedGB - 10;
            price = price + extraGB * 150;
        }
        else {
            price = price;
        }
    }
    else {
        price = 2000;

        if (usedGB > 30) {
            extraGB = usedGB - 30;
            price = price + extraGB * 100;
        }
        else {
            price = price;
        }
    }
    if (student == 'Y') {
        price = price - price * 0.20;
    }
    else {
        price = price;
    }
    if (roaming == 'Y') {
        price = price + price * 0.30;
    }
    else {
        price = price;
    }
    if (balance >= price) {
        balance = balance - price;
        cout << "Package Activated!" << endl;
        cout << "Remaining Balance = Rs. " << balance << endl;
    }
    else {
        cout << "Insufficient Balance!" << endl;
        cout << "Required Amount = Rs. " << price << endl;
    }
    return 0;
}
