#include <iostream>
using namespace std;

int main() {
    int bill;
    char member;

    cout << "Enter total bill amount: ";
    cin >> bill;

    if (bill >= 1000) {
        cout << "Are you a Premium Member? (Y/N): ";
        cin >> member;
        
        if (member == 'Y' || member == 'y') {
            cout << "Free Premium Express Delivery!" << endl;
        } else {
            cout << "Free Standard Delivery." << endl;
        }
    } else {
        cout << "Are you a Premium Member? (Y/N): ";
        cin >> member;
        
        if (member == 'Y' || member == 'y') {
            cout << "Delivery Charge: 40 (Premium Discounted)" << endl;
        } else {
            cout << "Delivery Charge: 100 (Standard Rate)" << endl;
        }
    }
    return 0;
}
