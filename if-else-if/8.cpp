#include <iostream>
using namespace std;

int main() {
    double bill;

    cout << "Enter total bill: ";
    cin >> bill;

    if (bill >= 20000) {
        cout << "Discount: 25%";
    }
    else if (bill >= 10000) {
        cout << "Discount: 15%";
    }
    else if (bill >= 5000) {
        cout << "Discount: 10%";
    }
    else {
        cout << "Discount: 5%";
    }

    return 0;
}